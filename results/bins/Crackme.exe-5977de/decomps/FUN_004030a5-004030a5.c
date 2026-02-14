
undefined1 __thiscall FUN_004030a5(void *this,int param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  byte *pbVar3;
  uint6 uVar4;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    puVar2 = FUN_0040448c();
    FUN_004046c8(puVar2,*(undefined4 *)this,*(undefined4 *)((int)this + 4),
                 *(undefined4 *)((int)this + 8),*(uint **)((int)this + 0xc));
    uVar4 = FUN_00408aaa(0x14);
    pbVar3 = (byte *)uVar4;
    if (pbVar3 == (byte *)0x0) {
      uVar4 = uVar4 & 0xffff00000000;
    }
    else {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      pbVar3[2] = 0;
      pbVar3[3] = 0;
      pbVar3[4] = 0;
      pbVar3[5] = 0;
      pbVar3[6] = 0;
      pbVar3[7] = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      pbVar3[0x10] = 0;
      pbVar3[0x11] = 0;
      pbVar3[0x12] = 0;
      pbVar3[0x13] = 0;
      uVar4 = FUN_0040a000(pbVar3);
    }
    uVar1 = FUN_0040a025((void *)uVar4,(short)(uVar4 >> 0x20));
    FUN_00408ada((void *)uVar4);
    puVar2 = FUN_0040448c();
    FUN_00404732(puVar2);
  }
  return uVar1;
}

