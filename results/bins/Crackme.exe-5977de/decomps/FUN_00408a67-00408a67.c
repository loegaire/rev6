
undefined4 __cdecl FUN_00408a67(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_0040d36c == -1) {
    iVar1 = crt_atexit();
  }
  else {
    iVar1 = register_onexit_function(&DAT_0040d36c,param_1);
  }
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = param_1;
  }
  return uVar2;
}

