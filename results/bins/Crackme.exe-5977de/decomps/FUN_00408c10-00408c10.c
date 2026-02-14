
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_00408c10(void)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int unaff_ESI;
  undefined4 uVar7;
  undefined4 uVar8;
  void *local_14;
  
  uVar3 = ___scrt_initialize_crt(1);
  if ((char)uVar3 != '\0') {
    bVar2 = false;
    uVar3 = ___scrt_acquire_startup_lock();
    if (DAT_0040d360 != 1) {
      if (DAT_0040d360 == 0) {
        DAT_0040d360 = 1;
        iVar4 = initterm_e(&DAT_0040b238,&DAT_0040b244);
        if (iVar4 != 0) {
          ExceptionList = local_14;
          return 0xff;
        }
        initterm(&DAT_0040b228,&DAT_0040b234);
        DAT_0040d360 = 2;
      }
      else {
        bVar2 = true;
      }
      ___scrt_release_startup_lock((char)uVar3);
      piVar5 = (int *)FUN_0040955a();
      if ((*piVar5 != 0) && (uVar3 = FUN_0040898b((int)piVar5), (char)uVar3 != '\0')) {
        pcVar1 = (code *)*piVar5;
        uVar8 = 0;
        uVar7 = 2;
        uVar3 = 0;
        guard_check_icall();
        (*pcVar1)(uVar3,uVar7,uVar8);
      }
      piVar5 = (int *)FUN_00409560();
      if ((*piVar5 != 0) && (uVar3 = FUN_0040898b((int)piVar5), (char)uVar3 != '\0')) {
        register_thread_local_exe_atexit_callback(*piVar5);
      }
      FUN_0040926b();
      get_narrow_winmain_command_line();
      unaff_ESI = FUN_00402b14((HINSTANCE)&IMAGE_DOS_HEADER_00400000);
      uVar6 = FUN_004092a3();
      if ((char)uVar6 != '\0') {
        if (!bVar2) {
          _cexit();
        }
        ___scrt_uninitialize_crt(1,'\0');
        ExceptionList = local_14;
        return unaff_ESI;
      }
      goto LAB_00408d80;
    }
  }
  FUN_00409156();
LAB_00408d80:
                    /* WARNING: Subroutine does not return */
  exit(unaff_ESI);
}

