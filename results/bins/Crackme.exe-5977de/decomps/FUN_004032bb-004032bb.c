
undefined4 * __fastcall FUN_004032bb(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  puVar2 = param_1;
  for (iVar1 = 8; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
  }
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_0040113e();
  FUN_00401010();
  return param_1;
}

