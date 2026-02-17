import struct

def rotate_left(x, n):
    return ((x << n) | (x >> (32 - n))) & 0xFFFFFFFF

def hash_transform(state):
    s = list(state)
    for _ in range(10):
        # Block 1
        s[12] = (s[12] ^ (s[0] + s[4]) & 0xFFFFFFFF) & 0xFFFFFFFF
        s[12] = rotate_left(s[12], 16)
        s[8] = (s[8] + s[12]) & 0xFFFFFFFF
        uVar5 = s[8] ^ s[4]
        uVar5 = rotate_left(uVar5, 12)
        s[0] = (s[0] + s[4] + uVar5) & 0xFFFFFFFF
        s[12] = s[0] ^ s[12]
        s[4] = rotate_left(s[12], 8)
        s[8] = (s[4] + s[8]) & 0xFFFFFFFF
        uVar5 = s[8] ^ uVar5
        uVar5 = rotate_left(uVar5, 7)

        # Block 2
        s[13] = (s[13] ^ (s[1] + s[5]) & 0xFFFFFFFF) & 0xFFFFFFFF
        s[13] = rotate_left(s[13], 16)
        s[9] = (s[9] + s[13]) & 0xFFFFFFFF
        uVar7 = s[9] ^ s[5]
        uVar7 = rotate_left(uVar7, 12)
        s[1] = (s[1] + s[5] + uVar7) & 0xFFFFFFFF
        s[13] = s[1] ^ s[13]
        s[5] = rotate_left(s[13], 8)
        s[9] = (s[5] + s[9]) & 0xFFFFFFFF
        uVar7 = s[9] ^ uVar7
        s[5] = rotate_left(uVar7, 7)

        # Block 3
        s[14] = (s[2] + s[6]) & 0xFFFFFFFF ^ s[14]
        uVar7 = rotate_left(s[14], 16)
        s[10] = (s[10] + uVar7) & 0xFFFFFFFF
        uVar9 = s[10] ^ s[6]
        uVar10 = rotate_left(uVar9, 12)
        s[2] = (s[2] + s[6] + uVar10) & 0xFFFFFFFF
        uVar7 = s[2] ^ uVar7
        uVar9 = rotate_left(uVar7, 8)
        s[10] = (uVar9 + s[10]) & 0xFFFFFFFF
        uVar10 = s[10] ^ uVar10
        uVar7 = rotate_left(uVar10, 7)

        # Block 4
        s[15] = (s[3] + s[7]) & 0xFFFFFFFF ^ s[15]
        uVar6 = rotate_left(s[15], 16)
        s[11] = (s[11] + uVar6) & 0xFFFFFFFF
        uVar10 = s[11] ^ s[7]
        uVar10 = rotate_left(uVar10, 12)
        s[3] = (s[3] + s[7] + uVar10) & 0xFFFFFFFF
        uVar6 = s[3] ^ uVar6
        uVar6 = rotate_left(uVar6, 8)
        s[11] = (uVar6 + s[11]) & 0xFFFFFFFF
        uVar10 = s[11] ^ uVar10
        uVar10 = rotate_left(uVar10, 7)

        # Mix
        s[0] = (s[0] + s[5]) & 0xFFFFFFFF
        uVar6 = s[0] ^ uVar6
        uVar6 = rotate_left(uVar6, 16)
        s[10] = (uVar6 + s[10]) & 0xFFFFFFFF
        s[5] = s[10] ^ s[5]
        s[5] = rotate_left(s[5], 12)
        s[0] = (s[0] + s[5]) & 0xFFFFFFFF
        uVar6 = uVar6 ^ s[0]
        s[15] = rotate_left(uVar6, 8)
        s[10] = (s[10] + s[15]) & 0xFFFFFFFF
        s[5] = s[5] ^ s[10]
        s[1] = (s[1] + uVar7) & 0xFFFFFFFF
        s[4] = s[4] ^ s[1]
        s[5] = rotate_left(s[5], 7)
        uVar6 = rotate_left(s[4], 16)
        s[11] = (s[11] + uVar6) & 0xFFFFFFFF
        uVar7 = s[11] ^ uVar7
        s[4] = rotate_left(uVar7, 12)
        s[1] = (s[4] + s[1]) & 0xFFFFFFFF
        uVar6 = s[1] ^ uVar6
        uVar7 = rotate_left(uVar6, 8)
        s[11] = (uVar7 + s[11]) & 0xFFFFFFFF
        s[4] = s[11] ^ s[4]
        s[6] = rotate_left(s[4], 7)

        s[2] = (s[2] + uVar10) & 0xFFFFFFFF
        s[13] = s[13] ^ s[2]
        s[4] = rotate_left(s[13], 16)
        s[8] = (s[8] + s[4]) & 0xFFFFFFFF
        uVar10 = s[8] ^ uVar10
        uVar10 = rotate_left(uVar10, 12)
        s[2] = (s[2] + uVar10) & 0xFFFFFFFF
        s[4] = s[2] ^ s[4]
        s[13] = rotate_left(s[4], 8)
        s[8] = (s[13] + s[8]) & 0xFFFFFFFF
        uVar10 = s[8] ^ uVar10
        s[7] = rotate_left(uVar10, 7)

        s[3] = (s[3] + uVar5) & 0xFFFFFFFF
        uVar9 = uVar9 ^ s[3]
        s[4] = rotate_left(uVar9, 16)
        s[9] = (s[9] + s[4]) & 0xFFFFFFFF
        uVar5 = s[9] ^ uVar5
        uVar5 = rotate_left(uVar5, 12)
        s[3] = (s[3] + uVar5) & 0xFFFFFFFF
        s[4] = s[3] ^ s[4]
        s[14] = rotate_left(s[4], 8)
        s[9] = (s[9] + s[14]) & 0xFFFFFFFF
        uVar5 = s[9] ^ uVar5
        s[4] = rotate_left(uVar5, 7)

    return [(x + y) & 0xFFFFFFFF for x, y in zip(s, state)]

# Try decrypting with key=0 (original patch.bin content)
with open('patch.bin', 'rb') as f:
    data = bytearray(f.read())

length = len(data)
state = [
    0xb979379e, 0x157c4a7f, 0x60c09cf3, 0x34c8ed5c,
    0xd0c0b0a, 0xd0c0b0a, 0xd0c0b0a, 0xd0c0b0a,
    0x11100f0e, 0x11100f0e, 0x11100f0e, 0x11100f0e,
    0, 0, 0, 0
]
state[12] = (length >> 6) & 0xFFFFFFFF
state[13] = 0

keystream = b''
num_blocks = (length + 63) // 64
for _ in range(num_blocks):
    out_state = hash_transform(state)
    for val in out_state:
        keystream += struct.pack('<I', val)
    state = out_state

decrypted = bytearray()
for i in range(length):
    decrypted.append(data[i] ^ keystream[i])

# Check for strings
import string
printable = set(string.printable.encode())
strings = []
current = bytearray()
for b in decrypted:
    if b in printable:
        current.append(b)
    else:
        if len(current) > 4:
            strings.append(current.decode())
        current = bytearray()

print(f"Decrypted first 64 bytes: {decrypted[:64].hex()}")
print("Strings found:", strings[:10])
