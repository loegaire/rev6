
void __cdecl FUN_00402f85(int *param_1,int param_2,char param_3)

{
  if (param_3 != '\0') {
    if (param_3 == '\x01') {
      param_1[1] = param_1[1] + param_2;
      goto LAB_00402faf;
    }
    if (param_3 != '\x02') goto LAB_00402faf;
    param_2 = *param_1 + param_2;
  }
  param_1[1] = param_2;
LAB_00402faf:
  if (*param_1 < param_1[1]) {
    param_1[1] = *param_1;
  }
  return;
}

