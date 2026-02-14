
undefined4 FUN_00404ea7(HWND param_1,int param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (param_2 == 0x110) {
    param_4[2] = (int)param_1;
    SetWindowLongA(param_1,-0x15,(LONG)param_4);
    uVar1 = (**(code **)(*param_4 + 4))();
  }
  else {
    piVar2 = (int *)GetWindowLongA(param_1,-0x15);
    if (piVar2 == (int *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(*piVar2 + 0x10))(param_2,param_3,param_4);
    }
  }
  return uVar1;
}

