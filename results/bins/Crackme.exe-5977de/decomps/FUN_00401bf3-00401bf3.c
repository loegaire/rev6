
uint FUN_00401bf3(short *param_1)

{
  byte bVar1;
  short sVar2;
  void *_Memory;
  byte bVar3;
  size_t sVar4;
  uint uVar5;
  
  uVar5 = 0;
  sVar4 = 0;
  sVar2 = *param_1;
  while (sVar2 != 0) {
    sVar4 = sVar4 + 1;
    sVar2 = param_1[sVar4];
  }
  _Memory = (void *)FUN_00408ae8(sVar4);
  if (sVar4 != 0) {
    do {
      bVar1 = *(byte *)(param_1 + uVar5);
      bVar3 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar3 = bVar1;
      }
      *(byte *)((int)_Memory + uVar5) = bVar3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < sVar4);
  }
  uVar5 = FUN_00401ba9((int)_Memory,sVar4);
  free(_Memory);
  return uVar5;
}

