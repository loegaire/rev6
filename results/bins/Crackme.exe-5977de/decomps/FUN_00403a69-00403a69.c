
int * __thiscall FUN_00403a69(void *this,int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int local_10;
  undefined1 local_c [4];
  void *local_8;
  
  piVar3 = FUN_00403c50(this,&local_10,param_2);
  piVar6 = (int *)*piVar3;
  iVar1 = piVar3[1];
  iVar2 = piVar3[2];
  uVar4 = FUN_00403cb7(iVar2,param_2);
  if ((char)uVar4 == '\0') {
    if (*(int *)((int)this + 4) == 0xccccccc) {
                    /* WARNING: Subroutine does not return */
      FUN_00404cc5();
    }
    puVar5 = FUN_0040395b(local_c,this,*(undefined4 *)this,param_2);
    piVar3 = (int *)puVar5[1];
    puVar5[1] = 0;
    if (local_8 != (void *)0x0) {
      FUN_00408ada(local_8);
    }
    piVar6 = FUN_0040486e(this,piVar6,iVar1,piVar3);
    *param_1 = (int)piVar6;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    *param_1 = iVar2;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return param_1;
}

