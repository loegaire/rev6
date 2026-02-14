
/* WARNING: Instruction at (ram,0x004012e5) overlaps instruction at (ram,0x004012e4)
    */
/* WARNING: Removing unreachable block (ram,0x004012e4) */
/* WARNING: Removing unreachable block (ram,0x004012e6) */
/* WARNING: Removing unreachable block (ram,0x004012f3) */

undefined4 __fastcall FUN_004012b4(int param_1)

{
  undefined4 uVar1;
  undefined4 unaff_EDI;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = FUN_00401cea(0x84c05e40,unaff_EDI);
    *(undefined4 *)(param_1 + 4) = uVar1;
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  return uVar1;
}

