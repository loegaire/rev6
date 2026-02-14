
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_00405f3d(int param_1)

{
  uint in_EAX;
  MMRESULT MVar1;
  
  if (param_1 != 0) {
    DAT_0040d2fc = 1;
    do {
    } while (DAT_0040d2fd != '\0');
    if (DAT_0040d300 != 0) {
      while (DAT_0040d008 == '\0') {
        Sleep(10);
      }
      DAT_0040d300 = 0;
    }
    if (DAT_00414620 != 0) {
      free((void *)DAT_00414620);
      DAT_00414620 = 0;
    }
    if (DAT_00414640 != 0) {
      waveOutUnprepareHeader(DAT_00414664,(LPWAVEHDR)&DAT_00414640,0x20);
      _DAT_00414650 = _DAT_00414650 & 0xfffffffd;
      free((void *)DAT_00414640);
      DAT_00414640 = 0;
    }
    DAT_0040d2f8 = 0;
    if (DAT_00412ee0 != 0) {
      free((void *)DAT_00412ee0);
      DAT_00412ee0 = 0;
    }
    waveOutReset(DAT_00414664);
    MVar1 = waveOutClose(DAT_00414664);
    DAT_0040d304 = 0;
    DAT_00414610 = 0;
    return CONCAT31((int3)(MVar1 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}

