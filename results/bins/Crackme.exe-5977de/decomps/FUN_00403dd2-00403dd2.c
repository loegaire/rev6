
undefined4 * __fastcall FUN_00403dd2(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_2c [7];
  undefined4 local_10;
  
  *param_1 = 0x10;
  param_1[1] = 0x20;
  FUN_00403d8f(param_1 + 10);
  FUN_00403d8f(param_1 + 0xc);
  FUN_00403d70(param_1 + 0x10);
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[6] = 0;
  puVar2 = local_2c;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_0040113e();
  FUN_004010d2();
  param_1[3] = local_2c[2];
  param_1[4] = local_2c[3];
  param_1[5] = local_10;
  return param_1;
}

