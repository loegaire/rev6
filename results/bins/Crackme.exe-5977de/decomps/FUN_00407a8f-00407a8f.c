
void __cdecl
FUN_00407a8f(int param_1,uint *param_2,uint *param_3,byte param_4,int param_5,int param_6,
            byte param_7,byte param_8,byte param_9,uint *param_10,int *param_11,undefined1 *param_12
            ,int *param_13,byte param_14)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_2;
  if ((int)uVar3 < param_5) {
    if (*param_3 == (uint)*(ushort *)(param_6 + uVar3 * 4)) {
      if (((param_4 & 4) != 0) && (uVar3 == param_7)) {
        *param_2 = (uint)param_8;
        *param_3 = (uint)*(ushort *)(param_6 + (uint)param_8 * 4);
        uVar3 = *param_2;
      }
      uVar2 = (uint)*(ushort *)(param_6 + 2 + uVar3 * 4);
      if (uVar3 == param_5 - 1U) {
        *param_10 = uVar2;
        *param_12 = 1;
        *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | param_14;
        return;
      }
      if ((((param_4 & 2) != 0) && (uVar3 == param_9)) && (*(char *)(param_1 + 0x65) == '\0')) {
        *param_10 = uVar2;
        goto LAB_00407b82;
      }
      iVar1 = (uint)*(ushort *)(param_6 + 4 + uVar3 * 4) - (uint)*(ushort *)(param_6 + uVar3 * 4);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (int)((uint)*(ushort *)(param_6 + 6 + uVar3 * 4) * 0x10000 + uVar2 * -0x10000) /
                iVar1;
      }
      *param_13 = iVar1;
      *param_11 = uVar2 * 0x10000;
      *param_2 = *param_2 + 1;
    }
    else {
      *param_11 = *param_11 + *param_13;
    }
  }
  *param_10 = (int)*(short *)((int)param_11 + 2);
  *param_3 = *param_3 + 1;
LAB_00407b82:
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | param_14;
  return;
}

