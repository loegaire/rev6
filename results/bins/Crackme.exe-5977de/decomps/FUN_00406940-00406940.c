
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00406940(int *param_1)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  byte bVar6;
  int *piVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  uint uVar14;
  int local_18;
  undefined *local_14;
  undefined *local_c;
  
  piVar7 = param_1;
  iVar9 = param_1[0x50] * (int)(short)param_1[5] * 5 +
          *(int *)(*param_1 + 4 + (uint)*(byte *)(param_1[0x51] + 0x28 + (int)param_1) * 8);
  if ((iVar9 != 0) && (local_18 = 0, 0 < (short)param_1[5])) {
    do {
      iVar10 = local_18 * 0xac;
      pbVar2 = &DAT_00412f00 + iVar10;
      if ((int)(uint)(byte)(&DAT_00412f66)[iVar10] < (int)(short)piVar7[8]) {
        local_14 = (undefined *)((uint)(byte)(&DAT_00412f66)[iVar10] * 0x154 + piVar7[1]);
        if ((byte)local_14[*pbVar2 + 0x44] < 0x10) {
          local_c = &DAT_004145e0;
          if (*(undefined **)(local_14 + (uint)(byte)local_14[*pbVar2 + 0x44] * 4 + 4) !=
              (undefined *)0x0) {
            local_c = *(undefined **)(local_14 + (uint)(byte)local_14[*pbVar2 + 0x44] * 4 + 4);
          }
        }
        else {
          local_c = &DAT_004145e0;
        }
      }
      else {
        _DAT_004145e0 = 0;
        local_14 = &DAT_00414480;
        local_c = &DAT_004145e0;
      }
      bVar8 = *(byte *)(iVar9 + 3);
      bVar13 = *(byte *)(iVar9 + 4);
      param_1._3_1_ = bVar13 & 0xf;
      (&DAT_00412f18)[local_18 * 0x2b] = 0;
      (&DAT_00412f1c)[local_18 * 0x2b] = 0;
      (&DAT_00412f02)[iVar10] = 0;
      bVar13 = bVar13 >> 4;
      if (((local_14[0x14c] & 1) != 0) && ((&DAT_00412f3c)[iVar10] == '\0')) {
        FUN_00407a8f((int)pbVar2,&DAT_00412f2c + local_18 * 0x2b,&DAT_00412f28 + local_18 * 0x2b,
                     local_14[0x14c],(uint)(byte)local_14[0x144],(int)(local_14 + 0xa4),
                     local_14[0x148],local_14[0x147],local_14[0x146],&DAT_00412f34 + local_18 * 0x2b
                     ,&DAT_00412f30 + local_18 * 0x2b,&DAT_00412f3c + iVar10,
                     &DAT_00412f38 + local_18 * 0x2b,2);
      }
      if (((local_14[0x14d] & 1) != 0) && ((&DAT_00412f54)[iVar10] == '\0')) {
        FUN_00407a8f((int)pbVar2,(uint *)(&DAT_00412f44 + iVar10),(uint *)(&DAT_00412f40 + iVar10),
                     local_14[0x14d],(uint)(byte)local_14[0x145],(int)(local_14 + 0xf4),
                     local_14[0x14b],local_14[0x14a],local_14[0x149],
                     (uint *)(&DAT_00412f4c + iVar10),(int *)(&DAT_00412f48 + iVar10),
                     &DAT_00412f54 + iVar10,(int *)(&DAT_00412f50 + iVar10),4);
      }
      if ((&DAT_00412f65)[iVar10] != '\0') {
        piVar1 = &DAT_00412f58 + local_18 * 0x2b;
        *piVar1 = *piVar1 - (uint)*(ushort *)(local_14 + 0x152);
        if (*piVar1 < 0) {
          (&DAT_00412f58)[local_18 * 0x2b] = 0;
        }
        (&DAT_00412f02)[iVar10] = (&DAT_00412f02)[iVar10] | 2;
      }
      bVar3 = *(byte *)(iVar9 + 2);
      uVar14 = (uint)bVar3;
      bVar6 = bVar3 >> 4;
      if (bVar6 == 6) {
        piVar1 = &DAT_00412f10 + local_18 * 0x2b;
        *piVar1 = *piVar1 - (uVar14 & 0xf);
        if (*piVar1 < 0) {
          (&DAT_00412f10)[local_18 * 0x2b] = 0;
        }
LAB_00406b74:
        (&DAT_00412f02)[iVar10] = (&DAT_00412f02)[iVar10] | 2;
      }
      else {
        if (bVar6 == 7) {
          (&DAT_00412f10)[local_18 * 0x2b] = (&DAT_00412f10)[local_18 * 0x2b] + (uVar14 & 0xf);
          if (0x40 < (int)(&DAT_00412f10)[local_18 * 0x2b]) {
            (&DAT_00412f10)[local_18 * 0x2b] = 0x40;
          }
          goto LAB_00406b74;
        }
        if (bVar6 == 0xb) {
          (&DAT_00412f87)[iVar10] = bVar3 & 0xf;
          FUN_004080a4((uint)pbVar2);
          (&DAT_00412f85)[iVar10] = (&DAT_00412f85)[iVar10] + (&DAT_00412f86)[iVar10];
          if ('\x1f' < (char)(&DAT_00412f85)[iVar10]) {
            (&DAT_00412f85)[iVar10] = (&DAT_00412f85)[iVar10] + -0x40;
          }
        }
        else {
          if (bVar6 == 0xd) {
            (&DAT_00412f14)[local_18 * 0x2b] = (&DAT_00412f14)[local_18 * 0x2b] - (uVar14 & 0xf);
          }
          else {
            if (bVar6 != 0xe) {
              if (bVar6 == 0xf) {
                FUN_00407a48((int)pbVar2);
              }
              goto LAB_00406b78;
            }
            (&DAT_00412f14)[local_18 * 0x2b] = (&DAT_00412f14)[local_18 * 0x2b] + (uVar14 & 0xf);
          }
          (&DAT_00412f02)[iVar10] = (&DAT_00412f02)[iVar10] | 4;
        }
      }
LAB_00406b78:
      if (bVar8 < 8) {
        if (bVar8 == 7) {
          FUN_00407cfb((int)pbVar2);
        }
        else {
          if (bVar8 == 0) {
            if (*(char *)(iVar9 + 4) == '\0') goto LAB_00406f82;
            if (piVar7[0x4d] % 3 == 1) {
              param_1._3_1_ = bVar13;
              if ((*(byte *)((int)piVar7 + 0x22) & 1) == 0) {
                cVar4 = local_c[0x11];
LAB_00406cea:
                iVar11 = FUN_00407820((uint)(byte)(&DAT_00412f67)[iVar10] + (uint)bVar13,(int)cVar4)
                ;
                iVar12 = FUN_00407820((uint)(byte)(&DAT_00412f67)[iVar10],(int)(char)local_c[0x11]);
                (&DAT_00412f1c)[local_18 * 0x2b] = iVar11 - iVar12;
                goto LAB_00406d15;
              }
            }
            else {
              if (piVar7[0x4d] % 3 != 2) goto LAB_00406d15;
              if ((*(byte *)((int)piVar7 + 0x22) & 1) == 0) {
                cVar4 = local_c[0x11];
                bVar13 = param_1._3_1_;
                goto LAB_00406cea;
              }
            }
            (&DAT_00412f1c)[local_18 * 0x2b] = (uint)param_1._3_1_ << 6;
          }
          else if (bVar8 == 1) {
            (&DAT_00412f0c)[local_18 * 0x2b] =
                 (&DAT_00412f0c)[local_18 * 0x2b] + (uint)(byte)(&DAT_00412f79)[iVar10] * -4;
            (&DAT_00412f1c)[local_18 * 0x2b] = 0;
            if ((int)(&DAT_00412f0c)[local_18 * 0x2b] < 0x38) {
              (&DAT_00412f0c)[local_18 * 0x2b] = 0x38;
            }
          }
          else {
            if (bVar8 != 2) {
              if (bVar8 == 3) {
                (&DAT_00412f1c)[local_18 * 0x2b] = 0;
                FUN_00407a48((int)pbVar2);
              }
              else {
                if (bVar8 != 4) {
                  if (bVar8 == 5) {
                    (&DAT_00412f1c)[local_18 * 0x2b] = 0;
                    FUN_00407a48((int)pbVar2);
                  }
                  else {
                    if (bVar8 != 6) goto LAB_00406f82;
                    FUN_004080a4((uint)pbVar2);
                    (&DAT_00412f85)[iVar10] = (&DAT_00412f85)[iVar10] + (&DAT_00412f86)[iVar10];
                    if ('\x1f' < (char)(&DAT_00412f85)[iVar10]) {
                      (&DAT_00412f85)[iVar10] = (&DAT_00412f85)[iVar10] + -0x40;
                    }
                  }
                  bVar8 = (&DAT_00412f7c)[iVar10];
                  if (bVar8 >> 4 == 0) goto LAB_00406f6e;
                  (&DAT_00412f10)[local_18 * 0x2b] =
                       (&DAT_00412f10)[local_18 * 0x2b] + (uint)(bVar8 >> 4);
                  if (0x40 < (int)(&DAT_00412f10)[local_18 * 0x2b]) {
                    (&DAT_00412f10)[local_18 * 0x2b] = 0x40;
                  }
                  goto LAB_00406f7e;
                }
                FUN_004080a4((uint)pbVar2);
                (&DAT_00412f85)[iVar10] = (&DAT_00412f85)[iVar10] + (&DAT_00412f86)[iVar10];
                if ('\x1f' < (char)(&DAT_00412f85)[iVar10]) {
                  (&DAT_00412f85)[iVar10] = (&DAT_00412f85)[iVar10] + -0x40;
                }
              }
              goto LAB_00406f82;
            }
            (&DAT_00412f0c)[local_18 * 0x2b] =
                 (&DAT_00412f0c)[local_18 * 0x2b] + (uint)(byte)(&DAT_00412f78)[iVar10] * 4;
            (&DAT_00412f1c)[local_18 * 0x2b] = 0;
          }
LAB_00406d15:
          (&DAT_00412f02)[iVar10] = (&DAT_00412f02)[iVar10] | 1;
        }
        goto LAB_00406f82;
      }
      if (bVar8 == 10) {
        bVar8 = (&DAT_00412f7c)[iVar10];
        if (bVar8 >> 4 == 0) {
LAB_00406f6e:
          if ((bVar8 & 0xf) != 0) {
            piVar1 = &DAT_00412f10 + local_18 * 0x2b;
            *piVar1 = *piVar1 - (uint)(bVar8 & 0xf);
            if (*piVar1 < 0) {
LAB_00406f7a:
              (&DAT_00412f10)[local_18 * 0x2b] = 0;
            }
          }
        }
        else {
          (&DAT_00412f10)[local_18 * 0x2b] = (&DAT_00412f10)[local_18 * 0x2b] + (uint)(bVar8 >> 4);
          if (0x40 < (int)(&DAT_00412f10)[local_18 * 0x2b]) {
            (&DAT_00412f10)[local_18 * 0x2b] = 0x40;
          }
        }
LAB_00406f7e:
        (&DAT_00412f02)[iVar10] = (&DAT_00412f02)[iVar10] | 2;
        goto LAB_00406f82;
      }
      if (bVar8 == 0xe) {
        if (bVar13 == 9) {
          if ((param_1._3_1_ != 0) && (piVar7[0x4d] % (int)(uint)param_1._3_1_ == 0)) {
            (&DAT_00412f02)[iVar10] = (&DAT_00412f02)[iVar10] | 0xb;
          }
          goto LAB_00406f82;
        }
        if (bVar13 == 0xc) {
          if (piVar7[0x4d] == (uint)param_1._3_1_) goto LAB_00406f7a;
          goto LAB_00406f82;
        }
        if (bVar13 != 0xd) goto LAB_00406f82;
        if (piVar7[0x4d] != (uint)param_1._3_1_) {
          (&DAT_00412f02)[iVar10] = (&DAT_00412f02)[iVar10] & 0xf0;
          goto LAB_00406f82;
        }
        FUN_00407c7d((int)pbVar2,(int)local_c);
        uVar5 = (&DAT_00412f68)[local_18 * 0x2b];
        (&DAT_00412f02)[iVar10] = (&DAT_00412f02)[iVar10] | 1;
        (&DAT_00412f0c)[local_18 * 0x2b] = uVar5;
        bVar8 = (&DAT_00412f02)[iVar10];
        if (*(byte *)(iVar9 + 2) != 0) {
          FUN_00407b8d((int)pbVar2,*(byte *)(iVar9 + 2));
          goto LAB_00406e1f;
        }
        goto LAB_00406e22;
      }
      if (bVar8 == 0x11) {
        bVar8 = *(byte *)(piVar7 + 0x4c);
        if (bVar8 >> 4 == 0) {
          if ((bVar8 & 0xf) != 0) {
            piVar1 = piVar7 + 0x4b;
            *piVar1 = *piVar1 - (uint)(bVar8 & 0xf);
            if (*piVar1 < 0) {
              piVar7[0x4b] = 0;
            }
          }
        }
        else {
          piVar7[0x4b] = piVar7[0x4b] + (uint)(bVar8 >> 4);
          if (0x40 < piVar7[0x4b]) {
            piVar7[0x4b] = 0x40;
          }
        }
        goto LAB_00406f82;
      }
      if (bVar8 == 0x19) {
        bVar8 = (&DAT_00412f7d)[iVar10];
        if (bVar8 >> 4 == 0) {
          if ((bVar8 & 0xf) != 0) {
            piVar1 = &DAT_00412f14 + local_18 * 0x2b;
            *piVar1 = *piVar1 - (uint)(bVar8 & 0xf);
            if (*piVar1 < 0) {
              (&DAT_00412f14)[local_18 * 0x2b] = 0;
            }
          }
        }
        else {
          (&DAT_00412f14)[local_18 * 0x2b] = (&DAT_00412f14)[local_18 * 0x2b] + (uint)(bVar8 >> 4);
          if (0xff < (int)(&DAT_00412f14)[local_18 * 0x2b]) {
            (&DAT_00412f14)[local_18 * 0x2b] = 0xff;
          }
        }
        (&DAT_00412f02)[iVar10] = (&DAT_00412f02)[iVar10] | 4;
        goto LAB_00406f82;
      }
      if (bVar8 != 0x1b) {
        if (bVar8 == 0x1d) {
          FUN_00407dfe((int)pbVar2);
        }
        goto LAB_00406f82;
      }
      if (((&DAT_00412f7f)[iVar10] == 0) ||
         (piVar7[0x4d] % (int)(uint)(byte)(&DAT_00412f7f)[iVar10] != 0)) goto LAB_00406f82;
      if ((&DAT_00412f7e)[iVar10] == '\0') {
LAB_00406e1f:
        bVar8 = (&DAT_00412f02)[iVar10];
        goto LAB_00406e22;
      }
      switch((&DAT_00412f7e)[iVar10]) {
      case 1:
        (&DAT_00412f10)[local_18 * 0x2b] = (&DAT_00412f10)[local_18 * 0x2b] + -1;
        break;
      case 2:
        (&DAT_00412f10)[local_18 * 0x2b] = (&DAT_00412f10)[local_18 * 0x2b] + -2;
        break;
      case 3:
        (&DAT_00412f10)[local_18 * 0x2b] = (&DAT_00412f10)[local_18 * 0x2b] + -4;
        break;
      case 4:
        (&DAT_00412f10)[local_18 * 0x2b] = (&DAT_00412f10)[local_18 * 0x2b] + -8;
        break;
      case 5:
        (&DAT_00412f10)[local_18 * 0x2b] = (&DAT_00412f10)[local_18 * 0x2b] + -0x10;
        break;
      case 6:
        iVar11 = ((&DAT_00412f10)[local_18 * 0x2b] * 2) / 3;
        goto LAB_00406dcc;
      case 7:
        (&DAT_00412f10)[local_18 * 0x2b] = (int)(&DAT_00412f10)[local_18 * 0x2b] >> 1;
        break;
      case 9:
        (&DAT_00412f10)[local_18 * 0x2b] = (&DAT_00412f10)[local_18 * 0x2b] + 1;
        break;
      case 10:
        (&DAT_00412f10)[local_18 * 0x2b] = (&DAT_00412f10)[local_18 * 0x2b] + 2;
        break;
      case 0xb:
        (&DAT_00412f10)[local_18 * 0x2b] = (&DAT_00412f10)[local_18 * 0x2b] + 4;
        break;
      case 0xc:
        (&DAT_00412f10)[local_18 * 0x2b] = (&DAT_00412f10)[local_18 * 0x2b] + 8;
        break;
      case 0xd:
        (&DAT_00412f10)[local_18 * 0x2b] = (&DAT_00412f10)[local_18 * 0x2b] + 0x10;
        break;
      case 0xe:
        iVar11 = ((&DAT_00412f10)[local_18 * 0x2b] * 3) / 2;
LAB_00406dcc:
        (&DAT_00412f10)[local_18 * 0x2b] = iVar11;
        break;
      case 0xf:
        (&DAT_00412f10)[local_18 * 0x2b] = (&DAT_00412f10)[local_18 * 0x2b] << 1;
      }
      iVar11 = (&DAT_00412f10)[local_18 * 0x2b];
      if (0x40 < (int)(&DAT_00412f10)[local_18 * 0x2b]) {
        (&DAT_00412f10)[local_18 * 0x2b] = 0x40;
        iVar11 = 0x40;
      }
      if (iVar11 < 0) {
        (&DAT_00412f10)[local_18 * 0x2b] = 0;
      }
      bVar8 = (&DAT_00412f02)[iVar10] | 2;
LAB_00406e22:
      (&DAT_00412f02)[iVar10] = bVar8 | 8;
LAB_00406f82:
      FUN_0040792f((int)pbVar2,(int)local_14);
      FUN_00407e46((int)pbVar2,(int)local_c,piVar7);
      local_18 = local_18 + 1;
      iVar9 = iVar9 + 5;
    } while (local_18 < (short)piVar7[5]);
  }
  return;
}

