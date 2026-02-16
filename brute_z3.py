from z3 import *
import json

def brute_force_ops():
    # Load entries (Op, Arg)
    # We use the Linear Trace IDs.
    # 0->3: 0(1, 2f), 1(12, 49), 2(10, 72), 3(10, 43 'C')
    # 3->12: 4(5, 5a), 5(3, 20), 6(12, 9f), 7(6, 63), 8(12, 22), 9(13, 94), 10(15, 5d), 11(13, 69), 12(4, 4d 'M')

    # Trace steps (Op, Arg)
    trace_0_3 = [(1, 0x2f), (12, 0x49), (10, 0x72)]
    trace_3_12 = [(10, 0x43), (5, 0x5a), (3, 0x20), (12, 0x9f), (6, 0x63), (12, 0x22), (13, 0x94), (15, 0x5d), (13, 0x69)]

    # Ops to map: 1, 12, 10, 5, 3, 6, 13, 15, 4.
    used_ops = [1, 12, 10, 5, 3, 6, 13, 15, 4]

    s = Solver()

    # Define Op Types (0:ADD, 1:SUB, 2:XOR)
    op_types = {op: Int(f'op_{op}') for op in used_ops}
    for op in used_ops:
        s.add(op_types[op] >= 0, op_types[op] <= 2)

    def apply(state, op, arg):
        t = op_types[op]
        # Use simple arithmetic modulo 256
        arg = BitVecVal(arg, 8)
        return If(t == 0, state + arg,
               If(t == 1, state - arg,
                          state ^ arg))

    # Initial state (Unknown or 0)
    # Let's assume 0 for now.
    st = BitVecVal(0, 8)

    # Apply 0->3
    for op, arg in trace_0_3:
        st = apply(st, op, arg)

    # Constraint 1: Result is 'C' (0x43)
    s.add(st == 0x43)

    # Apply 3->12
    # Note: trace_3_12 starts with (10, 43).
    # Does this consume the state? Or is it part of the chain?
    # If Step 3 was a "Check", maybe state is preserved?
    # Or maybe Step 3 *was* the operation (10, 43) that resulted in success?
    # No, we assumed S3 == 43.
    # If S3 is 43, and we continue...

    for op, arg in trace_3_12:
        st = apply(st, op, arg)

    # Constraint 2: Result is 'M' (0x4d)
    s.add(st == 0x4d)

    # Check
    if s.check() == sat:
        m = s.model()
        print("Found Mapping!")
        names = ["ADD", "SUB", "XOR"]
        for op in used_ops:
            print(f"Op {op}: {names[m[op_types[op]].as_long()]}")
    else:
        print("Unsatisfiable.")

brute_force_ops()
