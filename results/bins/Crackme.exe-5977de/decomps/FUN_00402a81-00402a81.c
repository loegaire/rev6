
bool __cdecl FUN_00402a81(ushort param_1,ushort param_2,WORD param_3)

{
  DWORDLONG dwlConditionMask;
  BOOL BVar1;
  undefined8 uVar2;
  _OSVERSIONINFOEXW local_120;
  
  local_120.dwOSVersionInfoSize = 0x11c;
  local_120.dwBuildNumber = 0;
  local_120.dwPlatformId = 0;
  memset(local_120.szCSDVersion,0,0x100);
  local_120.wSuiteMask = 0;
  local_120.wProductType = '\0';
  local_120.wReserved = '\0';
  local_120.wServicePackMinor = 0;
  uVar2 = VerSetConditionMask(0,0,2,3,1,3,0x20,3);
  uVar2 = VerSetConditionMask(uVar2);
  dwlConditionMask = (DWORDLONG)VerSetConditionMask(uVar2);
  local_120.dwMajorVersion = (DWORD)param_1;
  local_120.dwMinorVersion = (DWORD)param_2;
  local_120.wServicePackMajor = param_3;
  BVar1 = VerifyVersionInfoW(&local_120,0x23,dwlConditionMask);
  return BVar1 != 0;
}

