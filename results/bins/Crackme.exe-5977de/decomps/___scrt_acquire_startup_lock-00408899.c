
/* Library Function - Single Match
    ___scrt_acquire_startup_lock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 ___scrt_acquire_startup_lock(void)

{
  void *pvVar1;
  bool bVar2;
  undefined3 extraout_var;
  void *pvVar3;
  
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  if (CONCAT31(extraout_var,bVar2) != 0) {
    while( true ) {
      pvVar3 = (void *)0x0;
      LOCK();
      pvVar1 = StackBase;
      if (DAT_0040d364 != (void *)0x0) {
        pvVar3 = DAT_0040d364;
        pvVar1 = DAT_0040d364;
      }
      DAT_0040d364 = pvVar1;
      UNLOCK();
      if (pvVar3 == (void *)0x0) break;
      if (StackBase == pvVar3) {
        return CONCAT31((int3)((uint)pvVar3 >> 8),1);
      }
    }
  }
  return 0;
}

