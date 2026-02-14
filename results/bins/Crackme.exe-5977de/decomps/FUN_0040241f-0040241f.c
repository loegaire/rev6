
void __thiscall FUN_0040241f(void *this,void *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  
  *(uint *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  if (param_3 < 0x80000000) {
    pvVar3 = this;
    if (0xf < param_3) {
      uVar1 = FUN_004029ec(param_3,0xf,0x7fffffff);
      pvVar2 = (void *)FUN_00402352(uVar1 + 1);
      *(uint *)((int)this + 0x14) = uVar1;
      *(void **)this = pvVar2;
      if (0xf < uVar1) {
        pvVar3 = pvVar2;
      }
    }
    FUN_00402527(param_1,param_3,pvVar3);
    *(uint *)((int)this + 0x10) = param_3;
    *(undefined1 *)((int)pvVar3 + param_3) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00402a5d();
}

