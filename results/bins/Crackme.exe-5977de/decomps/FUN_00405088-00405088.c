
void __thiscall FUN_00405088(void *this,HWND param_1)

{
  HWND hWnd;
  LONG LVar1;
  
  *(HWND *)((int)this + 4) = param_1;
  hWnd = GetDlgItem(param_1,*(int *)((int)this + 8));
  *(HWND *)this = hWnd;
  if (hWnd != (HWND)0x0) {
    SetWindowLongA(hWnd,-0x15,(LONG)this);
    LVar1 = SetWindowLongA(*(HWND *)this,-4,0x404f60);
    *(LONG *)((int)this + 0xc) = LVar1;
    FUN_004050cc(this);
  }
  return;
}

