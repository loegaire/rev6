
void __thiscall FUN_00401f9b(void *this,int param_1)

{
  uint uVar1;
  uint local_44 [16];
  
  FUN_00401fcc(this,local_44);
  uVar1 = 0;
  do {
    FUN_004022ec(local_44[uVar1],(undefined1 *)(param_1 + uVar1 * 4));
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  return;
}

