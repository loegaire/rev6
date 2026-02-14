
uint __fastcall FUN_00403ef7(uint *param_1)

{
  uint uVar1;
  
  if (*param_1 == 0x270) {
    FUN_00404bf8((int)param_1);
  }
  else if (0x4df < *param_1) {
    FUN_00404b1e(param_1);
  }
  uVar1 = param_1[*param_1 + 1];
  *param_1 = *param_1 + 1;
  uVar1 = uVar1 ^ param_1[0x4e1] & uVar1 >> 0xb;
  uVar1 = uVar1 ^ (uVar1 & 0xff3a58ad) << 7;
  uVar1 = uVar1 ^ (uVar1 & 0xffffdf8c) << 0xf;
  return uVar1 >> 0x12 ^ uVar1;
}

