
undefined4 * __thiscall FUN_004027fd(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  __std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    FUN_00408ada(this);
  }
  return this;
}

