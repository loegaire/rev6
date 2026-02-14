
void __fastcall FUN_0040a025(undefined4 param_1,short param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_ESI;
  int unaff_EDI;
  byte in_CF;
  
  *(int *)(unaff_EDI + -0x57) = (*(int *)(unaff_EDI + -0x57) - unaff_ESI) - (uint)in_CF;
  uVar2 = in(param_2 + -2);
  out(param_2 + -2,(char)uVar2);
  pcVar1 = (code *)swi(0x5e);
  (*pcVar1)();
  return;
}

