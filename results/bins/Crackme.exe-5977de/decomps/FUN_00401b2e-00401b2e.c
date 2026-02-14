
/* WARNING: Instruction at (ram,0x00401b4d) overlaps instruction at (ram,0x00401b4b)
    */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x00401b5e) */
/* WARNING: Removing unreachable block (ram,0x00401b60) */
/* WARNING: Removing unreachable block (ram,0x00401b63) */
/* WARNING: Removing unreachable block (ram,0x00401b64) */
/* WARNING: Removing unreachable block (ram,0x00401b4d) */
/* WARNING: Removing unreachable block (ram,0x00401b1f) */
/* WARNING: Removing unreachable block (ram,0x00401b4f) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __fastcall FUN_00401b2e(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_10;
  uint uStack_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    uStack_c = 0xe7e0ce4a;
    uStack_14 = *(undefined4 *)param_1;
    local_8 = param_1;
    iStack_10 = FUN_004012b4(param_1);
    piVar1 = FUN_00401cba(&iStack_18,iStack_10,uStack_c);
    uVar2 = FUN_0040117b(piVar1);
    *(undefined4 *)(local_8 + 0x28) = uVar2;
    uVar2 = *(undefined4 *)(local_8 + 0x28);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x28);
  }
  return uVar2;
}

