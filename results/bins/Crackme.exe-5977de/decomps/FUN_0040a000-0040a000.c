
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unable to track spacebase fully for stack */

void __fastcall FUN_0040a000(byte *param_1)

{
  int in_EAX;
  int unaff_ESI;
  undefined2 in_SS;
  int unaff_retaddr;
  
  *param_1 = *param_1 ^ 0xf7;
  *(int *)(unaff_ESI + 6) =
       *(int *)(unaff_ESI + 6) + (in_EAX >> 0x1f) +
       (uint)(*(byte *)(unaff_ESI + -0x66) < (byte)((uint)param_1 >> 8));
  *(undefined2 *)(unaff_retaddr + -4) = in_SS;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

