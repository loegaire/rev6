
int * __cdecl FUN_00407e46(int param_1,int param_2,int *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  int *piVar4;
  byte bVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  int *local_8;
  
  local_8 = *(int **)(param_1 + 4);
  iVar7 = param_1;
  if (local_8 != (int *)0x0) {
    iVar7 = *local_8;
  }
  bVar5 = *(byte *)(param_1 + 2);
  piVar4 = (int *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x1c));
  if (piVar4 == (int *)0x0) {
    bVar5 = bVar5 & 0xfe;
    *(byte *)(param_1 + 2) = bVar5;
  }
  if ((bVar5 & 8) != 0) {
    local_8 = &DAT_0040d6e0 + iVar7 * 0x16;
    if ((&DAT_0040d6fc)[iVar7 * 0x16] != 0) {
      iVar8 = 0x20;
      if (0x1f < iVar7) {
        iVar8 = -0x20;
      }
      piVar4 = &DAT_0040d6e0 + (iVar8 + iVar7) * 0x16;
      memcpy(piVar4,local_8,0x58);
      *piVar4 = iVar8 + iVar7;
      *(undefined4 *)(&DAT_0040d6f0 + iVar7 * 0x58) = 0;
      *(undefined4 *)(&DAT_0040d6e4 + iVar7 * 0x58) = 0;
      (&DAT_0040d700)[iVar7 * 0x16] = 0;
      (&DAT_0040d704)[iVar7 * 0x16] = 0;
      *(int **)(param_1 + 4) = piVar4;
      local_8 = piVar4;
    }
    local_8[7] = param_2;
    iVar7 = *(int *)(param_2 + 0xc);
    iVar8 = *(int *)(param_2 + 8);
    local_8[0xb] = 0;
    local_8[0xe] = 1;
    piVar4 = (int *)(-(uint)((uint)local_8[6] < (uint)(iVar7 + iVar8)) & local_8[6]);
    local_8[10] = (int)piVar4;
    local_8[6] = 0;
    local_8[0x11] = 0;
    local_8[0x12] = 0;
    local_8[0x15] = 0;
  }
  bVar5 = *(byte *)(param_1 + 2);
  if (((bVar5 & 2) != 0) &&
     (iVar7 = (int)((float)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x10)) *
                    (float)*(int *)(param_1 + 0x34) * (float)*(int *)(param_1 + 0x58) *
                    (float)param_3[0x4b] * 7.4214768e-09), piVar4 = param_3, local_8 != (int *)0x0))
  {
    local_8[4] = iVar7;
    local_8[1] = iVar7;
    local_8[8] = (local_8[5] * iVar7) / 0xff;
    piVar4 = (int *)(((0xff - local_8[5]) * iVar7) / 0xff);
    local_8[9] = (int)piVar4;
    bVar5 = *(byte *)(param_1 + 2);
  }
  if ((bVar5 & 4) != 0) {
    iVar7 = abs(*(int *)(param_1 + 0x14) + -0x80);
    piVar4 = (int *)(*(int *)(param_1 + 0x14) +
                    (*(int *)(param_1 + 0x4c) + -0x20) *
                    ((int)((0x80 - iVar7) + (0x80 - iVar7 >> 0x1f & 0x1fU)) >> 5));
    piVar6 = (int *)0x0;
    if (-1 < (int)piVar4) {
      piVar6 = piVar4;
    }
    if (0xff < (int)piVar6) {
      piVar6 = (int *)0xff;
    }
    if (local_8 != (int *)0x0) {
      local_8[5] = (int)piVar6;
      local_8[3] = (int)piVar6;
      local_8[8] = (local_8[4] * (int)piVar6) / 0xff;
      piVar4 = (int *)(((0xff - (int)piVar6) * local_8[4]) / 0xff);
      local_8[9] = (int)piVar4;
    }
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    if ((*(byte *)((int)param_3 + 0x22) & 1) == 0) {
      piVar4 = (int *)(0xda7600 / (longlong)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x1c)));
    }
    else {
      dVar9 = pow(2.0,(double)(((4608.0 - (float)*(int *)(param_1 + 0xc)) +
                               (float)*(int *)(param_1 + 0x1c)) / 768.0));
      piVar4 = (int *)(int)(dVar9 * 8363.0);
    }
    local_8[2] = (int)piVar4;
    uVar3 = DAT_0040d000;
    if ((int)piVar4 < 100) {
      piVar4 = (int *)0x64;
    }
    uVar1 = (ulonglong)DAT_0040d000;
    uVar2 = ZEXT48(piVar4) / uVar1;
    local_8[0xd] = (int)uVar2;
    local_8[0xc] = (int)((ZEXT48(piVar4) % uVar1 << 0x20 | uVar2) / (ulonglong)uVar3);
  }
  if ((*(byte *)(param_1 + 2) & 0x20) != 0) {
    local_8[0xb] = 0;
    local_8[10] = 0;
    local_8[6] = 0;
    piVar4 = local_8;
  }
  return piVar4;
}

