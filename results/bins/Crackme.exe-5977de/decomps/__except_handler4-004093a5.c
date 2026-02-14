
/* Library Function - Single Match
    __except_handler4
   
   Library: Visual Studio 2019 Release */

void __cdecl
__except_handler4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_004097eb(*param_1);
  *param_1 = iVar1;
  except_handler4_common(&DAT_0040d040,&LAB_004095be,param_1,param_2,param_3,param_4);
  return;
}

