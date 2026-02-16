import json

def solve():
    # Try more complex ops or different init
    ops = [
        ("ADD", lambda x, y: (x + y) & 0xff),
        ("SUB", lambda x, y: (x - y) & 0xff),
        ("XOR", lambda x, y: (x ^ y) & 0xff),
        ("MUL", lambda x, y: (x * y) & 0xff),
    ]

    # Maybe initial state is NOT 0?
    # Maybe it depends on Input[0]?

    # If Step 3 (Op 10, Arg 0x43) is XOR CHECK.
    # Then S2 ^ 0x43 == 0 (if S3 must be 0).
    # Then S2 must be 0x43.
    # S2 = Op12(Op1(Init, 2f), 49) ^ 72 (if Op10 is XOR).
    # ...

    # Let's brute force Input[0] char `C` generation.
    # Suppose the sequence generates the char 'C'.
    # Op1(2f) -> Op12(49) -> Op10(72) -> 'C'.

    for init in range(256):
        for name1, op1 in ops:
            for name18, op18 in ops:
                for name10, op10 in ops:
                    val = init
                    val = op1(val, 0x2f)
                    val = op18(val, 0x49)
                    val = op10(val, 0x72)

                    if val == 0x43:
                        # Only print if plausible
                        # e.g. Init = 0?
                        if init == 0:
                            print(f"Match Init=0: Op1={name1}, Op12={name18}, Op10={name10}")
                        # Or maybe Init depends on previous char (none)?

if __name__ == "__main__":
    solve()
