
undefined4 __fastcall FUN_004042ca(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00403bd9((int *)(param_1 + 0x40),(uint *)&stack0x00000004);
  if (iVar1 == *(int *)(param_1 + 0x40)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x14);
  }
  return uVar2;
}

