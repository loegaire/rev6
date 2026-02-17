import json
from z3 import *

def solve():
    with open('patch_entries.json', 'r') as f:
        entries = json.load(f)

    # Possible Operations
    # 0: ADD
    # 1: SUB
    # 2: XOR
    # 3: SHL
    # 4: SHR
    # 5: ROL
    # 6: ROR
    # 7: MUL
    # 8: NEG (Unary)
    # 9: NOT (Unary)
    # ...

    # We map Opcode (Type) -> Function ID.
    # Opcodes seen: 1, 12, 10, 5, 3, 6, 13, 15, 4, 16, 9, 14.
    # (Decimal: 1, 18, 10, 5, 3, 6, 13, 15, 4, 16, 9, 14)
    # Wait, my dump used Hex for Op.
    # Dump: "Op 0x1", "Op 0x12" (18).

    # Let's assume input 'C' (0x43).
    # And Step 3 (Op 0xa, Arg 0x43) is the check.
    # If Op 0xa is CHECK_EQ(Acc, Arg).
    # Then Acc must be 0x43 at Step 3.

    # Path:
    # 0: Op 0x1, Arg 0x2f.
    # 1: Op 0x12, Arg 0x49.
    # 2: Op 0xa, Arg 0x72.
    # 3: Op 0xa, Arg 0x43. (CHECK 'C')

    # State S0 = Initial (0?).
    # S1 = Op_1(S0, 0x2f)
    # S2 = Op_12(S1, 0x49)
    # S3 = Op_a(S2, 0x72)
    # S3 must be 0x43.

    # Ops to try:
    # ADD, SUB, XOR.
    # Op_a appears in Step 2 AND Step 3?
    # Step 2: Op 0xa, Arg 0x72.
    # Step 3: Op 0xa, Arg 0x43.
    # If Op 0xa is "CHECK", then Step 2 is a Check?
    # Does 'C' check against 0x72? No.
    # Maybe Op 0xa is "XOR"?
    # S3 = S2 ^ 0x72.
    # And Check is implicit?
    # Or Op 0xa is "ADD"?

    # Let's assume Op 0xa is the SAME operation in Step 2 and 3.
    # But Step 3 has 'C'.

    # HYPOTHESIS: The VM consumes input byte-by-byte.
    # Maybe Step 0 consumes Input[0]?
    # Or Step 3?
    # If Step 3 consumes Input[0], then the "Arg" 0x43 matches 'C'.
    # This implies Op 0xa is "ASSERT(Input == Arg)".
    # But then what is Step 2? "ASSERT(Input == 0x72)"?
    # That would fail.

    # Unless... The "Operand" in Step 3 is NOT the immediate.
    # Maybe "Operand" (0x43) is the immediate.
    # And Step 2 (0x72) is... modification?

    # Let's brute force the sequence 0->3 to yield 'C' (0x43) from 0.
    # Ops: 1, 18, 10.
    # Args: 0x2f, 0x49, 0x72.
    # Target: 0x43.

    ops = [
        lambda x, y: (x + y) & 0xff,
        lambda x, y: (x - y) & 0xff,
        lambda x, y: (x ^ y) & 0xff,
        lambda x, y: (x * y) & 0xff,
        # lambda x, y: (x | y) & 0xff,
        # lambda x, y: (x & y) & 0xff
        # Rotate?
        lambda x, y: ((x << 1) | (x >> 7)) & 0xff, # ROL 1
        lambda x, y: ((x >> 1) | (x << 7)) & 0xff, # ROR 1
    ]

    found = False
    for op1 in ops:
        for op18 in ops:
            for op10 in ops:
                val = 0
                val = op1(val, 0x2f)
                val = op18(val, 0x49)
                val = op10(val, 0x72)

                if val == 0x43:
                    print(f"Match found! Op1: {op1}, Op18: {op18}, Op10: {op10}")
                    found = True

    if not found:
        print("No match for simple ops.")

solve()
