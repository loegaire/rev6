
undefined4 * __thiscall
FUN_0040395b(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  FUN_00404840((int)this);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x10) = *param_3;
  **(undefined4 **)((int)this + 4) = param_2;
  *(undefined4 *)(*(int *)((int)this + 4) + 4) = param_2;
  *(undefined4 *)(*(int *)((int)this + 4) + 8) = param_2;
  *(undefined1 *)(*(int *)((int)this + 4) + 0xc) = 0;
  *(undefined1 *)(*(int *)((int)this + 4) + 0xd) = 0;
  return this;
}

