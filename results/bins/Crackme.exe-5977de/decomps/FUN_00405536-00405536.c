
undefined4 __thiscall FUN_00405536(void *this,short param_1)

{
  HINSTANCE pHVar1;
  undefined4 local_38 [13];
  
  if (param_1 == 0x3e9) {
    FUN_00405399((int)this);
  }
  else if (param_1 == 0x3ea) {
    pHVar1 = *(HINSTANCE *)((int)this + 4);
    FUN_004025ec(&stack0xffffffa8,"");
    FUN_0040574d(local_38,pHVar1,0x84);
    FUN_00404e89(local_38,*(HWND *)((int)this + 8));
    FUN_004057da(local_38);
  }
  else if (param_1 == 0x3eb) {
    EndDialog(*(HWND *)((int)this + 8),0);
  }
  else if (param_1 == 0x3ef) {
    FUN_00405702((int)this);
  }
  else {
    if (param_1 != 0x3f2) {
      return 0;
    }
    ShellExecuteA((HWND)0x0,"open","https://crackmes.one",(LPCSTR)0x0,(LPCSTR)0x0,3);
  }
  return 1;
}

