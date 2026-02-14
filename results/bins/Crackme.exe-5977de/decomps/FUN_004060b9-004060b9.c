
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004060b9(void)

{
  float *_Dst;
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = DAT_00414668 / (int)DAT_00414614;
  iVar3 = DAT_0040d304 * DAT_00414614;
  _Dst = (float *)(DAT_0041461c + iVar3 * 8);
  memset(_Dst,0,DAT_00414614 << 3);
  iVar4 = 0;
  uVar6 = *(uint *)(DAT_0040d2f8 + 8);
  pfVar2 = _Dst;
  if (0 < (int)DAT_00414614) {
    do {
      if (uVar6 == 0) {
        (**(code **)(DAT_0040d2f8 + 0x158))(DAT_0040d2f8);
        uVar6 = *(uint *)(DAT_0040d2f8 + 0xc);
      }
      uVar5 = uVar6;
      if ((int)DAT_00414614 < (int)(uVar6 + iVar4)) {
        uVar5 = DAT_00414614 - iVar4;
      }
      FUN_0040815e(pfVar2,uVar5);
      iVar4 = iVar4 + uVar5;
      uVar6 = uVar6 - uVar5;
      pfVar2 = pfVar2 + uVar5 * 2;
      *(int *)(DAT_0040d2f8 + 0x154) =
           *(int *)(DAT_0040d2f8 + 0x154) + (int)((float)(int)uVar5 * _DAT_00414618 * 1000.0);
    } while (iVar4 < (int)DAT_00414614);
  }
  *(undefined4 *)(DAT_0040d304 * 6 + 2 + DAT_00412ee0) = *(undefined4 *)(DAT_0040d2f8 + 0x154);
  *(undefined1 *)(DAT_0040d304 * 6 + 1 + DAT_00412ee0) = *(undefined1 *)(DAT_0040d2f8 + 0x140);
  *(undefined1 *)(DAT_0040d304 * 6 + DAT_00412ee0) = *(undefined1 *)(DAT_0040d2f8 + 0x144);
  *(uint *)(DAT_0040d2f8 + 8) = uVar6;
  FUN_004087f9((float *)(DAT_00414660 + iVar3 * 4),_Dst,DAT_00414614 & 0x3fffffff);
  DAT_0040d304 = DAT_0040d304 + 1;
  if (iVar1 <= DAT_0040d304) {
    DAT_0040d304 = 0;
  }
  return;
}

