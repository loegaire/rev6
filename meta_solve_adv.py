from z3 import *
import json

def meta_solve_advanced():
    s = Solver()

    # 8-bit state? Or 32-bit? Operands are 32-bit in struct, but values fit in 8-bit.
    # Let's try 8-bit first, but include ROL/ROR.

    op_types = {}
    for i in range(1, 19):
        op_types[i] = Int(f'op_{i}')
        # 0:ADD, 1:SUB, 2:XOR, 3:ROL, 4:ROR, 5:MUL
        s.add(op_types[i] >= 0, op_types[i] <= 5)

    def apply_op(state, op_id, operand):
        t = op_types[op_id]
        # BitVecVal operand
        op_bv = BitVecVal(operand, 8)

        return If(t == 0, (state + op_bv),
               If(t == 1, (state - op_bv),
               If(t == 2, (state ^ op_bv),
               If(t == 3, RotateLeft(state, 1), # Assuming shift 1 or operand?
                          # Let's assume Shift by Operand? No, usually fixed.
                          # Let's assume Shift by 1 for now.
               If(t == 4, RotateRight(state, 1),
                          (state * op_bv))))))

    state = BitVecVal(0, 8)

    # Trace 0 -> 3 (C)
    # 0: Op 1, 2f
    state = apply_op(state, 1, 0x2f)
    # 1: Op 12, 49
    state = apply_op(state, 12, 0x49)
    # 2: Op 10, 72
    state = apply_op(state, 10, 0x72)

    # Check C
    s.add(state == 0x43)

    # Continue to M (12)
    state = apply_op(state, 10, 0x43) # Step 3 effect

    trace_CM = [
        (5, 0x5a), (3, 0x20), (12, 0x9f), (6, 0x63),
        (12, 0x22), (13, 0x94), (15, 0x5d), (13, 0x69)
    ]
    for op, arg in trace_CM:
        state = apply_op(state, op, arg)

    # Check M
    s.add(state == 0x4d)

    if s.check() == sat:
        print("Found Complex Ops!")
        m = s.model()
        names = ["ADD", "SUB", "XOR", "ROL", "ROR", "MUL"]
        for i in range(1, 19):
            if i in [1, 12, 10, 5, 3, 6, 13, 15, 4]: # Used ops
                val = m[op_types[i]].as_long()
                print(f"Op {i}: {names[val]}")
    else:
        print("Unsatisfiable with Complex Ops.")

meta_solve_advanced()
