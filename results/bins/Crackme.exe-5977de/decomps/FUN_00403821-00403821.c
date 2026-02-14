
int * __thiscall FUN_00403821(void *this,int param_1)

{
  int iVar1;
  
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_1;
  iVar1 = param_1 + *(int *)(param_1 + 0x3c);
  *(int *)((int)this + 8) = iVar1;
  *(uint *)((int)this + 0xc) = *(ushort *)(iVar1 + 0x14) + 0x18 + iVar1;
  return this;
}

