
void __cdecl FUN_00408aaa(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 local_14 [2];
  undefined4 uStack_c;
  
  do {
    uStack_c = 0x408ac4;
    pvVar2 = malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return;
    }
    uStack_c = 0x408ab7;
    iVar1 = _callnewh(param_1);
  } while (iVar1 != 0);
  if (param_1 != 0xffffffff) {
    FUN_00409406();
    return;
  }
  FUN_00402731(local_14);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_14,(ThrowInfo *)&DAT_0040ba0c);
}

