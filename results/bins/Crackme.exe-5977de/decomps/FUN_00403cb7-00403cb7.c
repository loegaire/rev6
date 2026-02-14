
uint FUN_00403cb7(int param_1,uint *param_2)

{
  uint in_EAX;
  uint uVar1;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (in_EAX = *param_2, *(uint *)(param_1 + 0x10) <= in_EAX)
     ) {
    uVar1 = CONCAT31((int3)(in_EAX >> 8),1);
  }
  else {
    uVar1 = in_EAX & 0xffffff00;
  }
  return uVar1;
}

