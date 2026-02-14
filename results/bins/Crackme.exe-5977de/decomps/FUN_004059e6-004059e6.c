
undefined1 * __cdecl FUN_004059e6(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  undefined1 *_Memory;
  int iVar1;
  
  _Memory = calloc(0x18,1);
  *_Memory = param_2;
  *(undefined4 *)(_Memory + 0x14) = param_3;
  iVar1 = (*DAT_0040d2e4)(param_1);
  *(int *)(_Memory + 0x10) = iVar1;
  if (iVar1 == 0) {
    free(_Memory);
    _Memory = (undefined1 *)0x0;
  }
  return _Memory;
}

