
void __fastcall FUN_00405702(int param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x1c) == '\0';
  if (bVar1) {
    FUN_00405c15(*(DWORD *)(param_1 + 0x18));
  }
  else {
    FUN_00405f3d(*(DWORD *)(param_1 + 0x18));
  }
  *(bool *)(param_1 + 0x1c) = bVar1;
  return;
}

