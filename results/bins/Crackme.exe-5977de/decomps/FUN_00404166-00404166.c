
uint FUN_00404166(int param_1,int param_2)

{
  uint3 uVar1;
  byte bVar2;
  int iVar3;
  uint3 uVar5;
  uint uVar4;
  uint uVar6;
  undefined1 uVar7;
  
  uVar6 = *(uint *)(param_2 + 0xc0);
  iVar3 = *(int *)(param_1 + 4) + -1;
  uVar5 = (uint3)((uint)iVar3 >> 8);
  uVar1 = (uint3)(uVar6 >> 8);
  switch(iVar3) {
  case 0:
    uVar6 = uVar6 >> 6;
    goto switchD_00404182_caseD_3;
  case 1:
    uVar6 = CONCAT31(uVar5,1);
    break;
  case 2:
    uVar6 = uVar6 >> 7;
  case 0x11:
switchD_00404182_caseD_11:
    uVar6 = CONCAT31(uVar5,(char)uVar6) & 0xffffff01;
    break;
  case 3:
    goto switchD_00404182_caseD_3;
  case 4:
    uVar4 = uVar6 >> 6;
    uVar7 = 1;
    if (((uVar4 & 1) == 0) &&
       (bVar2 = (byte)(uVar6 >> 0xb) ^ (byte)(uVar6 >> 7), uVar4 = CONCAT31(uVar1 >> 0xb,bVar2),
       (bVar2 & 1) == 0)) {
LAB_004041b5:
      uVar7 = 0;
    }
    goto LAB_004041b7;
  case 5:
    uVar6 = CONCAT31((int3)((uVar6 & 0xffffff41) >> 8),-((char)(uVar6 & 0xffffff41) != '\0')) + 1;
    break;
  case 6:
    uVar4 = CONCAT31(uVar1 >> 0xb,~(byte)(uVar6 >> 0xb));
    goto LAB_004041c0;
  case 7:
    uVar6 = uVar6 >> 2;
    goto switchD_00404182_caseD_11;
  case 8:
    uVar6 = uVar6 >> 0xb;
    goto switchD_00404182_caseD_11;
  case 9:
    uVar6 = CONCAT31(uVar5,(uVar6 & 0x41) != 0);
    break;
  case 10:
    uVar6 = CONCAT31(uVar5,*(int *)(param_2 + 0xac) == 0);
    break;
  case 0xb:
    uVar6 = uVar6 >> 2;
    goto switchD_00404182_caseD_3;
  case 0xc:
    uVar6 = uVar6 >> 6;
    goto switchD_00404182_caseD_11;
  case 0xd:
    uVar4 = uVar6 >> 0xb;
LAB_004041c0:
    uVar6 = CONCAT31((int3)(uVar4 >> 8),(byte)uVar4 ^ (byte)(uVar6 >> 7)) & 0xffffff01;
    break;
  case 0xe:
    uVar6 = uVar6 >> 7;
    goto switchD_00404182_caseD_3;
  case 0xf:
    uVar6 = uVar6 >> 0xb;
switchD_00404182_caseD_3:
    uVar6 = (uint)(byte)~(byte)uVar6;
    goto switchD_00404182_caseD_11;
  case 0x10:
    uVar4 = uVar6 >> 6;
    uVar7 = 1;
    if (((uVar4 & 1) != 0) ||
       (bVar2 = (byte)(uVar6 >> 0xb) ^ (byte)(uVar6 >> 7), uVar4 = CONCAT31(uVar1 >> 0xb,bVar2),
       (bVar2 & 1) != 0)) goto LAB_004041b5;
LAB_004041b7:
    uVar6 = CONCAT31((int3)(uVar4 >> 8),uVar7);
    break;
  default:
    uVar6 = (uint)uVar5 << 8;
  }
  return uVar6;
}

