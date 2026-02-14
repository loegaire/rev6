
uint FUN_00401ba9(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  uVar3 = 0xffffffff;
  if (param_2 != 0) {
    do {
      bVar4 = *(byte *)(param_1 + uVar5);
      iVar6 = 8;
      do {
        uVar2 = uVar3 >> 1;
        uVar1 = bVar4 ^ uVar3;
        uVar3 = uVar2 ^ 0xedb88320;
        if ((uVar1 & 1) == 0) {
          uVar3 = uVar2;
        }
        bVar4 = bVar4 >> 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_2);
  }
  return ~uVar3;
}

