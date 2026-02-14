
undefined4 * __thiscall FUN_0040574d(void *this,HINSTANCE param_1,undefined4 param_2)

{
  HBRUSH pHVar1;
  HFONT pHVar2;
  void *this_00;
  undefined4 *puVar3;
  
  FUN_00404d49(this,param_1,param_2);
  *(undefined ***)this = PopupDialog::vftable;
  FUN_0040515a((void *)((int)this + 0x10),(undefined4 *)&stack0x0000000c);
  pHVar1 = CreateSolidBrush(0x33312f);
  puVar3 = (undefined4 *)0x0;
  *(HBRUSH *)((int)this + 0x28) = pHVar1;
  pHVar2 = CreateFontA(0x12,0,1,0,700,0,0,0,0,0,0,2,0,"Consolas");
  *(HFONT *)((int)this + 0x2c) = pHVar2;
  this_00 = (void *)FUN_00408aaa(0x1c);
  if (this_00 != (void *)0x0) {
    puVar3 = FUN_00404efa(this_00,0x3f0,0x7f,0x80,param_1);
  }
  *(undefined4 **)((int)this + 0x30) = puVar3;
  FUN_00405724((undefined4 *)&stack0x0000000c);
  return this;
}

