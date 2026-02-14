
void FUN_004037fa(int *param_1)

{
  *(undefined4 *)(*param_1 + 0x18) = 0;
  *(undefined4 *)(*param_1 + 0x14) = 0;
  *(undefined4 *)(*param_1 + 4) = 0;
  *(uint *)(*param_1 + 0xc0) = *(uint *)(*param_1 + 0xc0) | 0x100;
  return;
}

