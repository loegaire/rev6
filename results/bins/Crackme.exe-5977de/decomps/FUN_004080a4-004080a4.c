
void __cdecl FUN_004080a4(uint param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  double dVar5;
  
  bVar1 = *(byte *)(param_1 + 0xa2);
  if ((bVar1 & 3) == 0) {
    dVar5 = sin((double)((float)(int)*(char *)(param_1 + 0x85) +
                        (float)(int)*(char *)(param_1 + 0x85)) * 3.141592 * 0.015625);
    dVar5 = fabs(dVar5 * 256.0);
    uVar2 = (int)dVar5;
  }
  else if ((bVar1 & 3) == 1) {
    bVar4 = *(char *)(param_1 + 0x85) << 3;
    bVar1 = ~bVar4;
    if (-1 < *(char *)(param_1 + 0x85)) {
      bVar1 = bVar4;
    }
    uVar2 = (uint)bVar1;
  }
  else {
    uVar2 = param_1;
    if ((bVar1 & 3) != 0) {
      uVar2 = 0xff;
    }
  }
  uVar3 = (int)(*(byte *)(param_1 + 0x87) * uVar2) >> 5 & 0xfffffffc;
  uVar2 = -uVar3;
  if (*(char *)(param_1 + 0x85) < '\0') {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
  return;
}

