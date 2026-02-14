
HGDIOBJ __thiscall FUN_0040583f(void *this,int param_1,HDC param_2,undefined4 param_3)

{
  HGDIOBJ pvVar1;
  int iVar2;
  HCURSOR hCursor;
  
  if (param_1 == 0x133) {
    SetBkColor(param_2,0x33312f);
    SetTextColor(param_2,0xffffff);
    pvVar1 = *(HGDIOBJ *)((int)this + 0x28);
  }
  else if (param_1 == 0x138) {
    SetBkMode(param_2,1);
    pvVar1 = GetStockObject(5);
  }
  else {
    if ((param_1 == 0x20) &&
       ((((iVar2 = GetDlgCtrlID((HWND)param_2), iVar2 == 0x3f1 || (iVar2 == 0x3f2)) ||
         (iVar2 == 0x3f4)) || (iVar2 == 0x3f3)))) {
      hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f89);
      SetCursor(hCursor);
      SetWindowLongA(*(HWND *)((int)this + 8),0,1);
      return (HGDIOBJ)0x1;
    }
    pvVar1 = (HGDIOBJ)FUN_00404e25(this,param_1,param_2,param_3);
  }
  return pvVar1;
}

