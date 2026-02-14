
void __fastcall FUN_00404f3d(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x14));
  }
  return;
}

