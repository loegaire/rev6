import struct

def rotate_left(x, n):
    return ((x << n) | (x >> (32 - n))) & 0xFFFFFFFF

def hash_transform(state):
    # Unpack state (16 uints)
    s = list(state)

    # 10 rounds
    for _ in range(10):
        # Line 1
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

        # Line 2 (Block 2)
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

        # Line 3 (Block 3)
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

        # Line 4 (Block 4)
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

        # Mixing
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

    # Add to original state (FUN_00401fcc line 144)
    out = [(x + y) & 0xFFFFFFFF for x, y in zip(s, state)]
    return out

def get_keystream_block(length, offset, param_1=0xd0c0b0a, param_2=0x11100f0e):
    state = [
        0xb979379e, 0x157c4a7f, 0x60c09cf3, 0x34c8ed5c,
        param_1, param_1, param_1, param_1,
        param_2, param_2, param_2, param_2,
        0, 0, 0, 0
    ]

    # Counter mode-ish behavior
    # In FUN_00401f4d, it increments a counter at +0x80 (128)
    # The counter is passed as param_1 to FUN_00401fcc?
    # No, FUN_004022b8 sets:
    # state[12] = length >> 6
    # state[13] = length >> 6 (upper bits?)
    # state[32] (0x80) = length & 0x3f
    # But wait, FUN_00401f9b is called when counter > 0x3f.
    # It re-runs FUN_00401fcc on the state.

    # We need to simulate the state evolution.
    # The state is persistent.

    # Initial Setup
    state[12] = (length * 8) & 0xFFFFFFFF # Length in bits? No, simple length.
    state[13] = 0

    # Actually, let's look at FUN_004022b8 again.
    # *(uint *)((int)this + 0x30) = param_1 >> 6 | param_2 << 0x1a;
    # *(uint *)((int)this + 0x34) = param_2 >> 6;
    # param_1 is length. param_2 is 0.
    # So state[12] = length >> 6.

    # BUT, FUN_00401f4d increments a counter at +0x80.
    # When it overflows 0x3f, it calls FUN_00401f9b.
    # FUN_00401f9b calls FUN_00401fcc(state, output_buffer).
    # FUN_00401fcc MODIFIES the state (in place).

    # So we need to generate the keystream block by block.
    # Block 0: generated by first call to FUN_00401fcc

    out_state = hash_transform(state)

    # Re-pack to bytes
    block = b''
    for val in out_state:
        block += struct.pack('<I', val)
    return block

with open('patch.bin', 'rb') as f:
    data = bytearray(f.read())

length = len(data)
key = b''
# Generate enough keystream
# Note: The code generates 64 bytes at a time.
# The state evolves. We need to implement the loop.

state = [
    0xb979379e, 0x157c4a7f, 0x60c09cf3, 0x34c8ed5c,
    0xd0c0b0a, 0xd0c0b0a, 0xd0c0b0a, 0xd0c0b0a,
    0x11100f0e, 0x11100f0e, 0x11100f0e, 0x11100f0e,
    0, 0, 0, 0
]

# Set length in state (FUN_004022b8)
# param_1 = length (24584)
# param_2 = 0
# state[12] = param_1 >> 6 | param_2 << 0x1a
# state[13] = param_2 >> 6
# Wait, this sets the counter?
# 24584 = 0x6008. 0x6008 >> 6 = 0x180.
# So state[12] = 0x180.

state[12] = (length >> 6) & 0xFFFFFFFF
state[13] = 0

keystream = b''
num_blocks = (length + 63) // 64

for _ in range(num_blocks):
    # Transform state
    out_state = hash_transform(state)

    # Append to keystream
    for val in out_state:
        keystream += struct.pack('<I', val)

    # Update state for next block
    # FUN_00401fcc updates the state in place!
    state = out_state

# XOR decrypt
decrypted = bytearray()
for i in range(length):
    decrypted.append(data[i] ^ keystream[i])

with open('patch_decrypted.bin', 'wb') as f:
    f.write(decrypted)

print("Decrypted patch.bin")
