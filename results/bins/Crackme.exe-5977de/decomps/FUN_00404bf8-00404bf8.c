
void __fastcall FUN_00404bf8(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  iVar3 = 0x270;
  puVar2 = (uint *)(param_1 + 8);
  do {
    uVar1 = (*puVar2 ^ puVar2[-1]) & 0x7fffffff ^ puVar2[-1];
    puVar2[0x26f] = -(uint)((uVar1 & 1) != 0) & 0x9908b0df ^ puVar2[0x18c] ^ uVar1 >> 1;
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0);
  return;
}

