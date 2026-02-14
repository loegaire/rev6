
undefined4 __thiscall FUN_004043ca(void *this,int param_1)

{
  char *pcVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  
  iVar4 = param_1;
  pvVar3 = *(void **)(param_1 + 0xb8);
  iVar2 = FUN_004044fa(this,(uint)pvVar3);
  if (iVar2 == 0) {
    iVar2 = FUN_004044bc(this,(uint)pvVar3);
    if (iVar2 == 0) {
      pcVar1 = *(char **)((int)this + 0x24);
      iVar4 = FUN_004044dd(this,(uint)pvVar3);
      if (iVar4 != 0) {
        FUN_004037fa(&param_1);
        return 0xffffffff;
      }
      if (*pcVar1 != '\0') {
        return 0xffffffff;
      }
      FUN_004037cd(pcVar1);
      return 0xffffffff;
    }
    pvVar3 = (void *)((uint)(byte)(*(char *)(iVar4 + 0xb8) - *(char *)((int)this + 0x38)) +
                     *(int *)((int)this + 0x3c));
    *(void **)((int)this + 0x3c) = pvVar3;
  }
  else {
    *(void **)((int)this + 0x3c) = pvVar3;
  }
  FUN_0040413b(this,iVar4,pvVar3);
  return 0xffffffff;
}

