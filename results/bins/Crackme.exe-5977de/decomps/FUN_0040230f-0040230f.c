
undefined4 * __thiscall FUN_0040230f(void *this,void *param_1,void *param_2)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  if (param_1 == param_2) {
    *(undefined4 *)((int)this + 0x14) = 0xf;
    *(undefined1 *)this = 0;
  }
  else {
    FUN_0040241f(this,param_1,param_2,(int)param_2 - (int)param_1);
  }
  return this;
}

