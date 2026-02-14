
bool __thiscall FUN_0040356a(void *this,undefined1 param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)((int)this + 0x25) != '\0';
  if (bVar1) {
    *(undefined1 *)((int)this + 0x24) = param_1;
    InvalidateRect(*(HWND *)((int)this + 8),(RECT *)0x0,1);
  }
  return bVar1;
}

