
void * __thiscall FUN_00404059(void *this,void *param_1)

{
  int iVar1;
  void *_Dst;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_90 [132];
  undefined4 local_c;
  undefined4 local_8;
  
  _Dst = (void *)FUN_00408ae8(*(size_t *)this);
  memcpy(_Dst,param_1,*(size_t *)this);
  puVar4 = &local_c;
  iVar1 = **(int **)((int)this + 0x1c);
  uVar6 = 0;
  uVar5 = 0;
  local_c = 0xd0c0b0a;
  local_8 = 0x11100f0e;
  puVar2 = FUN_00403477();
  puVar3 = (undefined4 *)FUN_0040330a((int)puVar2);
  FUN_00401e39(local_90,puVar3,puVar4,uVar5,uVar6);
  FUN_004022b8(local_90,(int)param_1 - iVar1,0);
  FUN_00401f4d(local_90,(int)_Dst,0x10);
  return _Dst;
}

