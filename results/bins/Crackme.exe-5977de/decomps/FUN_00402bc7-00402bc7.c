
undefined4 __fastcall FUN_00402bc7(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int extraout_EDX;
  
  piVar2 = (int *)*param_1;
  if (piVar2 == (int *)0x0) {
    puVar1 = FUN_00401367();
    piVar2 = (int *)FUN_00401b2e((int)puVar1,extraout_EDX);
    *param_1 = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)*piVar2 >> 8),*(char *)(*piVar2 + 5) != '3');
}

