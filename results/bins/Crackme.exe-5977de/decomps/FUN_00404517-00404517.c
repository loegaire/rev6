
undefined4 FUN_00404517(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *param_1;
  if ((((((cVar1 == -0x18) || (cVar1 == -0x17)) || (cVar1 == -0x15)) ||
       ((cVar1 == -0x1d || (cVar1 == -0x20)))) ||
      ((cVar1 == -0x1f || ((cVar1 == -0x1e || ((byte)(cVar1 + 0x90U) < 0x10)))))) ||
     ((cVar1 == '\x0f' && ((byte)(param_1[1] + 0x80U) < 0x10)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

