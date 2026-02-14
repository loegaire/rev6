
undefined4 __thiscall FUN_00403eae(void *this,uint param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = FUN_00403ef7(*(uint **)this);
  lVar1 = (ulonglong)uVar2 * (ulonglong)param_1;
  uVar3 = (undefined4)((ulonglong)lVar1 >> 0x20);
  if ((uint)lVar1 < param_1) {
    while (uVar3 = (undefined4)((ulonglong)lVar1 >> 0x20), (uint)lVar1 < -param_1 % param_1) {
      uVar2 = FUN_00403ef7(*(uint **)this);
      lVar1 = (ulonglong)uVar2 * (ulonglong)param_1;
    }
  }
  return uVar3;
}

