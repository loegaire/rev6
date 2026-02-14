
char * __thiscall FUN_00403847(void *this,char *param_1)

{
  char *_Str1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(*(int *)((int)this + 8) + 6);
  iVar2 = 0;
  if (uVar3 != 0) {
    do {
      _Str1 = (char *)FUN_0040388e(this,(ushort)iVar2);
      iVar1 = strncmp(_Str1,param_1,8);
      if (iVar1 == 0) {
        return _Str1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar3);
  }
  return (char *)0x0;
}

