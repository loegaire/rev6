
LRESULT FUN_00404f60(HWND param_1,UINT param_2,uint param_3,LPARAM param_4)

{
  undefined4 *puVar1;
  LRESULT LVar2;
  tagTRACKMOUSEEVENT local_14;
  
  puVar1 = (undefined4 *)GetWindowLongA(param_1,-0x15);
  if (puVar1 == (undefined4 *)0x0) {
    LVar2 = DefWindowProcA(param_1,param_2,param_3,param_4);
    return LVar2;
  }
  if (param_2 != 0x200) {
    if (param_2 == 0x201) {
      *(undefined2 *)(puVar1 + 6) = 0x101;
      if (*(char *)((int)puVar1 + 0x1a) == '\0') {
        local_14.cbSize = 0x10;
        local_14.dwFlags = 2;
        local_14.hwndTrack = param_1;
        local_14.dwHoverTime = 0;
        TrackMouseEvent(&local_14);
        *(undefined1 *)((int)puVar1 + 0x1a) = 1;
      }
    }
    else {
      if (param_2 == 0x202) {
        if (*(char *)((int)puVar1 + 0x19) == '\0') {
          return 0;
        }
        *(undefined1 *)((int)puVar1 + 0x19) = 0;
        FUN_004050cc(puVar1);
        if (*(char *)(puVar1 + 6) == '\0') {
          return 0;
        }
        SendMessageA((HWND)puVar1[1],0x111,puVar1[2],(LPARAM)param_1);
        return 0;
      }
      if (param_2 != 0x2a3) goto LAB_0040506f;
      *(undefined1 *)((int)puVar1 + 0x1a) = 0;
      *(undefined1 *)(puVar1 + 6) = 0;
    }
    FUN_004050cc(puVar1);
    return 0;
  }
  if (*(char *)((int)puVar1 + 0x1a) == '\0') {
    local_14.cbSize = 0x10;
    local_14.dwFlags = 2;
    local_14.hwndTrack = param_1;
    local_14.dwHoverTime = 0;
    TrackMouseEvent(&local_14);
    *(undefined1 *)((int)puVar1 + 0x1a) = 1;
  }
  if ((*(char *)((int)puVar1 + 0x19) != '\0') && ((param_3 & 1) == 0)) {
    *(undefined1 *)((int)puVar1 + 0x19) = 0;
  }
  if (*(char *)(puVar1 + 6) == '\0') {
    *(undefined1 *)(puVar1 + 6) = 1;
    FUN_004050cc(puVar1);
  }
LAB_0040506f:
  LVar2 = CallWindowProcA((WNDPROC)puVar1[3],param_1,param_2,param_3,param_4);
  return LVar2;
}

