
undefined4 __fastcall FUN_00401ad3(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iStack_14;
  void *pvStack_10;
  undefined4 uStack_c;
  undefined4 *local_8;
  
  if (param_1[5] == 0) {
    uStack_c = 0x10066f2f;
    pvStack_10 = (void *)*param_1;
    local_8 = param_1;
    piVar1 = FUN_00401ca2(pvStack_10,&iStack_14,0x10066f2f);
    uVar2 = FUN_00401175(piVar1);
    local_8[5] = uVar2;
    uVar2 = local_8[5];
  }
  else {
    uVar2 = param_1[5];
  }
  return uVar2;
}

