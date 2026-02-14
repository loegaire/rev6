
void __fastcall FUN_00402a3a(int *param_1)

{
  if (*param_1 != 0) {
    _Deallocate<>((void *)*param_1,param_1[2] - *param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

