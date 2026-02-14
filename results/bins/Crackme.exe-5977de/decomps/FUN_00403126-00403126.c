
/* WARNING: Instruction at (ram,0x00403146) overlaps instruction at (ram,0x00403145)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0040319c) */
/* WARNING: Removing unreachable block (ram,0x00403145) */
/* WARNING: Removing unreachable block (ram,0x0040319e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00403126(void)

{
  int in_ECX;
  
  FUN_0040113e();
  FUN_0040311f(*(int *)(in_ECX + 8));
  FUN_00403123(*(undefined4 **)(in_ECX + 8));
  FUN_0040112c();
  return;
}

