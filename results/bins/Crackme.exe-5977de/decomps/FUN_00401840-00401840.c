
/* WARNING: Instruction at (ram,0x0040185d) overlaps instruction at (ram,0x0040185c)
    */
/* WARNING: Removing unreachable block (ram,0x0040185c) */

void __fastcall FUN_00401840(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puStack_c;
  undefined4 *local_8;
  
  if (param_1[8] == 0) {
    puStack_c = param_1;
    local_8 = param_1;
    piVar1 = FUN_00401ca2((void *)*param_1,(int *)&puStack_c,0x763fadf6);
    param_1[8] = *piVar1;
  }
  return;
}

