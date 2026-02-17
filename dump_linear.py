import json

def dump_linear():
    try:
        with open('patch_entries.json', 'r') as f:
            entries = json.load(f)

        # Dump 0..50
        print("Linear Trace (0-50):")
        for i in range(50):
            e = entries[i]
            # Use original 'op' and 'operand' from redump_patch.py
            print(f"ID {i}: Op {hex(e['op'])}, Arg {hex(e['operand'])} ('{chr(e['operand']) if 32<=e['operand']<=126 else '?'}')")

    except Exception as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    dump_linear()
