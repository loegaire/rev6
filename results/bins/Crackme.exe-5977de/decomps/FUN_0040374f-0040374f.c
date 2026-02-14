
bool __fastcall FUN_0040374f(int param_1)

{
  LONG LVar1;
  
  if (*(char *)(param_1 + 0x25) == '\0') {
    return true;
  }
  SetWindowRgn(*(HWND *)(param_1 + 8),(HRGN)0x0,1);
  LVar1 = SetWindowLongA(*(HWND *)(param_1 + 8),-4,*(LONG *)(param_1 + 4));
  RemovePropA(*(HWND *)(param_1 + 8),"skin");
  *(bool *)(param_1 + 0x25) = LVar1 == 0;
  InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)0x0,1);
  return *(char *)(param_1 + 0x25) == '\0';
}

