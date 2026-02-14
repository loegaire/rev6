
void __cdecl FUN_00404d8e(HWND param_1)

{
  HWND hWnd;
  uint uVar1;
  HWND hWndTo;
  tagRECT *lpPoints;
  UINT cPoints;
  tagRECT local_24;
  tagRECT local_14;
  
  hWnd = GetParent(param_1);
  GetClientRect(hWnd,&local_24);
  GetWindowRect(param_1,&local_14);
  local_14.right = local_14.right - local_14.left;
  local_14.bottom = local_14.bottom - local_14.top;
  local_14.left = (local_24.right - local_14.right) / 2;
  local_14.top = (local_24.bottom - local_14.bottom) / 2;
  uVar1 = GetWindowLongA(param_1,-0x10);
  if ((uVar1 & 0x40000000) == 0) {
    cPoints = 1;
    lpPoints = &local_14;
    hWndTo = GetDesktopWindow();
    MapWindowPoints(hWnd,hWndTo,(LPPOINT)lpPoints,cPoints);
  }
  SetWindowPos(param_1,(HWND)0x0,local_14.left,local_14.top,0,0,5);
  return;
}

