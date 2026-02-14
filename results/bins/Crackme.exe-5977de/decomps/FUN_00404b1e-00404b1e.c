
void __fastcall FUN_00404b1e(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  iVar3 = 0xe3;
  uVar2 = param_1[0x271];
  puVar4 = param_1 + 0x271;
  do {
    uVar1 = puVar4[1];
    uVar2 = (uVar2 ^ uVar1) & 0x7fffffff ^ uVar2;
    puVar4[-0x270] = -(uint)((uVar2 & 1) != 0) & 0x9908b0df ^ puVar4[0x18d] ^ uVar2 >> 1;
    iVar3 = iVar3 + -1;
    uVar2 = uVar1;
    puVar4 = puVar4 + 1;
  } while (iVar3 != 0);
  iVar3 = 0x18c;
  uVar2 = param_1[0x354];
  puVar4 = param_1 + 0x354;
  do {
    uVar1 = puVar4[1];
    uVar2 = (uVar2 ^ uVar1) & 0x7fffffff ^ uVar2;
    puVar4[-0x270] = -(uint)((uVar2 & 1) != 0) & 0x9908b0df ^ puVar4[-0x353] ^ uVar2 >> 1;
    iVar3 = iVar3 + -1;
    uVar2 = uVar1;
    puVar4 = puVar4 + 1;
  } while (iVar3 != 0);
  *param_1 = 0;
  uVar2 = (param_1[1] ^ param_1[0x4e0]) & 0x7fffffff ^ param_1[0x4e0];
  param_1[0x270] = -(uint)((uVar2 & 1) != 0) & 0x9908b0df ^ param_1[0x18d] ^ uVar2 >> 1;
  return;
}

