
undefined4 FUN_00402b14(HINSTANCE param_1)

{
  bool bVar1;
  undefined4 local_3c [14];
  
  bVar1 = FUN_00402a81(10,0,0);
  if (bVar1) {
    FUN_00405196(local_3c,param_1);
    FUN_004056c6((int)local_3c);
    FUN_00404e89(local_3c,(HWND)0x0);
    FUN_004052b8(local_3c);
  }
  else {
    MessageBoxA((HWND)0x0,"This crackme requires Windows 10 or higher.","Incompatible OS",0x10);
  }
  return 0;
}

