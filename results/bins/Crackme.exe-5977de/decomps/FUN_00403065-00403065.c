
void __fastcall FUN_00403065(int param_1)

{
  void *pvVar1;
  
  free(*(void **)(param_1 + 0xc));
  pvVar1 = *(void **)(param_1 + 4);
  if (pvVar1 != (void *)0x0) {
    FUN_004038bf();
    FUN_00408ada(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 8);
  if (pvVar1 != (void *)0x0) {
    FUN_004038bf();
    FUN_00408ada(pvVar1);
  }
  return;
}

