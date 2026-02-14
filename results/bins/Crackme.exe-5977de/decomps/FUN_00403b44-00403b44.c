
void FUN_00403b44(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  while (*(char *)((int)param_2 + 0xd) == '\0') {
    FUN_00403b44(param_1,(undefined4 *)param_2[2]);
    puVar1 = (undefined4 *)*param_2;
    FUN_00408ada(param_2);
    param_2 = puVar1;
  }
  return;
}

