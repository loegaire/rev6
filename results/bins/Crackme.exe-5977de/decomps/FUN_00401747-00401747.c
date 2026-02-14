
/* WARNING: Instruction at (ram,0x00401763) overlaps instruction at (ram,0x00401762)
    */
/* WARNING: Removing unreachable block (ram,0x00401762) */

void __fastcall FUN_00401747(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_8;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    local_8 = param_1;
    iVar1 = FUN_00401260(param_1);
    piVar2 = FUN_00401cba(&local_8,iVar1,0xa8403ace);
    *(int *)(param_1 + 0x4c) = *piVar2;
  }
  return;
}

