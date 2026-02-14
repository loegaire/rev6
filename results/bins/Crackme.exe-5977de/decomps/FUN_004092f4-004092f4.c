
undefined4 FUN_004092f4(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  if (((*piVar3 == -0x1f928c9d) && (piVar3[4] == 3)) &&
     ((iVar1 = piVar3[5], iVar1 == 0x19930520 ||
      (((iVar1 == 0x19930521 || (iVar1 == 0x19930522)) || (iVar1 == 0x1994000)))))) {
    piVar2 = (int *)__current_exception();
    *piVar2 = (int)piVar3;
    iVar1 = param_1[1];
    piVar3 = (int *)__current_exception_context();
    *piVar3 = iVar1;
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  return 0;
}

