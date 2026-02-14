
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Instruction at (ram,0x004015be) overlaps instruction at (ram,0x004015bd)
    */
/* WARNING: Removing unreachable block (ram,0x004015bd) */
/* WARNING: Removing unreachable block (ram,0x004015bf) */
/* WARNING: Removing unreachable block (ram,0x00401584) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __fastcall FUN_0040158d(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_10;
  uint uStack_c;
  undefined4 *local_8;
  
  if (param_1[0x12] == 0) {
    uStack_c = 0xa64c1e0;
    uStack_14 = *param_1;
    local_8 = param_1;
    iStack_10 = FUN_00401260((int)param_1);
    piVar1 = FUN_00401cba(&iStack_18,iStack_10,uStack_c);
    uVar2 = FUN_00401160(piVar1);
    local_8[0x12] = uVar2;
    uVar2 = local_8[0x12];
  }
  else {
    uVar2 = param_1[0x12];
  }
  return uVar2;
}

