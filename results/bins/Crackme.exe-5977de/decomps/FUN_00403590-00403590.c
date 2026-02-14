
uint __thiscall FUN_00403590(void *this,ushort param_1,ushort param_2)

{
  HMODULE hInstance;
  HBITMAP h;
  HRSRC hResInfo;
  RGNDATA *hResData;
  DWORD nCount;
  HRGN pHVar1;
  uint uVar2;
  HDC hdc;
  HGDIOBJ pvVar3;
  RGNDATA *lpData;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  
  hInstance = GetModuleHandleA((LPCSTR)0x0);
  h = LoadBitmapA(hInstance,(LPCSTR)(uint)param_2);
  *(HBITMAP *)((int)this + 0x14) = h;
  uVar2 = 0;
  if (h != (HBITMAP)0x0) {
    GetObjectA(h,0x18,local_1c);
    *(undefined4 *)((int)this + 0x1c) = local_18;
    *(undefined4 *)((int)this + 0x20) = local_14;
    hResInfo = FindResourceA(hInstance,(LPCSTR)(uint)param_1,"BINARY");
    uVar2 = 0;
    if (hResInfo != (HRSRC)0x0) {
      hResData = LoadResource(hInstance,hResInfo);
      uVar2 = 0;
      if (hResData != (RGNDATA *)0x0) {
        lpData = hResData;
        nCount = SizeofResource((HMODULE)0x0,hResInfo);
        pHVar1 = ExtCreateRegion((XFORM *)0x0,nCount,lpData);
        *(HRGN *)((int)this + 0xc) = pHVar1;
        uVar2 = FreeResource(hResData);
        if (*(int *)((int)this + 0xc) != 0) {
          hdc = CreateCompatibleDC((HDC)0x0);
          *(HDC *)((int)this + 0x10) = hdc;
          uVar2 = 0;
          if (hdc != (HDC)0x0) {
            pvVar3 = SelectObject(hdc,*(HGDIOBJ *)((int)this + 0x14));
            *(HGDIOBJ *)((int)this + 0x18) = pvVar3;
            return CONCAT31((int3)((uint)pvVar3 >> 8),1);
          }
        }
      }
    }
  }
  return uVar2 & 0xffffff00;
}

