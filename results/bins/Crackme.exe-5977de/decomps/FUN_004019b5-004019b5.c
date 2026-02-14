
undefined4 __fastcall FUN_004019b5(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_10;
  uint uStack_c;
  undefined4 *local_8;
  
  if (param_1[9] == 0) {
    uStack_c = 0xa5c44c50;
    uStack_14 = *param_1;
    local_8 = param_1;
    iStack_10 = FUN_004012b4((int)param_1);
    piVar1 = FUN_00401cba(&iStack_18,iStack_10,uStack_c);
    uVar2 = FUN_00401181(piVar1);
    local_8[9] = uVar2;
    uVar2 = local_8[9];
  }
  else {
    uVar2 = param_1[9];
  }
  return uVar2;
}

