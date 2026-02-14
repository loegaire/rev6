
void FUN_0040112c(void)

{
  undefined4 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar1 = FUN_00401367();
  UNRECOVERED_JUMPTABLE = (code *)FUN_00401ad3(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0040113c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

