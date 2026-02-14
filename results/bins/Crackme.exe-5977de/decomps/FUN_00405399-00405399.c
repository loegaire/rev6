
void __fastcall FUN_00405399(int param_1)

{
  HINSTANCE pHVar1;
  char cVar2;
  undefined1 auStack_1a0 [4];
  undefined4 uStack_19c;
  CHAR local_180 [256];
  undefined4 local_80 [13];
  undefined4 local_4c [6];
  undefined4 local_34 [6];
  int local_1c [3];
  int local_10 [3];
  
  memset(local_180,0,0x100);
  uStack_19c = 0x4053d6;
  GetDlgItemTextA(*(HWND *)(param_1 + 8),0x3ee,local_180,0xff);
  cVar2 = FUN_004030a5(*(void **)(param_1 + 0x14),(int)local_180);
  if (cVar2 == '\0') {
    pHVar1 = *(HINSTANCE *)(param_1 + 4);
    FUN_004025ec(auStack_1a0,"");
    FUN_0040574d(local_80,pHVar1,0x88);
    FUN_00404e89(local_80,*(HWND *)(param_1 + 8));
    FUN_004057da(local_80);
  }
  else {
    FUN_004025ec(local_34,local_180);
    FUN_0040268b(local_1c);
    FUN_00405724(local_34);
    FUN_00402876(local_1c,local_4c,local_10);
    pHVar1 = *(HINSTANCE *)(param_1 + 4);
    FUN_0040515a(auStack_1a0,local_4c);
    FUN_0040574d(local_80,pHVar1,0x86);
    FUN_00404e89(local_80,*(HWND *)(param_1 + 8));
    FUN_004057da(local_80);
    FUN_00405724(local_4c);
    FUN_00402781(local_1c);
  }
  return;
}

