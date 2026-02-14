
undefined1 __thiscall FUN_00403640(void *this,HWND param_1)

{
  undefined1 uVar1;
  LONG LVar2;
  BOOL BVar3;
  
  if (*(char *)((int)this + 0x25) != '\0') {
    FUN_0040374f((int)this);
  }
  *(HWND *)((int)this + 8) = param_1;
  SetWindowRgn(param_1,*(HRGN *)((int)this + 0xc),1);
  LVar2 = SetWindowLongA(*(HWND *)((int)this + 8),-4,0x4036b3);
  *(LONG *)((int)this + 4) = LVar2;
  BVar3 = SetPropA(*(HWND *)((int)this + 8),"skin",this);
  if (BVar3 == 0) {
    FUN_0040374f((int)this);
    uVar1 = 0;
  }
  else {
    *(bool *)((int)this + 0x25) = *(int *)((int)this + 4) != 0;
    InvalidateRect(*(HWND *)((int)this + 8),(RECT *)0x0,1);
    uVar1 = *(undefined1 *)((int)this + 0x25);
  }
  return uVar1;
}

