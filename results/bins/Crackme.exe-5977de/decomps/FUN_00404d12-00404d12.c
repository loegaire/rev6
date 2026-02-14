
void __thiscall FUN_00404d12(void *this,uint param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  
  *(uint *)((int)this + 4) = param_1;
  uVar1 = 1;
  puVar2 = (uint *)((int)this + 8);
  do {
    param_1 = (param_1 ^ param_1 >> 0x1e) * param_2 + uVar1;
    uVar1 = uVar1 + 1;
    *puVar2 = param_1;
    puVar2 = puVar2 + 1;
  } while (uVar1 < 0x270);
  *(undefined4 *)this = 0x270;
  return;
}

