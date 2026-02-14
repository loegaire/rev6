
undefined4 * __thiscall FUN_00404d49(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined ***)this = BaseDialog::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  return this;
}

