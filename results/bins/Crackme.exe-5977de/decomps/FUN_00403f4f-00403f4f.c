
int * FUN_00403f4f(char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined1 local_14 [16];
  
  FUN_00403821(local_14,param_2);
  pcVar4 = FUN_00403847(local_14,param_1);
  if (pcVar4 == (char *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    puVar5 = (undefined4 *)FUN_00408aaa(0x10);
    if (puVar5 == (undefined4 *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = FUN_004038af(puVar5);
    }
    iVar1 = *(int *)(pcVar4 + 0xc);
    iVar2 = *(int *)(pcVar4 + 8);
    iVar3 = *(int *)(pcVar4 + 0x10);
    *piVar6 = iVar1 + param_2;
    piVar6[2] = iVar2;
    piVar6[1] = iVar1 + param_2 + -1 + iVar2;
    piVar6[3] = iVar3;
  }
  FUN_00403844();
  return piVar6;
}

