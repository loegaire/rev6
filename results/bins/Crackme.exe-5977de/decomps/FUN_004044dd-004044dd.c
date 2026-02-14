
undefined4 __thiscall FUN_004044dd(void *this,uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < **(uint **)((int)this + 0x20)) || ((*(uint **)((int)this + 0x20))[1] < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

