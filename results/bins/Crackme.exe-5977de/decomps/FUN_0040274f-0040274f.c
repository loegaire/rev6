
undefined4 * __thiscall FUN_0040274f(void *this,int param_1)

{
  *(undefined ***)this = std::exception::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  __std_exception_copy(param_1 + 4,(undefined4 *)((int)this + 4));
  return this;
}

