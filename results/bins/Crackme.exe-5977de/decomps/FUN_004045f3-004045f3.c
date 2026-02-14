
undefined4 __thiscall FUN_004045f3(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = param_1;
  iVar2 = FUN_004042ca((int)this);
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = FUN_00404166(iVar2,iVar1);
    if ((char)uVar3 == '\0') {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      iVar2 = *(int *)(iVar2 + 8) + *(int *)(iVar2 + 0xc);
    }
    uVar4 = FUN_00404684(&param_1,iVar2 + *(int *)(iVar1 + 0xb8));
    uVar4 = CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  return uVar4;
}

