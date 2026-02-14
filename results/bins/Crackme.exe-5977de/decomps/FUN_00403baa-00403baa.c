
int FUN_00403baa(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2;
  if (param_3 - param_2 == -1) {
    uVar2 = FUN_00403ef7(param_1);
  }
  else {
    uVar2 = FUN_00403eae(&param_1,(param_3 - param_2) + 1);
  }
  return uVar2 + iVar1;
}

