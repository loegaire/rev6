
void __fastcall FUN_004057da(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0xc];
  *param_1 = PopupDialog::vftable;
  if (pvVar1 != (void *)0x0) {
    FUN_00404f3d((int)pvVar1);
    FUN_00408ada(pvVar1);
  }
  DeleteObject((HGDIOBJ)param_1[10]);
  DeleteObject((HGDIOBJ)param_1[0xb]);
  FUN_00405724(param_1 + 4);
  *param_1 = BaseDialog::vftable;
  return;
}

