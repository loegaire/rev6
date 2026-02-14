
int FUN_00401da6(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  undefined1 local_5;
  
  FUN_00401ba3(&local_5);
  iVar8 = 0;
  uVar6 = 0;
  iVar4 = *(int *)(*(int *)(param_1 + 0x3c) + 0x78 + param_1) + param_1;
  iVar1 = *(int *)(iVar4 + 0x24);
  iVar2 = *(int *)(iVar4 + 0x20);
  iVar3 = *(int *)(iVar4 + 0x1c);
  if (*(int *)(iVar4 + 0x18) != 0) {
    do {
      pcVar7 = (char *)(*(int *)(iVar2 + param_1 + uVar6 * 4) + param_1);
      uVar5 = FUN_00401cd3(pcVar7);
      uVar5 = FUN_00401ba9((int)pcVar7,uVar5);
      if (uVar5 == param_2) {
        iVar8 = *(int *)(iVar3 + param_1 + (uint)*(ushort *)(iVar1 + param_1 + uVar6 * 2) * 4) +
                param_1;
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(iVar4 + 0x18));
  }
  FUN_00401ba6();
  return iVar8;
}

