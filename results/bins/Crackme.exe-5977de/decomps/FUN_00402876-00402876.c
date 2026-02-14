
void * __thiscall FUN_00402876(void *this,void *param_1,int *param_2)

{
  int iVar1;
  void *local_14;
  int local_10;
  int local_8;
  
  if (*(int *)((int)this + 8) == 0) {
    FUN_004025ec(param_1,"");
  }
  else {
    FUN_0040262b(&local_14,param_2);
    local_8 = local_10 - (int)local_14;
    FUN_0040113e();
    iVar1 = FUN_00401034();
    if (iVar1 == 0) {
      FUN_004025ec(param_1,"");
    }
    else {
      FUN_0040230f(param_1,local_14,(void *)(local_8 + (int)local_14));
    }
    FUN_00402a3a((int *)&local_14);
  }
  return param_1;
}

