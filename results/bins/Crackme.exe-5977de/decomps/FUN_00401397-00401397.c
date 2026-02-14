
/* WARNING: Instruction at (ram,0x004013b3) overlaps instruction at (ram,0x004013b2)
    */
/* WARNING: Removing unreachable block (ram,0x004013b2) */

void __fastcall FUN_00401397(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_8;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    local_8 = param_1;
    iVar1 = FUN_00401310(param_1);
    piVar2 = FUN_00401cba(&local_8,iVar1,0x869d4e2c);
    *(int *)(param_1 + 0x3c) = *piVar2;
  }
  return;
}

