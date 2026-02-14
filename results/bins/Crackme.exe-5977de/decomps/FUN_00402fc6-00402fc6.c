
int * __fastcall FUN_00402fc6(int *param_1)

{
  char *pcVar1;
  int iVar2;
  HMODULE pHVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  int *local_c;
  int *local_8;
  
  local_c = param_1;
  local_8 = param_1;
  pHVar3 = GetModuleHandleA((LPCSTR)0x0);
  *param_1 = (int)pHVar3;
  FUN_0040448c();
  iVar2 = *param_1;
  local_c = (int *)0xe6d7e20;
  iVar6 = 0;
  do {
    (&DAT_0040d258)[iVar6] = *(byte *)((int)&local_c + iVar6) ^ 0xe;
    pcVar1 = &DAT_0040d258 + iVar6;
    iVar6 = iVar6 + 1;
  } while (*pcVar1 != '\0');
  piVar4 = FUN_00403f4f(&DAT_0040d258,iVar2);
  param_1[1] = (int)piVar4;
  FUN_0040448c();
  iVar2 = *param_1;
  local_c = (int *)0x776a7b21;
  local_8 = (int *)CONCAT22(local_8._2_2_,0xf7b);
  iVar6 = 0;
  do {
    (&DAT_0040d25c)[iVar6] = *(byte *)((int)&local_c + iVar6) ^ 0xf;
    pcVar1 = &DAT_0040d25c + iVar6;
    iVar6 = iVar6 + 1;
  } while (*pcVar1 != '\0');
  piVar4 = FUN_00403f4f(&DAT_0040d25c,iVar2);
  param_1[2] = (int)piVar4;
  pvVar5 = FUN_00403251((LPCSTR)0x457,(LPCSTR)0xa);
  param_1[3] = (int)pvVar5;
  return param_1;
}

