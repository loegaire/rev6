
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___scrt_initialize_onexit_tables
   
   Library: Visual Studio 2019 Release */

undefined4 __cdecl ___scrt_initialize_onexit_tables(int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 in_EAX;
  undefined3 extraout_var;
  uint uVar4;
  undefined4 uVar5;
  int iVar3;
  
  if (DAT_0040d369 != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
    FUN_00409156();
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 == 0) || (param_1 != 0)) {
    DAT_0040d36c = 0xffffffff;
    _DAT_0040d370 = 0xffffffff;
    _DAT_0040d374 = 0xffffffff;
    _DAT_0040d378 = 0xffffffff;
    _DAT_0040d37c = 0xffffffff;
    _DAT_0040d380 = 0xffffffff;
LAB_00408977:
    DAT_0040d369 = '\x01';
    uVar4 = CONCAT31((int3)((uint)iVar3 >> 8),1);
  }
  else {
    uVar4 = initialize_onexit_table(&DAT_0040d36c);
    if (uVar4 == 0) {
      uVar4 = initialize_onexit_table(&DAT_0040d378);
      iVar3 = 0;
      if (uVar4 == 0) goto LAB_00408977;
    }
    uVar4 = uVar4 & 0xffffff00;
  }
  return uVar4;
}

