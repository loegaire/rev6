
int * __thiscall FUN_00403c09(void *this,int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)this;
  puVar4 = *(undefined4 **)(iVar1 + 4);
  *param_1 = (int)puVar4;
  param_1[1] = 0;
  param_1[2] = iVar1;
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    uVar2 = *param_2;
    do {
      *param_1 = (int)puVar4;
      uVar3 = puVar4[4];
      if (uVar2 <= uVar3) {
        param_1[2] = (int)puVar4;
        puVar4 = (undefined4 *)*puVar4;
      }
      else {
        puVar4 = (undefined4 *)puVar4[2];
      }
      param_1[1] = (uint)(uVar2 <= uVar3);
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  return param_1;
}

