
undefined1 * FUN_00401222(void)

{
  char *pcVar1;
  int iVar2;
  byte local_14 [16];
  
  local_14[0] = 0xe;
  local_14[1] = 0x2b;
  local_14[2] = 0x39;
  local_14[3] = 0x2e;
  local_14[4] = 0x3f;
  local_14[5] = 0x26;
  local_14[6] = 0x7c;
  local_14[7] = 0x7d;
  local_14[8] = 0x61;
  local_14[9] = 0x2b;
  local_14[10] = 0x23;
  local_14[0xb] = 0x23;
  local_14[0xc] = 0x4f;
  iVar2 = 0;
  do {
    (&DAT_0040d220)[iVar2] = local_14[iVar2] ^ 0x4f;
    pcVar1 = &DAT_0040d220 + iVar2;
    iVar2 = iVar2 + 1;
  } while (*pcVar1 != '\0');
  return &DAT_0040d220;
}

