
int * __cdecl FUN_00405bb8(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  piVar1 = calloc(0x160,1);
  puVar2 = FUN_004059e6(param_1,0,0);
  if (puVar2 != (undefined1 *)0x0) {
    piVar1[0x57] = param_2;
    uVar3 = FUN_0040622b(piVar1,(int)puVar2);
    FUN_004059c6(puVar2);
    if ((char)uVar3 != '\0') {
      return piVar1;
    }
    FUN_00405ace(piVar1);
  }
  return (int *)0x0;
}

