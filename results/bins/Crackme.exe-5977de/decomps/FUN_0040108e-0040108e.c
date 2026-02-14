
void FUN_0040108e(void)

{
  undefined4 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar1 = FUN_00401367();
  UNRECOVERED_JUMPTABLE = (code *)FUN_004016df((int)puVar1);
                    /* WARNING: Could not recover jumptable at 0x0040109e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

