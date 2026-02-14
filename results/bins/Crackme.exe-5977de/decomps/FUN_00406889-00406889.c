
void __cdecl FUN_00406889(int *param_1)

{
  int iVar1;
  
  if (param_1[0x4d] == 0) {
    if (-1 < param_1[0x54]) {
      param_1[0x51] = param_1[0x54];
    }
    if (-1 < param_1[0x53]) {
      param_1[0x50] = param_1[0x53];
    }
    FUN_00406ff4(param_1);
    if (param_1[0x53] == -1) {
      param_1[0x53] = param_1[0x50] + 1;
      if (*(int *)(*param_1 + (uint)*(byte *)(param_1[0x51] + 0x28 + (int)param_1) * 8) <=
          param_1[0x50] + 1) {
        iVar1 = param_1[0x51] + 1;
        param_1[0x54] = iVar1;
        if ((short)param_1[4] <= iVar1) {
          param_1[0x54] = (int)*(short *)((int)param_1 + 0x12);
        }
        param_1[0x53] = 0;
      }
    }
  }
  else {
    FUN_00406940(param_1);
  }
  param_1[0x4d] = param_1[0x4d] + 1;
  if (param_1[0x4e] + param_1[0x52] <= param_1[0x4d]) {
    param_1[0x52] = 0;
    param_1[0x4d] = 0;
  }
  return;
}

