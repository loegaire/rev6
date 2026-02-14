
void __fastcall FUN_004050cc(undefined4 *param_1)

{
  LPARAM lParam;
  
  if ((*(char *)((int)param_1 + 0x19) == '\0') || (*(char *)(param_1 + 6) == '\0')) {
    lParam = param_1[4];
  }
  else {
    lParam = param_1[5];
  }
  SendMessageA((HWND)*param_1,0x172,0,lParam);
  return;
}

