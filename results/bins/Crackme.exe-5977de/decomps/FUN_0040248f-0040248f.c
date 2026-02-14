
void __thiscall FUN_0040248f(void *this,uint param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    FUN_004029bd(this,param_1);
    iVar1 = ___std_swap_ranges_trivially_swappable((void *)*param_2,*param_3,*(void **)this);
    *(int *)((int)this + 4) = iVar1;
  }
  return;
}

