
uint __cdecl FUN_004029ec(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 | 0xf;
  if (((uVar2 <= param_3) && (param_2 <= param_3 - (param_2 >> 1))) &&
     (uVar1 = (param_2 >> 1) + param_2, param_3 = uVar2, uVar2 < uVar1)) {
    param_3 = uVar1;
  }
  return param_3;
}

