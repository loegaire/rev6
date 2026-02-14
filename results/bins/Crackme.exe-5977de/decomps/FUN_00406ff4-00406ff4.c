
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00406ff4(int *param_1)

{
  int *piVar1;
  byte *pbVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  ushort *puVar12;
  uint uVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  byte bVar17;
  byte bVar18;
  char *pcVar19;
  int local_14;
  undefined *local_10;
  undefined *local_c;
  
  bVar8 = false;
  param_1[0x54] = -1;
  param_1[0x53] = -1;
  pcVar19 = (char *)(param_1[0x50] * (int)(short)param_1[5] * 5 +
                    *(int *)(*param_1 + 4 + (uint)*(byte *)(param_1[0x51] + 0x28 + (int)param_1) * 8
                            ));
  if ((pcVar19 != (char *)0x0) && (local_14 = 0, 0 < (short)param_1[5])) {
    do {
      iVar10 = local_14 * 0xac;
      uVar11 = (uint)CONCAT11((byte)pcVar19[4] >> 4,pcVar19[4]);
      uVar13 = uVar11 & 0xffffff0f;
      pbVar2 = &DAT_00412f00 + iVar10;
      if ((pcVar19[3] == '\x03') || (pcVar19[3] == '\x05')) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      if ((pcVar19[1] != '\0') && (!bVar7)) {
        (&DAT_00412f66)[iVar10] = pcVar19[1] + -1;
      }
      cVar9 = *pcVar19;
      if (((cVar9 != '\0') && (cVar9 != -1)) && (!bVar7)) {
        *pbVar2 = cVar9 - 1;
      }
      if ((int)(uint)(byte)(&DAT_00412f66)[iVar10] < (int)(short)param_1[8]) {
        local_c = (undefined *)((uint)(byte)(&DAT_00412f66)[iVar10] * 0x154 + param_1[1]);
        if ((byte)local_c[*pbVar2 + 0x44] < 0x10) {
          local_10 = *(undefined **)(local_c + (uint)(byte)local_c[*pbVar2 + 0x44] * 4 + 4);
        }
        else {
          local_10 = &DAT_004145e0;
        }
        if (!bVar7) {
          *(undefined **)(&DAT_00412f08 + iVar10) = local_10;
        }
      }
      else {
        _DAT_004145e0 = 0;
        local_c = &DAT_00414480;
        local_10 = &DAT_004145e0;
      }
      uVar5 = (&DAT_00412f0c)[local_14 * 0x2b];
      iVar16 = (&DAT_00412f10)[local_14 * 0x2b];
      uVar6 = (&DAT_00412f14)[local_14 * 0x2b];
      if (((&DAT_00412f6c)[iVar10] == '\a') && (pcVar19[3] != '\a')) {
        (&DAT_00412f10)[local_14 * 0x2b] = (&DAT_00412f18)[local_14 * 0x2b] + iVar16;
      }
      cVar9 = pcVar19[3];
      (&DAT_00412f18)[local_14 * 0x2b] = 0;
      (&DAT_00412f6c)[iVar10] = cVar9;
      (&DAT_00412f02)[iVar10] = 0;
      cVar9 = *pcVar19;
      bVar14 = 0;
      if ((cVar9 != '\0') && (cVar9 != -1)) {
        bVar14 = local_10[0x1f] + -1 + cVar9;
        (&DAT_00412f67)[iVar10] = bVar14;
        if ((*(byte *)((int)param_1 + 0x22) & 1) == 0) {
          iVar15 = FUN_00407820((uint)bVar14,(int)(char)local_10[0x11]);
        }
        else {
          iVar15 = ((uint)bVar14 * -0x40 - (int)(char)local_10[0x11] / 2) + 0x1e00;
        }
        (&DAT_00412f68)[local_14 * 0x2b] = iVar15;
        if (!bVar7) {
          (&DAT_00412f0c)[local_14 * 0x2b] = iVar15;
        }
        bVar14 = 8;
      }
      (&DAT_00412f1c)[local_14 * 0x2b] = 0;
      (&DAT_00412f02)[iVar10] = bVar14 | 3;
      if (pcVar19[1] != '\0') {
        FUN_00407c7d((int)pbVar2,(int)local_10);
      }
      if (pcVar19[2] != 0) {
        FUN_00407b8d((int)pbVar2,pcVar19[2]);
      }
      if ((*pcVar19 == -1) || (pcVar19[3] == '\x14')) {
        (&DAT_00412f65)[iVar10] = 1;
        cVar9 = '\x01';
      }
      else {
        cVar9 = (&DAT_00412f65)[iVar10];
      }
      if ((local_c[0x14c] & 1) == 0) {
        if (cVar9 != '\0') {
          (&DAT_00412f34)[local_14 * 0x2b] = 0;
        }
      }
      else if ((&DAT_00412f3c)[iVar10] == '\0') {
        FUN_00407a8f((int)pbVar2,&DAT_00412f2c + local_14 * 0x2b,&DAT_00412f28 + local_14 * 0x2b,
                     local_c[0x14c],(uint)(byte)local_c[0x144],(int)(local_c + 0xa4),local_c[0x148],
                     local_c[0x147],local_c[0x146],&DAT_00412f34 + local_14 * 0x2b,
                     &DAT_00412f30 + local_14 * 0x2b,&DAT_00412f3c + iVar10,
                     &DAT_00412f38 + local_14 * 0x2b,2);
      }
      if (((local_c[0x14d] & 1) != 0) && ((&DAT_00412f54)[iVar10] == '\0')) {
        FUN_00407a8f((int)pbVar2,(uint *)(&DAT_00412f44 + iVar10),(uint *)(&DAT_00412f40 + iVar10),
                     local_c[0x14d],(uint)(byte)local_c[0x145],(int)(local_c + 0xf4),local_c[0x14b],
                     local_c[0x14a],local_c[0x149],(uint *)(&DAT_00412f4c + iVar10),
                     (int *)(&DAT_00412f48 + iVar10),&DAT_00412f54 + iVar10,
                     (int *)(&DAT_00412f50 + iVar10),4);
      }
      if ((&DAT_00412f65)[iVar10] != '\0') {
        piVar1 = &DAT_00412f58 + local_14 * 0x2b;
        *piVar1 = *piVar1 - (uint)*(ushort *)(local_c + 0x152);
        if (*piVar1 < 0) {
          (&DAT_00412f58)[local_14 * 0x2b] = 0;
        }
        (&DAT_00412f02)[iVar10] = (&DAT_00412f02)[iVar10] | 2;
      }
      bVar14 = pcVar19[3];
      bVar18 = (byte)(uVar13 >> 8);
      bVar17 = (byte)uVar13;
      if (0x15 < bVar14) {
        if (bVar14 == 0x19) {
          if (pcVar19[4] != '\0') {
            (&DAT_00412f7d)[iVar10] = pcVar19[4];
            goto LAB_00407767;
          }
        }
        else if (bVar14 == 0x1b) {
          if (pcVar19[4] != '\0') {
            (&DAT_00412f7e)[iVar10] = bVar18;
            (&DAT_00412f7f)[iVar10] = bVar17;
          }
        }
        else if (bVar14 == 0x1d) {
          if (pcVar19[4] != '\0') {
            (&DAT_00412f93)[iVar10] = bVar18 + 1;
            (&DAT_00412f94)[iVar10] = bVar17 + 1;
          }
          FUN_00407dfe((int)pbVar2);
        }
        else if (bVar14 == 0x21) {
          if (bVar18 == 1) {
            if (bVar17 == 0) {
              uVar13 = (uint)(byte)(&DAT_00412f7b)[iVar10];
            }
            else {
              (&DAT_00412f7b)[iVar10] = bVar17;
            }
            uVar13 = uVar13 & 0xff;
            goto LAB_0040748a;
          }
          if (bVar18 == 2) {
            if (bVar17 == 0) {
              uVar13 = (uint)(byte)(&DAT_00412f7a)[iVar10];
            }
            else {
              (&DAT_00412f7a)[iVar10] = bVar17;
            }
            uVar13 = uVar13 & 0xff;
            goto LAB_004074aa;
          }
        }
        goto switchD_004072bf_default;
      }
      if (bVar14 == 0x15) {
        if ((local_c[0x14c] & 1) != 0) {
          puVar12 = (ushort *)(local_c + 0xa8);
          iVar16 = 0;
          if (*puVar12 < (ushort)(byte)pcVar19[4]) {
            do {
              if ((int)(uint)(byte)local_c[0x144] <= iVar16) break;
              puVar12 = puVar12 + 2;
              iVar16 = iVar16 + 1;
            } while (*puVar12 < (ushort)(byte)pcVar19[4]);
          }
          (&DAT_00412f2c)[local_14 * 0x2b] = iVar16;
          if (iVar16 < (int)((byte)local_c[0x144] - 1)) {
            (&DAT_00412f3c)[iVar10] = 0;
            (&DAT_00412f28)[local_14 * 0x2b] = (uint)(byte)pcVar19[4];
            uVar3 = *(ushort *)(local_c + iVar16 * 4 + 0xa4);
            uVar4 = *(ushort *)(local_c + iVar16 * 4 + 0xa6);
            iVar10 = (uint)*(ushort *)(local_c + iVar16 * 4 + 0xa8) - (uint)uVar3;
            if (iVar10 == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = (int)((uint)*(ushort *)(local_c + iVar16 * 4 + 0xaa) * 0x10000 +
                            (uint)uVar4 * -0x10000) / iVar10;
            }
            (&DAT_00412f38)[local_14 * 0x2b] = iVar10;
            iVar10 = ((&DAT_00412f28)[local_14 * 0x2b] - (uint)uVar3) * iVar10 +
                     (uint)uVar4 * 0x10000;
            (&DAT_00412f30)[local_14 * 0x2b] = iVar10;
            (&DAT_00412f2c)[local_14 * 0x2b] = (&DAT_00412f2c)[local_14 * 0x2b] + 1;
            (&DAT_00412f34)[local_14 * 0x2b] = iVar10 >> 0x10;
          }
          else {
            (&DAT_00412f34)[local_14 * 0x2b] =
                 (uint)*(ushort *)(local_c + (uint)(byte)local_c[0x144] * 4 + 0xa2);
            (&DAT_00412f3c)[iVar10] = 1;
          }
        }
        goto switchD_004072bf_default;
      }
      switch(bVar14) {
      case 1:
        if (pcVar19[4] != '\0') {
          (&DAT_00412f79)[iVar10] = pcVar19[4];
        }
        break;
      case 2:
        if (pcVar19[4] != '\0') {
          (&DAT_00412f78)[iVar10] = pcVar19[4];
        }
        break;
      case 3:
        if (pcVar19[4] != '\0') {
          (&DAT_00412f84)[iVar10] = pcVar19[4];
        }
        (&DAT_00412f80)[local_14 * 0x2b] = (&DAT_00412f68)[local_14 * 0x2b];
        goto LAB_00407308;
      case 4:
        if (bVar18 != 0) {
          (&DAT_00412f86)[iVar10] = bVar18;
        }
        if (bVar17 != 0) {
          (&DAT_00412f87)[iVar10] = bVar17;
        }
        goto LAB_0040733a;
      case 5:
        (&DAT_00412f80)[local_14 * 0x2b] = (&DAT_00412f68)[local_14 * 0x2b];
        if (pcVar19[4] != '\0') {
          (&DAT_00412f7c)[iVar10] = pcVar19[4];
        }
LAB_00407308:
        (&DAT_00412f02)[iVar10] = (&DAT_00412f02)[iVar10] & 0xf6;
      default:
switchD_004072bf_default:
        break;
      case 6:
        if (pcVar19[4] != '\0') {
          (&DAT_00412f7c)[iVar10] = pcVar19[4];
        }
LAB_0040733a:
        FUN_004080a4((uint)pbVar2);
        goto switchD_004072bf_default;
      case 7:
        if (bVar18 != 0) {
          (&DAT_00412f8a)[iVar10] = bVar18;
        }
        if (bVar17 != 0) {
          (&DAT_00412f8b)[iVar10] = bVar17;
        }
        goto switchD_004072bf_default;
      case 8:
        uVar11 = (uint)(byte)pcVar19[4];
LAB_00407373:
        (&DAT_00412f14)[local_14 * 0x2b] = uVar11;
LAB_00407767:
        (&DAT_00412f02)[iVar10] = (&DAT_00412f02)[iVar10] | 4;
        goto switchD_004072bf_default;
      case 9:
        if (pcVar19[4] != 0) {
          (&DAT_00412f70)[local_14 * 0x2b] = (uint)(byte)pcVar19[4];
        }
        if ((&DAT_00412f04)[local_14 * 0x2b] == 0) goto switchD_004072bf_default;
        if ((uint)((&DAT_00412f70)[local_14 * 0x2b] << 8) <
            (uint)(*(int *)(local_10 + 0xc) + *(int *)(local_10 + 8))) {
          *(undefined4 *)((&DAT_00412f04)[local_14 * 0x2b] + 0x18) =
               (&DAT_00412f70)[local_14 * 0x2b] << 8;
        }
        else {
          (&DAT_00412f02)[iVar10] = (&DAT_00412f02)[iVar10] & 0xf7 | 0x20;
        }
        break;
      case 10:
        if (pcVar19[4] != '\0') {
          (&DAT_00412f7c)[iVar10] = pcVar19[4];
        }
        break;
      case 0xb:
        uVar11 = (uint)(byte)pcVar19[4];
        bVar8 = true;
        param_1[0x53] = 0;
        if ((int)(short)param_1[4] <= (int)uVar11) {
          uVar11 = 0;
        }
        param_1[0x54] = uVar11;
        break;
      case 0xc:
        uVar11 = (uint)(byte)pcVar19[4];
LAB_00407402:
        (&DAT_00412f10)[local_14 * 0x2b] = uVar11;
        goto LAB_00407405;
      case 0xd:
        uVar11 = (uint)bVar18 * 10 + (uVar11 & 0xf);
        if (0x3f < uVar11) {
          uVar11 = 0;
        }
        param_1[0x53] = uVar11;
        if (bVar8) {
          iVar10 = param_1[0x54];
        }
        else {
          iVar10 = param_1[0x51] + 1;
          param_1[0x54] = iVar10;
        }
        if ((short)param_1[4] <= iVar10) {
          param_1[0x54] = 0;
        }
        break;
      case 0xe:
        switch(bVar18) {
        case 1:
          if (bVar17 == 0) {
            uVar13 = (uint)(byte)(&DAT_00412fa8)[iVar10];
          }
          else {
            (&DAT_00412fa8)[iVar10] = bVar17;
          }
          uVar13 = (uVar13 & 0xff) << 2;
LAB_0040748a:
          (&DAT_00412f0c)[local_14 * 0x2b] = (&DAT_00412f0c)[local_14 * 0x2b] - uVar13;
          break;
        case 2:
          if (bVar17 == 0) {
            uVar13 = (uint)(byte)(&DAT_00412fa9)[iVar10];
          }
          else {
            (&DAT_00412fa9)[iVar10] = bVar17;
          }
          uVar13 = (uVar13 & 0xff) << 2;
LAB_004074aa:
          (&DAT_00412f0c)[local_14 * 0x2b] = (&DAT_00412f0c)[local_14 * 0x2b] + uVar13;
          break;
        case 4:
          (&DAT_00412fa2)[iVar10] = (&DAT_00412fa2)[iVar10] & 0xf0 | bVar17;
          break;
        case 5:
          local_10[0x11] = bVar17;
          break;
        case 6:
          if (bVar17 == 0) {
            (&DAT_00412f98)[local_14 * 0x2b] = param_1[0x50];
          }
          else {
            if ((&DAT_00412f9c)[local_14 * 0x2b] == 0) {
              uVar11 = uVar11 & 0xf;
            }
            else {
              uVar11 = (&DAT_00412f9c)[local_14 * 0x2b] - 1;
            }
            (&DAT_00412f9c)[local_14 * 0x2b] = uVar11;
            if (uVar11 != 0) {
              param_1[0x53] = (&DAT_00412f98)[local_14 * 0x2b];
            }
          }
          goto LAB_0040776e;
        case 7:
          (&DAT_00412fa2)[iVar10] = bVar17 << 4 | (&DAT_00412fa2)[iVar10] & 0xf;
          break;
        case 8:
          uVar11 = (uVar11 & 0xf) << 4;
          goto LAB_00407373;
        case 10:
          if (bVar17 == 0) {
            uVar13 = (uint)(byte)(&DAT_00412fa7)[iVar10];
          }
          else {
            (&DAT_00412fa7)[iVar10] = bVar17;
          }
          (&DAT_00412f10)[local_14 * 0x2b] = (&DAT_00412f10)[local_14 * 0x2b] + (uVar13 & 0xff);
          uVar11 = 0x40;
          if (0x40 < (int)(&DAT_00412f10)[local_14 * 0x2b]) goto LAB_00407402;
          goto LAB_00407405;
        case 0xb:
          if (bVar17 == 0) {
            uVar13 = (uint)(byte)(&DAT_00412fa7)[iVar10];
          }
          else {
            (&DAT_00412fa7)[iVar10] = bVar17;
          }
          piVar1 = &DAT_00412f10 + local_14 * 0x2b;
          *piVar1 = *piVar1 - (uVar13 & 0xff);
          if (*piVar1 < 0) {
            (&DAT_00412f10)[local_14 * 0x2b] = 0;
          }
LAB_00407405:
          (&DAT_00412f02)[iVar10] = (&DAT_00412f02)[iVar10] | 2;
          break;
        case 0xd:
          (&DAT_00412f02)[iVar10] = (&DAT_00412f02)[iVar10] & 0xf0;
          (&DAT_00412f10)[local_14 * 0x2b] = iVar16;
          (&DAT_00412f0c)[local_14 * 0x2b] = uVar5;
          (&DAT_00412f14)[local_14 * 0x2b] = uVar6;
          break;
        case 0xe:
          param_1[0x52] = param_1[0x4e] * (uVar11 & 0xf);
          goto LAB_0040776e;
        }
        goto switchD_004072bf_default;
      case 0xf:
        bVar14 = pcVar19[4];
        if (bVar14 < 0x20) {
          param_1[0x4e] = (uint)bVar14;
        }
        else {
          FUN_00405eef((int)param_1,(uint)bVar14);
        }
        break;
      case 0x10:
        uVar11 = (uint)(byte)pcVar19[4];
        if (0x40 < (byte)pcVar19[4]) {
          uVar11 = 0x40;
        }
        param_1[0x4b] = uVar11;
        (&DAT_00412f02)[iVar10] = (&DAT_00412f02)[iVar10] | 2;
        break;
      case 0x11:
        if (pcVar19[4] != '\0') {
          *(char *)(param_1 + 0x4c) = pcVar19[4];
        }
      }
LAB_0040776e:
      FUN_0040792f((int)pbVar2,(int)local_c);
      FUN_00407e46((int)pbVar2,(int)local_10,param_1);
      pcVar19 = pcVar19 + 5;
      local_14 = local_14 + 1;
    } while (local_14 < (short)param_1[5]);
  }
  return;
}

