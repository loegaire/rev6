import struct

with open('patch.bin', 'rb') as f:
    data = f.read()

# Structure seems to be 16 bytes per entry
# Offset (4), Value (4), Type/param (4), Flags (4)
entries = []
for i in range(0, len(data), 16):
    chunk = data[i:i+16]
    if len(chunk) < 16: break
    offset, val, type_, flags = struct.unpack('<IIII', chunk)
    entries.append({'offset': offset, 'val': val, 'type': type_, 'flags': flags})

print(f"Total entries: {len(entries)}")
for i, e in enumerate(entries[:20]):
    print(f"Entry {i}: Offset={hex(e['offset'])}, Val={hex(e['val'])}, Type={hex(e['type'])}, Flags={hex(e['flags'])}")

# Check pattern
print("\nScanning for patterns...")
# Type 0xA000 seems special.
