
undefined4 __thiscall FUN_00404350(void *this,int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  if (**(char **)((int)this + 0x24) != '\0') {
    FUN_004037c9(*(char **)((int)this + 0x24));
    iVar2 = param_2;
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar3 = *(int *)(param_1 + 0x14);
      if ((iVar3 == 0) || (iVar3 == 1)) {
        FUN_004037cd(*(undefined1 **)((int)this + 0x24));
      }
      else if (iVar3 == 8) {
        pvVar1 = *(void **)(param_2 + 0xb8);
        iVar3 = FUN_004044fa(this,(uint)pvVar1);
        if (iVar3 == 0) {
          FUN_004037fa(&param_2);
        }
        else {
          *(void **)((int)this + 0x3c) = pvVar1;
          FUN_0040413b(this,iVar2,pvVar1);
        }
      }
    }
  }
  return 0xffffffff;
}

