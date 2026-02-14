
int * __thiscall FUN_00403cd7(void *this,int *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *local_1c;
  int local_18;
  int local_14;
  undefined1 local_10 [4];
  void *local_c;
  uint *local_8;
  
  FUN_00403c09(this,(int *)&local_1c,param_2);
  uVar1 = FUN_00403c97(local_14,param_2);
  if ((char)uVar1 == '\0') {
    if (*(int *)((int)this + 4) == 0xaaaaaaa) {
                    /* WARNING: Subroutine does not return */
      FUN_00404cc5();
    }
    local_8 = param_2;
    puVar2 = FUN_0040390d(local_10,this,*(undefined4 *)this,&PTR_0040b394,&local_8);
    piVar3 = (int *)puVar2[1];
    puVar2[1] = 0;
    if (local_c != (void *)0x0) {
      FUN_00408ada(local_c);
    }
    piVar3 = FUN_00404974(this,local_1c,local_18,piVar3);
    *param_1 = (int)piVar3;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    *param_1 = local_14;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return param_1;
}

