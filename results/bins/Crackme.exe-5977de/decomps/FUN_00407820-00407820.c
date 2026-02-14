
int __cdecl FUN_00407820(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  dVar3 = pow(2.0,(double)((float)(0x84 - param_1) / 12.0));
  iVar2 = (int)(dVar3 * 13.375);
  if ((param_2 < 0) && (param_1 != 0)) {
    dVar3 = pow(2.0,(double)((float)(0x85 - param_1) / 12.0));
    iVar1 = abs(param_2);
    iVar1 = iVar1 * (iVar2 - (int)(dVar3 * 13.375));
  }
  else {
    dVar3 = pow(2.0,(double)((float)(0x83 - param_1) / 12.0));
    iVar1 = (iVar2 - (int)(dVar3 * 13.375)) * param_2;
  }
  return iVar2 - ((int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7);
}

