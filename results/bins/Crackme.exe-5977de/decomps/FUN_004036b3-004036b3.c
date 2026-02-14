
void FUN_004036b3(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  HANDLE pvVar1;
  tagPAINTSTRUCT local_44;
  
  pvVar1 = GetPropA(param_1,"skin");
  if (pvVar1 == (HANDLE)0x0) {
    DefWindowProcA(param_1,param_2,param_3,param_4);
  }
  else {
    if (param_2 == 0xf) {
      BeginPaint(param_1,&local_44);
      BitBlt(local_44.hdc,0,0,*(int *)((int)pvVar1 + 0x1c),*(int *)((int)pvVar1 + 0x20),
             *(HDC *)((int)pvVar1 + 0x10),0,0,0xcc0020);
      EndPaint(param_1,&local_44);
    }
    else if (param_2 == 0x201) {
      SendMessageA(param_1,0xa1,2,0);
    }
    CallWindowProcA(*(WNDPROC *)((int)pvVar1 + 4),param_1,param_2,param_3,param_4);
  }
  return;
}

