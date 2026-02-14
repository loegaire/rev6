
undefined4 * __thiscall
FUN_00404efa(void *this,undefined4 param_1,ushort param_2,ushort param_3,HINSTANCE param_4)

{
  HBITMAP pHVar1;
  
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined2 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x1a) = 0;
  pHVar1 = LoadBitmapA(param_4,(LPCSTR)(uint)param_2);
  *(HBITMAP *)((int)this + 0x10) = pHVar1;
  pHVar1 = LoadBitmapA(param_4,(LPCSTR)(uint)param_3);
  *(HBITMAP *)((int)this + 0x14) = pHVar1;
  return this;
}

