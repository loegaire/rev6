
uint FUN_00402b85(void)

{
  uint uVar1;
  
  FUN_0040113e();
  FUN_004010c4();
  FUN_0040113e();
  uVar1 = FUN_004010f6();
  if (uVar1 == 0) {
    return 0;
  }
  return uVar1 & 0xffffff00;
}

