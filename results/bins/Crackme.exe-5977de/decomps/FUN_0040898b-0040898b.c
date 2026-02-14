
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint __cdecl FUN_0040898b(int param_1)

{
  uint uVar1;
  undefined4 local_14;
  
  uVar1 = FUN_00408857(0x400000,param_1 - 0x400000);
  if ((uVar1 == 0) || (*(int *)(uVar1 + 0x24) < 0)) {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  ExceptionList = local_14;
  return uVar1;
}

