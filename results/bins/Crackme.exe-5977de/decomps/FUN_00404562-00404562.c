
void __thiscall FUN_00404562(void *this,int *param_1,int param_2)

{
  if (*(char *)((int)this + 8) == '\0') {
    if (*param_1 == -0x7ffffffd) {
      FUN_004042ec(this,param_2);
    }
    else if (*param_1 == -0x7ffffffc) {
      FUN_004043ca(this,param_2);
    }
    else if (*param_1 == -0x7fffffff) {
      FUN_00404350(this,(int)param_1,param_2);
    }
  }
  return;
}

