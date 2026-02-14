
undefined4 __fastcall FUN_0040596d(int param_1)

{
  HWND hWnd;
  LPCSTR lpString;
  
  FUN_00404d8e(*(HWND *)(param_1 + 8));
  if ((*(int *)(param_1 + 0x20) != 0) &&
     (hWnd = GetDlgItem(*(HWND *)(param_1 + 8),0x3f6), hWnd != (HWND)0x0)) {
    SendMessageA(hWnd,0x30,*(WPARAM *)(param_1 + 0x2c),1);
    lpString = (LPCSTR)(param_1 + 0x10);
    if (0xf < *(uint *)(param_1 + 0x24)) {
      lpString = *(LPCSTR *)lpString;
    }
    SetWindowTextA(hWnd,lpString);
  }
  FUN_00405088(*(void **)(param_1 + 0x30),*(HWND *)(param_1 + 8));
  return 1;
}

