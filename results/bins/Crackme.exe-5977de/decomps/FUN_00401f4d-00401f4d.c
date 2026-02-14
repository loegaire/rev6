
void __thiscall FUN_00401f4d(void *this,int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      uVar1 = *(uint *)((int)this + 0x80);
      if (0x3f < uVar1) {
        FUN_00401f9b(this,(int)this + 0x40);
        *(undefined4 *)((int)this + 0x80) = 0;
        uVar1 = 0;
      }
      *(byte *)(uVar2 + param_1) = *(byte *)(uVar2 + param_1) ^ *(byte *)(uVar1 + 0x40 + (int)this);
      *(int *)((int)this + 0x80) = *(int *)((int)this + 0x80) + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2);
  }
  return;
}

