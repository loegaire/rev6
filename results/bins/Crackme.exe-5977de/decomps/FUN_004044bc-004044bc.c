
undefined4 __thiscall FUN_004044bc(void *this,uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < *(uint *)((int)this + 0x38)) ||
     (*(int *)((int)this + 4) + -1 + *(uint *)((int)this + 0x38) < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

