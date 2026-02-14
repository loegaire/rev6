
undefined4 __thiscall FUN_004042ec(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  cVar3 = FUN_004037b2(*(int *)((int)this + 0x24));
  iVar2 = param_1;
  if (cVar3 == '\0') {
    iVar4 = FUN_004044fa(this,*(uint *)(param_1 + 0xb8));
    if (iVar4 != 0) {
      FUN_004045f3(this,iVar2);
      pvVar1 = *(void **)(param_1 + 0xb8);
      *(void **)((int)this + 0x3c) = pvVar1;
      FUN_0040413b(this,param_1,pvVar1);
    }
  }
  else {
    FUN_0040444b(&param_1);
    FUN_004037fa(&param_1);
  }
  return 0xffffffff;
}

