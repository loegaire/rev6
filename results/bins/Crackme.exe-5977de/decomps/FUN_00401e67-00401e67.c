
undefined4 * __thiscall FUN_00401e67(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = 0xb979379e;
  local_10 = 0x157c4a7f;
  local_c = 0x60c09cf3;
  local_8 = 0x34c8ed5c;
  uVar1 = FUN_00402292(&local_14);
  *(undefined4 *)this = uVar1;
  uVar1 = FUN_00402292(&local_10);
  *(undefined4 *)((int)this + 4) = uVar1;
  uVar1 = FUN_00402292(&local_c);
  *(undefined4 *)((int)this + 8) = uVar1;
  uVar1 = FUN_00402292(&local_8);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  uVar1 = FUN_00402292(param_1);
  *(undefined4 *)((int)this + 0x10) = uVar1;
  uVar1 = FUN_00402292(param_1 + 1);
  *(undefined4 *)((int)this + 0x14) = uVar1;
  uVar1 = FUN_00402292(param_1 + 2);
  *(undefined4 *)((int)this + 0x18) = uVar1;
  uVar1 = FUN_00402292(param_1 + 3);
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  uVar1 = FUN_00402292(param_1 + 4);
  *(undefined4 *)((int)this + 0x20) = uVar1;
  uVar1 = FUN_00402292(param_1 + 5);
  *(undefined4 *)((int)this + 0x24) = uVar1;
  uVar1 = FUN_00402292(param_1 + 6);
  *(undefined4 *)((int)this + 0x28) = uVar1;
  uVar1 = FUN_00402292(param_1 + 7);
  *(undefined4 *)((int)this + 0x2c) = uVar1;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  uVar1 = FUN_00402292(param_2);
  *(undefined4 *)((int)this + 0x38) = uVar1;
  uVar1 = FUN_00402292(param_2 + 1);
  *(undefined4 *)((int)this + 0x3c) = uVar1;
  return this;
}

