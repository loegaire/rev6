
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Instruction at (ram,0x0040169b) overlaps instruction at (ram,0x0040169a)
    */
/* WARNING: Removing unreachable block (ram,0x0040169a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __fastcall FUN_0040166a(int param_1,undefined2 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_10;
  uint uStack_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    uStack_c = 0x61692ef;
    uStack_14 = *(undefined4 *)param_1;
    local_8 = param_1;
    iStack_10 = FUN_00401260(param_1);
    piVar1 = FUN_00401cba(&iStack_18,iStack_10,uStack_c);
    uVar2 = FUN_00401169(piVar1);
    *(undefined4 *)(local_8 + 0x68) = uVar2;
    uVar2 = *(undefined4 *)(local_8 + 0x68);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x68);
  }
  return uVar2;
}

