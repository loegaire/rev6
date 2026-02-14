
void FUN_00401046(void)

{
  undefined4 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar1 = FUN_00401367();
  UNRECOVERED_JUMPTABLE = (code *)FUN_0040151d(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00401056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

