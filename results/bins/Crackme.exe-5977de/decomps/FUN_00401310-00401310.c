
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Instruction at (ram,0x0040133c) overlaps instruction at (ram,0x0040133b)
    */
/* WARNING: Removing unreachable block (ram,0x0040133b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __fastcall FUN_00401310(int param_1)

{
  undefined4 uVar1;
  undefined4 unaff_EDI;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = FUN_00401cea(0x2489aab,unaff_EDI);
    *(undefined4 *)(param_1 + 8) = uVar1;
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}

