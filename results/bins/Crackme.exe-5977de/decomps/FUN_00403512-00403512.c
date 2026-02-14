
void __fastcall FUN_00403512(int param_1)

{
  FUN_0040374f(param_1);
  if (*(int *)(param_1 + 0x10) != 0) {
    SelectObject(*(HDC *)(param_1 + 0x10),*(HGDIOBJ *)(param_1 + 0x18));
    DeleteDC(*(HDC *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

