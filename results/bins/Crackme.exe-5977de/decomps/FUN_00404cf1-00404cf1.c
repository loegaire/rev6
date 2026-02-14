
void __fastcall FUN_00404cf1(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_00403b44(param_1,*(undefined4 **)(iVar1 + 4));
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  param_1[1] = 0;
  return;
}

