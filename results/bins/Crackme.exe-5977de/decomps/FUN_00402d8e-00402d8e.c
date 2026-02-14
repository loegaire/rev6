
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00402dae) overlaps instruction at (ram,0x00402dad)
    */
/* WARNING: Removing unreachable block (ram,0x00402dd8) */
/* WARNING: Removing unreachable block (ram,0x00402dc3) */
/* WARNING: Removing unreachable block (ram,0x00402dad) */

void __fastcall FUN_00402d8e(int param_1,undefined4 param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  *(char *)(param_1 + -0x3fccffc0) = *(char *)(param_1 + -0x3fccffc0) + (char)((uint)param_2 >> 8);
  return;
}

