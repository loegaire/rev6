
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00401549) overlaps instruction at (ram,0x00401548)
    */
/* WARNING: Removing unreachable block (ram,0x00401548) */
/* WARNING: Removing unreachable block (ram,0x00401576) */

undefined4 __fastcall FUN_0040151d(undefined4 *param_1)

{
  undefined4 uVar1;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_10;
  uint uStack_c;
  undefined4 *local_8;
  
  if (param_1[0x17] == 0) {
    uStack_c = 0xf627eb17;
    uStack_14 = *param_1;
    local_8 = param_1;
    iStack_10 = FUN_00401260((int)param_1);
    FUN_00401cba(&iStack_18,iStack_10,uStack_c);
    uVar1 = func_0x00401163();
                    /* WARNING: Bad instruction - Truncating control flow here */
    local_8[0x17] = uVar1;
    uVar1 = local_8[0x17];
  }
  else {
    uVar1 = param_1[0x17];
  }
  return uVar1;
}

