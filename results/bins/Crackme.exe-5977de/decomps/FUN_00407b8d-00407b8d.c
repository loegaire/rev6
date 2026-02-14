
void __cdecl FUN_00407b8d(int param_1,byte param_2)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2;
  if ((byte)(param_2 - 0x10) < 0x41) {
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 2;
    *(uint *)(param_1 + 0x10) = uVar2 - 0x10;
    return;
  }
  switch(param_2 >> 4) {
  case 6:
  case 8:
    piVar1 = (int *)(param_1 + 0x10);
    *piVar1 = *piVar1 - (uVar2 & 0xf);
    if (*piVar1 < 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    goto LAB_00407bd3;
  case 7:
  case 9:
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + (uVar2 & 0xf);
    if (0x40 < *(int *)(param_1 + 0x10)) {
      *(undefined4 *)(param_1 + 0x10) = 0x40;
    }
LAB_00407bd3:
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 2;
    return;
  case 10:
    *(byte *)(param_1 + 0x86) = param_2 & 0xf;
    return;
  case 0xb:
    *(byte *)(param_1 + 0x87) = param_2 & 0xf;
    return;
  case 0xc:
    *(uint *)(param_1 + 0x14) = (uVar2 & 0xf) << 4;
    break;
  case 0xd:
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - (uVar2 & 0xf);
    break;
  case 0xe:
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (uVar2 & 0xf);
    break;
  case 0xf:
    if ((param_2 & 0xf) != 0) {
      *(byte *)(param_1 + 0x84) = param_2 << 4;
    }
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xf7;
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x68);
  default:
    return;
  }
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 4;
  return;
}

