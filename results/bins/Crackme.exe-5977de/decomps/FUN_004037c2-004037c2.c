
void __fastcall FUN_004037c2(int param_1)

{
  code *pcVar1;
  
  *(undefined1 *)(param_1 + 1) = 1;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

