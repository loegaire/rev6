
undefined4 __fastcall FUN_004013da(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_10;
  uint uStack_c;
  undefined4 *local_8;
  
  if (param_1[0x14] == 0) {
    uStack_c = 0xa8422ea5;
    uStack_14 = *param_1;
    local_8 = param_1;
    iStack_10 = FUN_00401260((int)param_1);
    piVar1 = FUN_00401cba(&iStack_18,iStack_10,uStack_c);
    uVar2 = FUN_0040116f(piVar1);
    local_8[0x14] = uVar2;
    uVar2 = local_8[0x14];
  }
  else {
    uVar2 = param_1[0x14];
  }
  return uVar2;
}

