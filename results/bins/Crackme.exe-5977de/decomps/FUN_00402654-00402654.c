
undefined4 * __thiscall FUN_00402654(void *this,int param_1,int param_2)

{
  int local_c;
  int local_8;
  
  local_8 = param_2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  local_c = param_1;
  FUN_004024c0(this,param_2 - param_1,&local_c,&local_8);
  return this;
}

