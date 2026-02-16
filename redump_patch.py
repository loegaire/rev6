import struct
import json
import os

def dump_patch():
    try:
        fname = 'patch.bin'
        if not os.path.exists(fname):
            print(f"Error: {fname} not found")
            return

        with open(fname, 'rb') as f:
            data = f.read()
            count = struct.unpack('<I', data[:4])[0]
            print(f"Count: {count}")

            entries = []
            for i in range(count):
                offset = 4 + i * 16
                entry_data = data[offset:offset+16]
                param, rva, op, operand = struct.unpack('<IIII', entry_data)

                entries.append({
                    'id': i,
                    'param': param,
                    'rva': rva,
                    'op': op,
                    'operand': operand
                })

            with open('patch_entries.json', 'w') as out:
                json.dump(entries, out, indent=2)
            print(f"Dumped {len(entries)} entries.")

    except Exception as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    dump_patch()
