
/* WARNING: Instruction at (ram,0x00401cb9) overlaps instruction at (ram,0x00401cb7)
    */
/* WARNING: Removing unreachable block (ram,0x00401d1a) */
/* WARNING: Removing unreachable block (ram,0x00401cb9) */
/* WARNING: Removing unreachable block (ram,0x00401d2e) */
/* WARNING: Removing unreachable block (ram,0x00401d31) */
/* WARNING: Removing unreachable block (ram,0x00401d35) */
/* WARNING: Removing unreachable block (ram,0x00401cb4) */

undefined4 FUN_00401cea(uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uStack_1c;
  undefined4 *puStack_c;
  undefined1 local_5;
  
  FUN_00401ba3(&local_5);
  puVar1 = (undefined4 *)(*(int *)((int)ProcessEnvironmentBlock + 0xc) + 0xc);
  puStack_c = (undefined4 *)*puVar1;
  do {
    if (puStack_c == puVar1) {
      uStack_1c = 0;
code_r0x00401d94:
      FUN_00401ba6();
      return uStack_1c;
    }
    uVar2 = FUN_00401bf3((short *)puStack_c[0xc]);
    if (uVar2 == param_1) {
      uStack_1c = puStack_c[6];
      goto code_r0x00401d94;
    }
    puStack_c = (undefined4 *)*puStack_c;
  } while( true );
}

