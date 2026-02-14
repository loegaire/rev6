
void __thiscall FUN_004050f1(void *this,void *param_1,uint param_2)

{
  uint uVar1;
  void *_Dst;
  
  if (param_2 < 0x80000000) {
    if (param_2 < 0x10) {
      *(uint *)((int)this + 0x10) = param_2;
      *(undefined4 *)((int)this + 0x14) = 0xf;
      memcpy(this,param_1,0x10);
    }
    else {
      uVar1 = FUN_004029ec(param_2,0xf,0x7fffffff);
      _Dst = (void *)FUN_00402352(uVar1 + 1);
      *(void **)this = _Dst;
      *(uint *)((int)this + 0x10) = param_2;
      *(uint *)((int)this + 0x14) = uVar1;
      memcpy(_Dst,param_1,param_2 + 1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00402a5d();
}

