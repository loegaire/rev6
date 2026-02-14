
int * __fastcall FUN_00403e7a(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  if (*(char *)(piVar3[2] + 0xd) == '\0') {
    piVar2 = FUN_00404b02((int *)piVar3[2]);
  }
  else {
    piVar1 = (int *)piVar3[1];
    while ((piVar2 = piVar1, *(char *)((int)piVar2 + 0xd) == '\0' && (piVar3 == (int *)piVar2[2])))
    {
      *param_1 = (int)piVar2;
      piVar3 = piVar2;
      piVar1 = (int *)piVar2[1];
    }
  }
  *param_1 = (int)piVar2;
  return param_1;
}

