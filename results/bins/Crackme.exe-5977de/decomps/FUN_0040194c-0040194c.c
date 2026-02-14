
undefined4 __fastcall FUN_0040194c(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_10;
  uint uStack_c;
  undefined4 *local_8;
  
  if (param_1[0xe] == 0) {
    uStack_c = 0x41015a5c;
    uStack_14 = *param_1;
    local_8 = param_1;
    iStack_10 = FUN_004012b4((int)param_1);
    piVar1 = FUN_00401cba(&iStack_18,iStack_10,uStack_c);
    uVar2 = FUN_0040117e(piVar1);
    local_8[0xe] = uVar2;
    uVar2 = local_8[0xe];
  }
  else {
    uVar2 = param_1[0xe];
  }
  return uVar2;
}

