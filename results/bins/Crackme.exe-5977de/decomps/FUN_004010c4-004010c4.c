
void FUN_004010c4(void)

{
  undefined4 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar1 = FUN_00401367();
  UNRECOVERED_JUMPTABLE = (code *)FUN_004017e5(puVar1);
                    /* WARNING: Could not recover jumptable at 0x004010d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

