
void __cdecl FUN_00407c7d(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x10) = (uint)*(byte *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x34) = 0x40;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x20;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x10000;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if ((*(byte *)(param_1 + 0xa2) & 0xf) < 4) {
    *(undefined1 *)(param_1 + 0x85) = 0;
  }
  if ((*(byte *)(param_1 + 0xa2) & 0xf0) < 0x40) {
    *(undefined1 *)(param_1 + 0x89) = 0;
  }
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 6;
  *(undefined1 *)(param_1 + 0x92) = 0;
  return;
}

