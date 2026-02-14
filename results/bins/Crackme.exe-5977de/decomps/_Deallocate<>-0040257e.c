
/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::_Deallocate<4,0>(void *,unsigned int)
    void __cdecl std::_Deallocate<8,0>(void *,unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl _Deallocate<>(void *param_1,uint param_2)

{
  if (0xfff < param_2) {
    FUN_00402990((int *)&param_1,(int *)&param_2);
  }
  FUN_00408ada(param_1);
  return;
}

