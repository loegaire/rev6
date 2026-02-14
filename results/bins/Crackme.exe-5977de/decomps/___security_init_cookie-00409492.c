
/* Library Function - Single Match
    ___security_init_cookie
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___security_init_cookie(void)

{
  if ((DAT_0040d040 == 0xbb40e64e) || ((DAT_0040d040 & 0xffff0000) == 0)) {
    DAT_0040d040 = FUN_00409445();
    if (DAT_0040d040 == 0xbb40e64e) {
      DAT_0040d040 = 0xbb40e64f;
    }
    else if ((DAT_0040d040 & 0xffff0000) == 0) {
      DAT_0040d040 = DAT_0040d040 | (DAT_0040d040 | 0x4711) << 0x10;
    }
  }
  DAT_0040d080 = ~DAT_0040d040;
  return;
}

