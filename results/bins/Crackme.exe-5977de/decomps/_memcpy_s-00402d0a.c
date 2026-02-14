
/* Library Function - Single Match
    _memcpy_s
   
   Library: Visual Studio 2017 Release */

errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t eVar1;
  int *piVar2;
  
  if (_MaxCount == 0) {
    eVar1 = 0;
  }
  else if (_Dst == (void *)0x0) {
    piVar2 = _errno();
    eVar1 = 0x16;
    *piVar2 = 0x16;
    _invalid_parameter_noinfo();
  }
  else if ((_Src == (void *)0x0) || (_DstSize < _MaxCount)) {
    memset(_Dst,0,_DstSize);
    if (_Src == (void *)0x0) {
      piVar2 = _errno();
      eVar1 = 0x16;
    }
    else {
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      piVar2 = _errno();
      eVar1 = 0x22;
    }
    *piVar2 = eVar1;
    _invalid_parameter_noinfo();
  }
  else {
    memcpy(_Dst,_Src,_MaxCount);
    eVar1 = 0;
  }
  return eVar1;
}

