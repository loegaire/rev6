
undefined4 __fastcall FUN_004017e5(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iStack_14;
  void *pvStack_10;
  undefined4 uStack_c;
  undefined4 *local_8;
  
  if (param_1[0xd] == 0) {
    uStack_c = 0xd0861aa4;
    pvStack_10 = (void *)*param_1;
    local_8 = param_1;
    piVar1 = FUN_00401ca2(pvStack_10,&iStack_14,0xd0861aa4);
    uVar2 = FUN_0040118a(piVar1);
    local_8[0xd] = uVar2;
    uVar2 = local_8[0xd];
  }
  else {
    uVar2 = param_1[0xd];
  }
  return uVar2;
}

