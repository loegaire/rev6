
void FUN_004039a6(void)

{
  int iVar1;
  
  iVar1 = FUN_00408aaa(0x14);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  *(undefined2 *)(iVar1 + 0xc) = 0x101;
  return;
}

