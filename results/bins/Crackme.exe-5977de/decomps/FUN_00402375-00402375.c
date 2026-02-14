
void __cdecl FUN_00402375(uint param_1)

{
  int iVar1;
  
  if (param_1 + 0x23 <= param_1) {
    FUN_00402731((undefined4 *)&stack0xffffffec);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&stack0xffffffec,(ThrowInfo *)&DAT_0040ba0c);
  }
  iVar1 = FUN_00408aaa(param_1 + 0x23);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  *(int *)((iVar1 + 0x23U & 0xffffffe0) - 4) = iVar1;
  return;
}

