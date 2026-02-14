
void __cdecl FUN_00402990(int *param_1,int *param_2)

{
  int iVar1;
  
  *param_2 = *param_2 + 0x23;
  iVar1 = *(int *)(*param_1 + -4);
  if ((*param_1 - iVar1) - 4U < 0x20) {
    *param_1 = iVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

