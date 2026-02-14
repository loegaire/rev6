
void __fastcall FUN_00404732(void *param_1)

{
  void *pvVar1;
  
  *(undefined1 *)((int)param_1 + 8) = 1;
  FUN_00404286((int)param_1);
  FUN_0040464a(param_1);
  pvVar1 = *(void **)((int)param_1 + 0x24);
  if (pvVar1 != (void *)0x0) {
    FUN_004037af();
    FUN_00408ada(pvVar1);
    *(undefined4 *)((int)param_1 + 0x24) = 0;
  }
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  *(undefined4 *)((int)param_1 + 0x38) = 0;
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  *(undefined4 *)((int)param_1 + 0x3c) = 0;
  FUN_00404cd0((int *)((int)param_1 + 0x40));
  return;
}

