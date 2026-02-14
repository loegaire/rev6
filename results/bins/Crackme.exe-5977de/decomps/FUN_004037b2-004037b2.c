
undefined1 __fastcall FUN_004037b2(int param_1)

{
  if (*(char *)(param_1 + 1) == '\0') {
    return 0;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return 1;
}

