
int __thiscall FUN_0040388e(void *this,ushort param_1)

{
  int iVar1;
  
  if ((int)(*(ushort *)(*(int *)((int)this + 8) + 6) - 1) < (int)(uint)param_1) {
    iVar1 = 0;
  }
  else {
    iVar1 = (uint)param_1 * 0x28 + *(int *)((int)this + 0xc);
  }
  return iVar1;
}

