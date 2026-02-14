
void * FUN_00403251(LPCSTR param_1,LPCSTR param_2)

{
  HMODULE hModule;
  HRSRC hResInfo;
  DWORD _Size;
  HGLOBAL hResData;
  LPVOID _Src;
  void *_Dst;
  
  hModule = GetModuleHandleA((LPCSTR)0x0);
  hResInfo = FindResourceA(hModule,param_1,param_2);
  if ((((hResInfo != (HRSRC)0x0) && (_Size = SizeofResource(hModule,hResInfo), _Size != 0)) &&
      (hResData = LoadResource(hModule,hResInfo), hResData != (HGLOBAL)0x0)) &&
     (_Src = LockResource(hResData), _Src != (LPVOID)0x0)) {
    _Dst = (void *)FUN_00408ae8(_Size);
    memcpy(_Dst,_Src,_Size);
    return _Dst;
  }
  return (void *)0x0;
}

