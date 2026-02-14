
void __thiscall FUN_004045a7(void *this,uint *param_1)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  int local_10 [2];
  int *local_8;
  
  local_8 = (int *)((int)this + 0x40);
  FUN_00404cd0(local_8);
  if ((param_1 != (uint *)0x0) && (*param_1 != 0)) {
    uVar2 = 0;
    puVar3 = param_1 + 2;
    if (*param_1 != 0) {
      do {
        piVar1 = FUN_00403cd7(local_8,local_10,puVar3);
        uVar2 = uVar2 + 1;
        *(uint **)(*piVar1 + 0x14) = puVar3;
        puVar3 = puVar3 + 4;
      } while (uVar2 < *param_1);
    }
  }
  return;
}

