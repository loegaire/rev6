
void * __thiscall FUN_00403fba(void *this,void *param_1)

{
  char *_Src;
  int iVar1;
  void *_Dst;
  void *local_c;
  void *pvStack_8;
  
  local_c = this;
  pvStack_8 = this;
  FUN_00404286((int)this);
  FUN_0040464a(this);
  _Dst = param_1;
  _Src = FUN_00404059(this,param_1);
  iVar1 = FUN_0040477e(_Src);
  if (iVar1 == 0) {
    memcpy(_Dst,_Src,*(size_t *)this);
    param_1 = (void *)((int)_Dst - **(int **)((int)this + 0x1c));
    FUN_004039d4((void *)((int)this + 0x28),(int *)&local_c,(uint *)&param_1);
  }
  else {
    param_1 = (void *)FUN_0040479c(this,*(uint *)((int)this + 4));
    *(void **)((int)this + 0x38) = param_1;
    FUN_00403a69((void *)((int)this + 0x30),(int *)&local_c,(uint *)&param_1);
    memcpy(*(void **)((int)this + 0x38),_Src,*(size_t *)this);
    _Dst = *(void **)((int)this + 0x38);
  }
  free(_Src);
  return _Dst;
}

