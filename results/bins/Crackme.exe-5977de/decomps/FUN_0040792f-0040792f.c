
void __cdecl FUN_0040792f(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  
  cVar2 = *(char *)(param_2 + 0x14e);
  if (cVar2 == '\0') {
    dVar5 = sin((double)(((float)*(int *)(param_1 + 0x5c) + (float)*(int *)(param_1 + 0x5c)) *
                         3.141592 * 0.00390625));
    iVar4 = (int)(dVar5 * 64.0);
  }
  else if (cVar2 == '\x01') {
    iVar4 = 0x40;
    if (0x7f < *(int *)(param_1 + 0x5c)) {
      iVar4 = -0x40;
    }
  }
  else {
    if (cVar2 == '\x02') {
      uVar3 = *(int *)(param_1 + 0x5c) + 0x80U & 0x800000ff;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xffffff00) + 1;
      }
    }
    else {
      iVar4 = param_1;
      if (cVar2 != '\x03') goto LAB_004079e4;
      uVar3 = 0x180U - *(int *)(param_1 + 0x5c) & 0x800000ff;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xffffff00) + 1;
      }
    }
    iVar4 = (int)(0x80 - uVar3) >> 1;
  }
LAB_004079e4:
  iVar4 = (uint)*(byte *)(param_2 + 0x150) * iVar4;
  if (*(byte *)(param_2 + 0x14f) != 0) {
    iVar4 = (*(int *)(param_1 + 0x60) * iVar4) / (int)(uint)*(byte *)(param_2 + 0x14f);
  }
  iVar1 = *(int *)(param_1 + 0x60) + 1;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (iVar4 >> 6);
  *(int *)(param_1 + 0x60) = iVar1;
  if ((int)(uint)*(byte *)(param_2 + 0x14f) < iVar1) {
    *(uint *)(param_1 + 0x60) = (uint)*(byte *)(param_2 + 0x14f);
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (uint)*(byte *)(param_2 + 0x151);
  if (0xff < *(int *)(param_1 + 0x5c)) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -0x100;
  }
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
  return;
}

