
void __cdecl FUN_00407cfb(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  double dVar6;
  
  cVar3 = *(char *)(param_1 + 0x89);
  bVar1 = *(byte *)(param_1 + 0xa2) >> 4;
  bVar2 = bVar1 & 3;
  if ((bVar1 & 3) == 0) {
LAB_00407d63:
    dVar6 = sin((double)((float)(int)cVar3 + (float)(int)cVar3) * 3.141592 * 0.015625);
    fabs(dVar6 * 256.0);
    uVar4 = thunk_FUN_00408db0();
LAB_00407d9b:
    *(uint *)(param_1 + 0x18) = uVar4;
  }
  else {
    if (bVar2 == 1) {
      bVar1 = ~(cVar3 << 3);
      if (-1 < cVar3) {
        bVar1 = cVar3 << 3;
      }
      uVar4 = (uint)bVar1;
      goto LAB_00407d9b;
    }
    if (bVar2 == 2) {
      *(undefined4 *)(param_1 + 0x18) = 0xff;
    }
    else if (bVar2 == 3) goto LAB_00407d63;
  }
  iVar5 = (int)((uint)*(byte *)(param_1 + 0x8b) * *(int *)(param_1 + 0x18)) >> 6;
  *(int *)(param_1 + 0x18) = iVar5;
  if (*(char *)(param_1 + 0x89) < '\0') {
    if ((short)(*(short *)(param_1 + 0x10) - (short)iVar5) < 0) {
      iVar5 = *(int *)(param_1 + 0x10);
    }
    iVar5 = -iVar5;
  }
  else {
    if (*(int *)(param_1 + 0x10) + iVar5 < 0x41) goto LAB_00407ddb;
    iVar5 = 0x40 - *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x18) = iVar5;
LAB_00407ddb:
  cVar3 = *(char *)(param_1 + 0x8a) + *(char *)(param_1 + 0x89);
  *(char *)(param_1 + 0x89) = cVar3;
  if ('\x1f' < cVar3) {
    *(char *)(param_1 + 0x89) = cVar3 + -0x40;
  }
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 2;
  return;
}

