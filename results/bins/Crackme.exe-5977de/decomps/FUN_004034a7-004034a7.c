
undefined4 * __thiscall FUN_004034a7(void *this,ushort param_1,char *param_2)

{
  undefined4 uVar1;
  
  *(undefined ***)this = CSkin::vftable;
  *(undefined1 *)((int)this + 0x25) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = FUN_00403590(this,param_1,(ushort)param_2);
  if ((char)uVar1 != '\0') {
    return this;
  }
  param_2 = "Unable to retrieve the skin.";
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&param_2,(ThrowInfo *)&DAT_0040ba64);
}

