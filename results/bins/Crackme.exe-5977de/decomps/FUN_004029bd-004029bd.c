
void __thiscall FUN_004029bd(void *this,uint param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1 < 0x80000000) {
    iVar2 = FUN_00402352(param_1);
    *(int *)this = iVar2;
    *(int *)((int)this + 4) = iVar2;
    *(uint *)((int)this + 8) = iVar2 + param_1;
    return;
  }
  FUN_00402a68();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

