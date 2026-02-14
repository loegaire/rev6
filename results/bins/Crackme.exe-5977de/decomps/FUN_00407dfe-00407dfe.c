
void __cdecl FUN_00407dfe(int param_1)

{
  byte bVar1;
  
  if (*(byte *)(param_1 + 0x93) <= *(byte *)(param_1 + 0x92)) {
    *(int *)(param_1 + 0x18) = -*(int *)(param_1 + 0x10);
  }
  bVar1 = *(byte *)(param_1 + 0x92) + 1;
  *(byte *)(param_1 + 0x92) = bVar1;
  if ((uint)*(byte *)(param_1 + 0x94) + (uint)*(byte *)(param_1 + 0x93) <= (uint)bVar1) {
    *(undefined1 *)(param_1 + 0x92) = 0;
  }
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 2;
  return;
}

