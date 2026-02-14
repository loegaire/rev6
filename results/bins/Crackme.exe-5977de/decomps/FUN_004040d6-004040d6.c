
void __thiscall FUN_004040d6(void *this,uint param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_90 [132];
  undefined4 local_c;
  undefined4 local_8;
  
  uVar5 = 0;
  puVar3 = &local_c;
  local_c = 0xd0c0b0a;
  uVar4 = 0;
  local_8 = 0x11100f0e;
  puVar1 = FUN_00403477();
  puVar2 = (undefined4 *)FUN_0040330a((int)puVar1);
  FUN_00401e39(local_90,puVar2,puVar3,uVar4,uVar5);
  FUN_004022b8(local_90,param_1,0);
  FUN_00401f4d(local_90,**(int **)((int)this + 0x1c) + param_1,0x10);
  return;
}

