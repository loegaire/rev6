
void __thiscall
FUN_004046c8(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)0x0;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  FUN_0040113e();
  FUN_0040112c();
  FUN_004045a7(this,param_4);
  *(undefined1 *)((int)this + 8) = 0;
  puVar1 = (undefined2 *)FUN_00408aaa(2);
  if (puVar1 != (undefined2 *)0x0) {
    puVar2 = FUN_004037a7(puVar1);
  }
  *(undefined2 **)((int)this + 0x24) = puVar2;
  FUN_004037c2((int)puVar2);
  return;
}

