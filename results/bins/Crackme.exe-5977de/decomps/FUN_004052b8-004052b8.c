
void __fastcall FUN_004052b8(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[5];
  *param_1 = MainDialog::vftable;
  if (pvVar1 != (void *)0x0) {
    FUN_00403065((int)pvVar1);
    FUN_00408ada(pvVar1);
  }
  if (param_1[6] != 0) {
    FUN_00405f3d(param_1[6]);
  }
  FUN_00403512(param_1[4]);
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[4])(1);
  }
  pvVar1 = (void *)param_1[10];
  if (pvVar1 != (void *)0x0) {
    FUN_00404f3d((int)pvVar1);
    FUN_00408ada(pvVar1);
  }
  pvVar1 = (void *)param_1[0xb];
  if (pvVar1 != (void *)0x0) {
    FUN_00404f3d((int)pvVar1);
    FUN_00408ada(pvVar1);
  }
  pvVar1 = (void *)param_1[0xc];
  if (pvVar1 != (void *)0x0) {
    FUN_00404f3d((int)pvVar1);
    FUN_00408ada(pvVar1);
  }
  pvVar1 = (void *)param_1[0xd];
  if (pvVar1 != (void *)0x0) {
    FUN_00404f3d((int)pvVar1);
    FUN_00408ada(pvVar1);
  }
  DeleteObject((HGDIOBJ)param_1[8]);
  DeleteObject((HGDIOBJ)param_1[9]);
  *param_1 = BaseDialog::vftable;
  return;
}

