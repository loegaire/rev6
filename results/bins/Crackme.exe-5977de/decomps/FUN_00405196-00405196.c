
undefined4 * __thiscall FUN_00405196(void *this,HINSTANCE param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined4 *puVar3;
  HBRUSH pHVar4;
  HFONT pHVar5;
  
  FUN_00404d49(this,param_1,0x65);
  *(undefined ***)this = MainDialog::vftable;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  piVar1 = (int *)FUN_00408aaa(0x10);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_00402fc6(piVar1);
  }
  *(int **)((int)this + 0x14) = piVar1;
  pvVar2 = (void *)FUN_00408aaa(0x28);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_004034a7(pvVar2,0x6f,(char *)0x6e);
  }
  *(undefined4 **)((int)this + 0x10) = puVar3;
  pvVar2 = (void *)FUN_00408aaa(0x1c);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_00404efa(pvVar2,0x3e9,0x6a,0x6b,param_1);
  }
  *(undefined4 **)((int)this + 0x28) = puVar3;
  pvVar2 = (void *)FUN_00408aaa(0x1c);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_00404efa(pvVar2,0x3eb,0x68,0x69,param_1);
  }
  *(undefined4 **)((int)this + 0x2c) = puVar3;
  pvVar2 = (void *)FUN_00408aaa(0x1c);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_00404efa(pvVar2,0x3ea,0x66,0x67,param_1);
  }
  *(undefined4 **)((int)this + 0x30) = puVar3;
  pvVar2 = (void *)FUN_00408aaa(0x1c);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_00404efa(pvVar2,0x3ef,0x7d,0x7e,param_1);
  }
  *(undefined4 **)((int)this + 0x34) = puVar3;
  pHVar4 = CreateSolidBrush(0x33312f);
  *(HBRUSH *)((int)this + 0x20) = pHVar4;
  pHVar5 = CreateFontA(0x12,0,1,0,700,0,0,0,0,0,0,2,0,"Consolas");
  *(HFONT *)((int)this + 0x24) = pHVar5;
  return this;
}

