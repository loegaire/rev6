
void __fastcall FUN_0040464a(void *param_1)

{
  int *piVar1;
  int local_8;
  
  piVar1 = (int *)((int)param_1 + 0x28);
  local_8 = *(int *)*piVar1;
  if ((int *)local_8 != (int *)*piVar1) {
    do {
      FUN_004040d6(param_1,*(uint *)(local_8 + 0x10));
      FUN_00403e7a(&local_8);
    } while (local_8 != *piVar1);
  }
  FUN_00404cf1(piVar1);
  return;
}

