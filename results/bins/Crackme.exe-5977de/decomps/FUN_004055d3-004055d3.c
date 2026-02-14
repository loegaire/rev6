
undefined4 __fastcall FUN_004055d3(int param_1)

{
  HICON lParam;
  
  lParam = LoadIconA(*(HINSTANCE *)(param_1 + 4),(LPCSTR)0x8f);
  SendMessageA(*(HWND *)(param_1 + 8),0x80,0,(LPARAM)lParam);
  FUN_00405088(*(void **)(param_1 + 0x28),*(HWND *)(param_1 + 8));
  FUN_00405088(*(void **)(param_1 + 0x2c),*(HWND *)(param_1 + 8));
  FUN_00405088(*(void **)(param_1 + 0x30),*(HWND *)(param_1 + 8));
  FUN_00405088(*(void **)(param_1 + 0x34),*(HWND *)(param_1 + 8));
  SendDlgItemMessageA(*(HWND *)(param_1 + 8),0x3ee,0x30,*(WPARAM *)(param_1 + 0x24),1);
  FUN_00403640(*(void **)(param_1 + 0x10),*(HWND *)(param_1 + 8));
  FUN_0040356a(*(void **)(param_1 + 0x10),1);
  FUN_00403126();
  return 1;
}

