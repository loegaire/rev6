import struct

def rotate_left(x, n):
    return ((x << n) | (x >> (32 - n))) & 0xFFFFFFFF

def hash_step(state, block):
    # Unpack state
    local_10 = state[0]
    local_18 = state[1]
    local_24 = state[2]
    local_34 = state[3]
    uVar2 = state[4]
    uVar3 = state[5]
    local_20 = state[6]
    local_30 = state[7]
    local_14 = state[8]
    local_1c = state[9]
    local_2c = state[10]
    local_38 = state[11]
    uVar7 = state[12]
    uVar8 = state[13]
    local_28 = state[14]
    local_8 = state[15]

    for i in range(10):
        # Line 1: uVar7 = uVar7 ^ local_10 + uVar2;
        uVar7 = (uVar7 ^ (local_10 + uVar2) & 0xFFFFFFFF) & 0xFFFFFFFF
        # Line 2: uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
        uVar7 = rotate_left(uVar7, 16)
        # Line 3: local_14 = local_14 + uVar7;
        local_14 = (local_14 + uVar7) & 0xFFFFFFFF
        # Line 4: uVar5 = local_14 ^ uVar2;
        uVar5 = local_14 ^ uVar2
        # Line 5: uVar5 = uVar5 >> 0x14 | uVar5 << 0xc;
        uVar5 = rotate_left(uVar5, 12)
        # Line 6: local_10 = local_10 + uVar2 + uVar5;
        local_10 = (local_10 + uVar2 + uVar5) & 0xFFFFFFFF
        # Line 7: uVar7 = local_10 ^ uVar7;
        uVar7 = local_10 ^ uVar7
        # Line 8: uVar2 = uVar7 >> 0x18 | uVar7 << 8;
        uVar2 = rotate_left(uVar7, 8)
        # Line 9: local_14 = uVar2 + local_14;
        local_14 = (uVar2 + local_14) & 0xFFFFFFFF
        # Line 10: uVar5 = local_14 ^ uVar5;
        uVar5 = local_14 ^ uVar5
        # Line 11: uVar5 = uVar5 >> 0x19 | uVar5 << 7;
        uVar5 = rotate_left(uVar5, 7)

        # Block 2
        uVar8 = (uVar8 ^ (local_18 + uVar3) & 0xFFFFFFFF) & 0xFFFFFFFF
        uVar8 = rotate_left(uVar8, 16)
        local_1c = (local_1c + uVar8) & 0xFFFFFFFF
        uVar7 = local_1c ^ uVar3
        uVar7 = rotate_left(uVar7, 12)
        local_18 = (local_18 + uVar3 + uVar7) & 0xFFFFFFFF
        uVar8 = local_18 ^ uVar8
        uVar8 = rotate_left(uVar8, 8)
        local_1c = (uVar8 + local_1c) & 0xFFFFFFFF
        uVar7 = local_1c ^ uVar7
        uVar3 = rotate_left(uVar7, 7)

        # Block 3
        local_28 = (local_24 + local_20) & 0xFFFFFFFF ^ local_28
        uVar7 = rotate_left(local_28, 16)
        local_2c = (local_2c + uVar7) & 0xFFFFFFFF
        uVar9 = local_2c ^ local_20
        uVar10 = rotate_left(uVar9, 12)
        local_24 = (local_24 + local_20 + uVar10) & 0xFFFFFFFF
        uVar7 = local_24 ^ uVar7
        uVar9 = rotate_left(uVar7, 8)
        local_2c = (uVar9 + local_2c) & 0xFFFFFFFF
        uVar10 = local_2c ^ uVar10
        uVar7 = rotate_left(uVar10, 7)

        # Block 4
        local_8 = (local_34 + local_30) & 0xFFFFFFFF ^ local_8
        uVar6 = rotate_left(local_8, 16)
        local_38 = (local_38 + uVar6) & 0xFFFFFFFF
        uVar10 = local_38 ^ local_30
        uVar10 = rotate_left(uVar10, 12)
        local_34 = (local_34 + local_30 + uVar10) & 0xFFFFFFFF
        uVar6 = local_34 ^ uVar6
        uVar6 = rotate_left(uVar6, 8)
        local_38 = (uVar6 + local_38) & 0xFFFFFFFF
        uVar10 = local_38 ^ uVar10
        uVar10 = rotate_left(uVar10, 7)

        # Mix
        local_10 = (local_10 + uVar3) & 0xFFFFFFFF
        uVar6 = local_10 ^ uVar6
        uVar6 = rotate_left(uVar6, 16)
        local_2c = (uVar6 + local_2c) & 0xFFFFFFFF
        uVar3 = local_2c ^ uVar3
        uVar3 = rotate_left(uVar3, 12)
        local_10 = (local_10 + uVar3) & 0xFFFFFFFF
        uVar6 = uVar6 ^ local_10
        local_8 = rotate_left(uVar6, 8)
        local_2c = (local_2c + local_8) & 0xFFFFFFFF
        uVar3 = uVar3 ^ local_2c
        local_18 = (local_18 + uVar7) & 0xFFFFFFFF
        uVar2 = uVar2 ^ local_18
        uVar3 = rotate_left(uVar3, 7)
        uVar6 = rotate_left(uVar2, 16)
        local_38 = (local_38 + uVar6) & 0xFFFFFFFF
        uVar7 = local_38 ^ uVar7
        uVar2 = rotate_left(uVar7, 12)
        local_18 = (uVar2 + local_18) & 0xFFFFFFFF
        uVar6 = local_18 ^ uVar6
        uVar7 = rotate_left(uVar6, 8)
        local_38 = (uVar7 + local_38) & 0xFFFFFFFF
        uVar2 = local_38 ^ uVar2
        local_20 = rotate_left(uVar2, 7)

        local_24 = (local_24 + uVar10) & 0xFFFFFFFF
        uVar8 = uVar8 ^ local_24
        uVar2 = rotate_left(uVar8, 16)
        local_14 = (local_14 + uVar2) & 0xFFFFFFFF
        uVar10 = local_14 ^ uVar10
        uVar10 = rotate_left(uVar10, 12)
        local_24 = (local_24 + uVar10) & 0xFFFFFFFF
        uVar2 = local_24 ^ uVar2
        uVar8 = rotate_left(uVar2, 8)
        local_14 = (uVar8 + local_14) & 0xFFFFFFFF
        uVar10 = local_14 ^ uVar10
        local_30 = rotate_left(uVar10, 7)

        local_34 = (local_34 + uVar5) & 0xFFFFFFFF
        uVar9 = uVar9 ^ local_34
        uVar2 = rotate_left(uVar9, 16)
        local_1c = (local_1c + uVar2) & 0xFFFFFFFF
        uVar5 = local_1c ^ uVar5
        uVar5 = rotate_left(uVar5, 12)
        local_34 = (local_34 + uVar5) & 0xFFFFFFFF
        uVar2 = local_34 ^ uVar2
        local_28 = rotate_left(uVar2, 8)
        local_1c = (local_1c + local_28) & 0xFFFFFFFF
        uVar5 = local_1c ^ uVar5
        uVar2 = rotate_left(uVar5, 7)

    # Re-pack state (lines 142-160)
    # The decompiled code shows additions to the original state pointer.
    # We must return the final variables to add them to the previous state.
    return [
        local_10, local_18, local_24, local_34,
        uVar2, uVar3, local_20, local_30,
        local_14, local_1c, local_2c, local_38,
        uVar7, uVar8, local_28, local_8
    ]

