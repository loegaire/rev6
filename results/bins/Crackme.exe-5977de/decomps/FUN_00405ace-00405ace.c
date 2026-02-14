
uint __cdecl FUN_00405ace(int *param_1)

{
  undefined4 *_Memory;
  void *_Memory_00;
  uint in_EAX;
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 extraout_EAX;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int local_10;
  int local_8;
  
  if (param_1 == (int *)0x0) {
    uVar1 = in_EAX & 0xffffff00;
  }
  else {
    do {
    } while (DAT_0040d2fd != '\0');
    FUN_00405f3d((int)param_1);
    pvVar3 = (void *)param_1[1];
    if (pvVar3 != (void *)0x0) {
      local_10 = 0;
      if (0 < (short)param_1[8]) {
        local_8 = 0;
        do {
          iVar5 = 0;
          iVar6 = param_1[1];
          if (0 < *(int *)(local_8 + iVar6)) {
            puVar4 = (undefined4 *)(iVar6 + 4 + local_8);
            do {
              _Memory = (undefined4 *)*puVar4;
              if (_Memory != (undefined4 *)0x0) {
                free((void *)*_Memory);
                free(_Memory);
              }
              iVar5 = iVar5 + 1;
              puVar4 = puVar4 + 1;
            } while (iVar5 < *(int *)(local_8 + iVar6));
          }
          local_8 = local_8 + 0x154;
          local_10 = local_10 + 1;
        } while (local_10 < (short)param_1[8]);
        pvVar3 = (void *)param_1[1];
      }
      if (pvVar3 != (void *)0x0) {
        free(pvVar3);
      }
    }
    iVar6 = 0;
    pvVar3 = (void *)*param_1;
    if (pvVar3 != (void *)0x0) {
      pvVar2 = pvVar3;
      if (0 < param_1[7]) {
        do {
          _Memory_00 = *(void **)((int)pvVar2 + iVar6 * 8 + 4);
          if (_Memory_00 != (void *)0x0) {
            free(_Memory_00);
            pvVar2 = (void *)*param_1;
            pvVar3 = pvVar2;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_1[7]);
      }
      if (pvVar3 != (void *)0x0) {
        free(pvVar3);
      }
    }
    free(param_1);
    uVar1 = CONCAT31((int3)((uint)extraout_EAX >> 8),1);
  }
  return uVar1;
}

