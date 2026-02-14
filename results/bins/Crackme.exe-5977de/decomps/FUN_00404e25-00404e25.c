
undefined4 __thiscall FUN_00404e25(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 0x10) {
    uVar1 = (**(code **)(*(int *)this + 0xc))();
  }
  else if (param_1 == 0x111) {
    uVar1 = (**(code **)(*(int *)this + 8))(param_2,param_3);
  }
  else if (param_1 == 0x201) {
    SendMessageA(*(HWND *)((int)this + 8),0xa1,2,0);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

