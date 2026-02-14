
void * __thiscall
FUN_00401e39(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 param_3,
            undefined4 param_4)

{
  FUN_00401e67(this,param_1,param_2);
  *(undefined4 *)((int)this + 0x30) = param_3;
  *(undefined4 *)((int)this + 0x34) = param_4;
  *(undefined4 *)((int)this + 0x80) = 0x40;
  return this;
}

