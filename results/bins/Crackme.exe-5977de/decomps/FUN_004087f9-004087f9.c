
void __cdecl FUN_004087f9(float *param_1,float *param_2,int param_3)

{
  int iVar1;
  float fVar2;
  undefined2 uVar3;
  float *pfVar4;
  int iVar5;
  
  pfVar4 = param_1;
  param_1 = param_2;
  if ((((0 < param_3) && (pfVar4 != (float *)0x0)) && (param_2 != (float *)0x0)) &&
     (iVar5 = param_3 * 2, 0 < iVar5)) {
    do {
      fVar2 = *param_1;
      param_1 = param_1 + 1;
      iVar1 = (int)ROUND(fVar2);
      uVar3 = (undefined2)iVar1;
      if (0x7fff < iVar1) {
        uVar3 = 0x7fff;
      }
      if (iVar1 < -0x8000) {
        uVar3 = 0x8000;
      }
      *(undefined2 *)pfVar4 = uVar3;
      pfVar4 = (float *)((int)pfVar4 + 2);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

