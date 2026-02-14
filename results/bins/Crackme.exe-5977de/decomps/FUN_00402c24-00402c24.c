
void __thiscall FUN_00402c24(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  void *_Src;
  int *piVar2;
  int extraout_EDX;
  undefined1 local_10;
  undefined4 local_f;
  undefined1 local_b;
  undefined4 local_8;
  
  if (*(char *)this == '\0') {
    puVar1 = FUN_00401367();
    _Src = (void *)FUN_0040187a((int)puVar1,extraout_EDX);
    local_8 = 0;
    FUN_0040113e();
    FUN_0040112c();
    _memcpy_s((void *)((int)this + 1),6,_Src,6);
    local_10 = 0x68;
    local_b = 0xc3;
    local_f = param_1;
    if (_Src == (void *)0x0) {
      piVar2 = _errno();
      *piVar2 = 0x16;
      _invalid_parameter_noinfo();
    }
    else {
      memcpy(_Src,&local_10,6);
    }
    *(undefined1 *)this = 1;
  }
  return;
}

