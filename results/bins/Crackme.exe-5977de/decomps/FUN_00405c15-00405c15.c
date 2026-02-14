
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_00405c15(DWORD param_1)

{
  DWORD DVar1;
  uint in_EAX;
  int iVar2;
  BOOL BVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  size_t _Count;
  WAVEFORMATEX local_18;
  
  DVar1 = param_1;
  if ((((param_1 != 0) && (in_EAX = FUN_00405f3d(param_1), DAT_0040d2e4 != 0)) &&
      (DAT_0040d2e8 != 0)) && (((DAT_0040d2ec != 0 && (DAT_0040d2f0 != 0)) && (DAT_0040d2f4 != 0))))
  {
    DAT_00414614 = (int)(DAT_0040d000 * 0x14) / 1000 + 3U & 0xfffffffc;
    _DAT_00414618 = 1.0 / (float)(int)DAT_0040d000;
    DAT_00414668 = (DAT_0040d004 / 0x14) * DAT_00414614 * 2;
    DAT_0040d308 = (int)(DAT_0040d000 << 7) / 0xac44;
    puVar6 = &DAT_0040d6e0;
    iVar2 = DAT_00414668 / (int)DAT_00414614;
    _DAT_0040d30c =
         1.0 / (float)((double)DAT_0040d308 + (double)(&DAT_0040b4c0)[-(DAT_0040d308 >> 0x1f)]);
    memset(&DAT_0040d6e0,0,0x5800);
    iVar5 = 0;
    puVar4 = &DAT_0040d714;
    do {
      puVar4[-0xd] = iVar5;
      iVar5 = iVar5 + 1;
      *puVar4 = 1;
      puVar4 = puVar4 + 0x16;
    } while ((int)puVar4 < 0x412f14);
    *(undefined4 *)(DVar1 + 0x150) = 0xffffffff;
    *(undefined4 *)(DVar1 + 0x14c) = 0xffffffff;
    *(uint *)(DVar1 + 300) = (uint)*(byte *)(DVar1 + 0x128);
    *(int *)(DVar1 + 0x138) = (int)*(short *)(DVar1 + 0x24);
    *(undefined4 *)(DVar1 + 0x140) = 0;
    *(undefined4 *)(DVar1 + 0x144) = 0;
    *(undefined4 *)(DVar1 + 8) = 0;
    *(undefined4 *)(DVar1 + 0x134) = 0;
    *(undefined4 *)(DVar1 + 0x148) = 0;
    *(undefined4 *)(DVar1 + 0x154) = 0;
    FUN_00405eef(DVar1,(int)*(short *)(DVar1 + 0x26));
    memset(&DAT_00412f00,0,*(short *)(DVar1 + 0x14) * 0xac);
    iVar5 = 0;
    if (0 < *(short *)(DVar1 + 0x14)) {
      puVar4 = &DAT_00412f04;
      do {
        *puVar4 = puVar6;
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 0x2b;
        puVar6 = puVar6 + 0x16;
      } while (iVar5 < *(short *)(DVar1 + 0x14));
    }
    DAT_0040d2f8 = DVar1;
    DAT_00412ee0 = calloc(iVar2 * 6,1);
    local_18.nChannels = 2;
    local_18.wBitsPerSample = 0x10;
    local_18.nBlockAlign = 4;
    local_18.nSamplesPerSec = DAT_0040d000;
    local_18.nAvgBytesPerSec = DAT_0040d000 << 2;
    local_18.wFormatTag = 1;
    local_18.cbSize = 0;
    in_EAX = waveOutOpen(&DAT_00414664,0xffffffff,&local_18,0,0,0);
    if (in_EAX == 0) {
      _Count = DAT_00414668 << 2;
      DAT_00414640 = calloc(_Count,1);
      _DAT_00414654 = 0xffffffff;
      _DAT_00414650 = 0xc;
      _DAT_00414648 = 0;
      _DAT_0041464c = 0;
      _DAT_00414644 = _Count;
      DAT_00414660 = DAT_00414640;
      waveOutPrepareHeader(DAT_00414664,(LPWAVEHDR)&DAT_00414640,0x20);
      DAT_00414620 = (int)calloc(DAT_00414668 * 8 + 0x100,1);
      DAT_0041461c = DAT_00414620 + 0xfU & 0xfffffff0;
      do {
        FUN_004060b9();
      } while (DAT_0040d304 != 0);
      waveOutWrite(DAT_00414664,(LPWAVEHDR)&DAT_00414640,0x20);
      DAT_0040d2fc = 0;
      DAT_0040d300 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_0040600c,(LPVOID)0x0,0,&param_1);
      BVar3 = SetThreadPriority(DAT_0040d300,0xf);
      return CONCAT31((int3)((uint)BVar3 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

