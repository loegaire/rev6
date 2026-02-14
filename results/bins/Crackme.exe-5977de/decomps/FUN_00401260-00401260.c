
undefined4 __fastcall FUN_00401260(int param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    pcVar1 = (code *)FUN_004018eb(param_1);
    puVar2 = FUN_00401222();
    uVar3 = (*pcVar1)(puVar2);
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    uVar3 = *(undefined4 *)(param_1 + 0xc);
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0xc);
  }
  return uVar3;
}

