
undefined4 __thiscall FUN_004058f3(void *this,short param_1)

{
  LPCSTR lpOperation;
  char *lpFile;
  
  if ((param_1 == 0x3eb) || (param_1 == 0x3f0)) {
    EndDialog(*(HWND *)((int)this + 8),1);
  }
  else {
    if ((param_1 == 0x3f1) || (param_1 == 0x3f2)) {
      lpFile = "https://crackmes.one";
      lpOperation = "open";
    }
    else if (param_1 == 0x3f3) {
      lpFile = "https://en.wikipedia.org/wiki/One_Must_Fall:_2097";
      lpOperation = "open";
    }
    else {
      if (param_1 != 0x3f4) {
        return 0;
      }
      lpFile = "https://crackmes.one/user/Fatmike";
      lpOperation = "open";
    }
    ShellExecuteA((HWND)0x0,lpOperation,lpFile,(LPCSTR)0x0,(LPCSTR)0x0,3);
  }
  return 1;
}

