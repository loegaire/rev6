
void __thiscall FUN_004022b8(void *this,uint param_1,uint param_2)

{
  *(uint *)((int)this + 0x30) = param_1 >> 6 | param_2 << 0x1a;
  *(uint *)((int)this + 0x34) = param_2 >> 6;
  FUN_00401f9b(this,(int)this + 0x40);
  *(uint *)((int)this + 0x80) = param_1 & 0x3f;
  return;
}

