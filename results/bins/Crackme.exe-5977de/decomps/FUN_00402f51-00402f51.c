
size_t __cdecl FUN_00402f51(void *param_1,size_t param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = param_3[1];
  if (*param_3 <= (int)(iVar1 + param_2)) {
    param_2 = *param_3 - iVar1;
  }
  memcpy(param_1,(void *)(param_3[2] + iVar1),param_2);
  param_3[1] = param_3[1] + param_2;
  return param_2;
}

