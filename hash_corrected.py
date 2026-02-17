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
        s[5] = rotate_left(uVar7, 7) # Reusing uVar3 from decomp as s[5]

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

def get_keystream(param_1, param_2, param_3, param_4):
    # Initialize state (FUN_00401e67)
    state = [
        0xb979379e, 0x157c4a7f, 0x60c09cf3, 0x34c8ed5c,
        0xd0c0b0a, 0xd0c0b0a, 0xd0c0b0a, 0xd0c0b0a,
        0x11100f0e, 0x11100f0e, 0x11100f0e, 0x11100f0e,
        0, 0, 0, 0
    ]

    # Init with params (FUN_00401e39)
    # param_1, param_2 passed to FUN_00401e67 as arrays, but here they are part of state init?
    # Actually FUN_00401e67 takes (this, param_1, param_2).
    # In FUN_00404059: FUN_00401e39(local_90, puVar3, puVar4, uVar5, uVar6);
    # puVar3 is &0xd0c0b0a (8 times), puVar4 is &0x11100f0e (4 times + 0, 0, 0, 0)
    # uVar5 = 0, uVar6 = 0
    # Then FUN_004022b8(local_90, length, 0) updates state[12] and state[13] (offsets 0x30, 0x34).
    # Note: FUN_004022b8 calls FUN_00401f9b which calls FUN_00401fcc (the hash transform).
    # So the state is transformed ONCE before generating keystream?

    # Update length (FUN_004022b8)
    length = param_1
    state[12] = (length >> 6) | (0 << 26) # param_2 is 0
    state[13] = 0 >> 6

    # Transform (FUN_00401f9b calls FUN_00401fcc)
    state = hash_transform(state)

    # Generate keystream bytes (FUN_004022ec called in loop in FUN_00401f9b?)
    # Wait, FUN_00401f9b calls FUN_00401fcc then loop FUN_004022ec?
    # No, FUN_00401f9b:
    # FUN_00401fcc(this, local_44); -> Transforms state into local_44
    # loop uVar1 < 0x10: FUN_004022ec(local_44[uVar1], dst)
    # So local_44 IS the keystream (64 bytes).

    keystream = b''
    for val in state:
        keystream += struct.pack('<I', val)

    return keystream

# Test with length
length = 24584 # size of patch.bin
keystream = get_keystream(length, 0, 0, 0)
print(keystream.hex())
