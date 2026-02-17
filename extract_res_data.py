import struct

def rva_to_offset(rva, sections):
    for s in sections:
        if rva >= s['virtual_address'] and rva < s['virtual_address'] + s['virtual_size']:
            return rva - s['virtual_address'] + s['pointer_to_raw_data']
    return None

with open('Crackme.exe', 'rb') as f:
    data = f.read()

pe_offset = struct.unpack('<I', data[0x3c:0x40])[0]
num_sections = struct.unpack('<H', data[pe_offset+6:pe_offset+8])[0]
opt_header_size = struct.unpack('<H', data[pe_offset+20:pe_offset+22])[0]

sections = []
sec_table_offset = pe_offset + 24 + opt_header_size
for i in range(num_sections):
    sec_data = data[sec_table_offset + i*40 : sec_table_offset + (i+1)*40]
    name = sec_data[0:8].rstrip(b'\x00')
    virtual_size, virtual_address, raw_size, raw_ptr = struct.unpack('<IIII', sec_data[8:24])
    sections.append({
        'name': name,
        'virtual_size': virtual_size,
        'virtual_address': virtual_address,
        'raw_size': raw_size,
        'pointer_to_raw_data': raw_ptr
    })

# Extract 1111 (0x75358, 24584)
offset = 0x75358
size = 24584
with open('patch.bin', 'wb') as f:
    f.write(data[offset:offset+size])

print("Extracted patch.bin")
