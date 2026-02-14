
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00403339) overlaps instruction at (ram,0x00403338)
    */
/* WARNING: Removing unreachable block (ram,0x00403350) */
/* WARNING: Removing unreachable block (ram,0x004033a7) */
/* WARNING: Removing unreachable block (ram,0x00403374) */
/* WARNING: Removing unreachable block (ram,0x00403379) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00403319(int param_1,undefined4 param_2,int param_3,int param_4)

{
  double dVar1;
  int unaff_EBX;
  float10 in_ST0;
  
  *(int *)(param_1 + 0x24) = param_3;
  dVar1 = *(double *)(unaff_EBX + 0x4d8bf845);
  *(byte *)(param_3 + -0x3fccdbb8) = *(byte *)(param_3 + -0x3fccdbb8) | (byte)param_3;
  *(int *)(param_1 + 0x28) = param_4;
  return in_ST0 * (float10)dVar1;
}

