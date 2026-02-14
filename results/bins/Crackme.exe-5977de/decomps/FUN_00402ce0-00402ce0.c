
void __fastcall FUN_00402ce0(char *param_1)

{
  undefined4 *puVar1;
  void *_Dst;
  int extraout_EDX;
  
  if (*param_1 != '\0') {
    puVar1 = FUN_00401367();
    _Dst = (void *)FUN_0040187a((int)puVar1,extraout_EDX);
    _memcpy_s(_Dst,6,param_1 + 1,6);
    *param_1 = '\0';
  }
  return;
}

