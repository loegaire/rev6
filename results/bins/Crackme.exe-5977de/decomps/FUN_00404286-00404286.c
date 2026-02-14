
void __fastcall FUN_00404286(int param_1)

{
  int *piVar1;
  int local_8;
  
  piVar1 = (int *)(param_1 + 0x30);
  local_8 = *(int *)*piVar1;
  if ((int *)local_8 != (int *)*piVar1) {
    do {
      FUN_0040113e();
      FUN_0040111a();
      FUN_00403e7a(&local_8);
    } while (local_8 != *piVar1);
  }
  FUN_00404cf1(piVar1);
  return;
}

