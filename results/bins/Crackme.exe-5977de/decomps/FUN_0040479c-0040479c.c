
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

int __thiscall FUN_0040479c(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  uint local_139c [1252];
  uint local_c;
  int local_8;
  
  local_8 = 0x4047a9;
  uVar1 = std::_Random_device();
  FUN_00403dae(local_139c,uVar1);
  uVar1 = *(int *)((int)this + 0x10) - *(int *)((int)this + 0xc);
  if (param_1 < uVar1) {
    local_c = (uVar1 - param_1) / *(uint *)((int)this + 0x14);
    local_8 = 0;
    do {
      FUN_00403baa(local_139c,0,local_c);
      FUN_0040113e();
      iVar2 = FUN_00401108();
      if (iVar2 != 0) {
        return iVar2;
      }
      local_8 = local_8 + 1;
    } while (local_8 < 100);
    FUN_0040113e();
    iVar2 = FUN_00401108();
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

