
int * __thiscall FUN_0040486e(void *this,int *param_1,int param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  piVar2 = *(int **)this;
  param_3[1] = (int)param_1;
  if (param_1 == piVar2) {
    *piVar2 = (int)param_3;
    piVar2[1] = (int)param_3;
    piVar2[2] = (int)param_3;
    *(undefined1 *)(param_3 + 3) = 1;
  }
  else {
    if (param_2 == 0) {
      param_1[2] = (int)param_3;
      if (param_1 == (int *)piVar2[2]) {
        piVar2[2] = (int)param_3;
      }
    }
    else {
      *param_1 = (int)param_3;
      if (param_1 == (int *)*piVar2) {
        *piVar2 = (int)param_3;
      }
    }
    cVar1 = *(char *)(param_3[1] + 0xc);
    piVar5 = param_3;
    while (cVar1 == '\0') {
      piVar3 = (int *)piVar5[1];
      piVar4 = *(int **)piVar3[1];
      if (piVar3 == piVar4) {
        piVar4 = (int *)((undefined4 *)piVar3[1])[2];
        if ((char)piVar4[3] == '\0') {
LAB_0040490e:
          *(undefined1 *)(piVar3 + 3) = 1;
          *(undefined1 *)(piVar4 + 3) = 1;
          *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
          piVar5 = *(int **)(piVar5[1] + 4);
        }
        else {
          if (piVar5 == (int *)piVar3[2]) {
            FUN_00404a7a(this,(int)piVar3);
            piVar5 = piVar3;
          }
          *(undefined1 *)(piVar5[1] + 0xc) = 1;
          *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
          FUN_00404c39(this,*(int **)(piVar5[1] + 4));
        }
      }
      else {
        if ((char)piVar4[3] == '\0') goto LAB_0040490e;
        if (piVar5 == (int *)*piVar3) {
          FUN_00404c39(this,piVar3);
          piVar5 = piVar3;
        }
        *(undefined1 *)(piVar5[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
        FUN_00404a7a(this,*(int *)(piVar5[1] + 4));
      }
      cVar1 = *(char *)(piVar5[1] + 0xc);
    }
    *(undefined1 *)(piVar2[1] + 0xc) = 1;
  }
  return param_3;
}

