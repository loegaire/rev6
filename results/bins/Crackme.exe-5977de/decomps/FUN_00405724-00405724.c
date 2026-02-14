
void __fastcall FUN_00405724(undefined4 *param_1)

{
  if (0xf < (uint)param_1[5]) {
    _Deallocate<>((void *)*param_1,param_1[5] + 1);
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}