def hash_data(data):
    # Init state (FUN_00401e67)
    state = [
        0xb979379e, 0x157c4a7f, 0x60c09cf3, 0x34c8ed5c,
        0xd0c0b0a,  0xd0c0b0a,  0xd0c0b0a,  0xd0c0b0a, # Param 1 in 1e67 was passed 0xd0c0b0a repeated 8 times (size 32 bytes)
        0x11100f0e, 0x11100f0e, 0x11100f0e, 0x11100f0e,
        0, 0, 0, 0 # Param 2 was passed 0 repeated
    ]

    # Process blocks
    # FUN_00401fcc adds input block to state then runs hash_step
    # Note: The input block is 64 bytes (16 uints)
    # In FUN_00401f4d, it XORs the input with the state? No, wait.

    # Re-reading FUN_00401fcc:
    # "local_10 = *param_1; uVar2 = param_1[4]; ..."
    # It loads 16 uints from param_1 (the input block? or the state?)
    # "if (((uint *)((int)this + 0x3cU) < param_1) || (param_1 + 0xf < this))"
    # If pointers overlap...

    # In FUN_00404059:
    # FUN_00401e39(local_90, puVar3, puVar4, uVar5, uVar6); -> Init state in local_90
    # FUN_004022b8(local_90, (int)param_1 - iVar1, 0); -> Length update?
    # FUN_00401f4d(local_90, (int)_Dst, 0x10); -> The main loop

    # FUN_00401f4d:
    # do {
    #   *(byte *)(uVar2 + param_1) = *(byte *)(uVar2 + param_1) ^ *(byte *)(uVar1 + 0x40 + (int)this);
    #   *(int *)((int)this + 0x80) = *(int *)((int)this + 0x80) + 1;
    # }

    # Wait, FUN_00401f4d is XORing the output buffer with the state?
    # And it calls FUN_00401f9b when index > 0x3f (64 bytes).

    # FUN_00401f9b calls FUN_00401fcc(this, local_44) then FUN_004022ec.
    # FUN_00401fcc processes the state.

    # It seems this is a stream cipher (like ChaCha20) rather than a hash.
    # It generates a keystream from the state and XORs it with the input (or just outputs it).
    # FUN_00404059 does  first, then calls  to XOR  with the keystream.
    # So it decrypts/encrypts  in place (in ).

    # If it's a stream cipher, then  is encrypting/decrypting something.
    pass
