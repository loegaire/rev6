
undefined4 FUN_0040600c(void)

{
  int iVar1;
  int iVar2;
  mmtime_tag local_10;
  
  iVar1 = DAT_00414668 / DAT_00414614;
  DAT_0040d008 = 0;
  while (DAT_0040d2fc == '\0') {
    local_10.wType = 4;
    waveOutGetPosition(DAT_00414664,&local_10,0xc);
    local_10.u.ms = local_10.u.ms >> 2;
    iVar2 = ((int)local_10.u.ms % DAT_00414668) / DAT_00414614;
    while (DAT_0040d304 != iVar2) {
      DAT_0040d2fd = 1;
      FUN_004060b9();
      DAT_00414610 = DAT_00414610 + 1;
      if (iVar1 <= DAT_00414610) {
        DAT_00414610 = 0;
      }
      DAT_0040d2fd = 0;
    }
    Sleep(5);
  }
  DAT_0040d008 = 1;
  return 0;
}

