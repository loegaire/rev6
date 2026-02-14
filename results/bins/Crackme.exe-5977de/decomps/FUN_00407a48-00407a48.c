
void __cdecl FUN_00407a48(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 0x80);
  if (iVar2 < iVar1) {
    iVar2 = iVar2 + (uint)*(byte *)(param_1 + 0x84) * 4;
    *(int *)(param_1 + 0xc) = iVar2;
    if (iVar1 < iVar2) {
      *(int *)(param_1 + 0xc) = iVar1;
    }
  }
  else if (iVar1 < iVar2) {
    iVar2 = iVar2 + (uint)*(byte *)(param_1 + 0x84) * -4;
    if (iVar2 < iVar1) {
      iVar2 = iVar1;
    }
    *(int *)(param_1 + 0xc) = iVar2;
  }
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
  return;
}

