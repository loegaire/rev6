
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0040815e(float *param_1,uint param_2)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  short *psVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  float *pfVar24;
  float *pfVar25;
  bool bVar26;
  
  if (0 < (int)param_2) {
    DAT_0040d314 = param_1;
    DAT_0040d310 = param_2;
    DAT_0040d318 = param_1 + param_2 * 2;
    DAT_0040d35c = 0;
    do {
      puVar16 = &DAT_0040d6e0 + DAT_0040d35c * 0x16;
      DAT_0040d31c = DAT_0040d314;
      DAT_0040d328 = puVar16;
      DAT_0040d358 = puVar16;
      if ((puVar16 != (undefined4 *)0x0) &&
         (puVar18 = (uint *)(&DAT_0040d6fc)[DAT_0040d35c * 0x16], DAT_0040d324 = puVar18,
         puVar18 != (uint *)0x0)) {
        DAT_0040d330 = *puVar18;
        uVar19 = DAT_0040d310;
LAB_004081d9:
        do {
          puVar14 = DAT_0040d328;
          DAT_0040d320 = 0;
          if (puVar16[0xe] == 1) {
            uVar17 = puVar18[2] + puVar18[3];
            if ((int)uVar17 < (int)puVar16[10]) {
              uVar17 = puVar18[1];
            }
            uVar15 = -puVar16[0xb];
            uVar17 = (uVar17 - puVar16[10]) - (uint)(puVar16[0xb] != 0);
          }
          else {
            uVar15 = puVar16[0xb];
            uVar17 = puVar16[10] - puVar18[2];
          }
          DAT_0040d32c = uVar19;
          if (uVar17 < 0x1000000) {
            uVar23 = puVar16[0xc];
            if ((puVar16[0xd] == 0) && (uVar23 == 0)) {
              uVar23 = 0x17c6f8c;
            }
            uVar4 = (ulonglong)(puVar16[0xd] << 0x18 | uVar23 >> 8);
            uVar5 = CONCAT44(uVar17 >> 8,uVar15 >> 8 | uVar17 << 0x18);
            uVar15 = (uint)(uVar5 / uVar4);
            if ((int)(uVar5 % uVar4) != 0) {
              uVar15 = uVar15 + 1;
            }
            if (uVar15 <= uVar19) {
              DAT_0040d320 = 1;
              DAT_0040d32c = uVar15;
            }
          }
          DAT_0040d350 = 0.0;
          DAT_0040d354 = 0.0;
          DAT_0040d340 = DAT_0040d32c;
          DAT_0040d34c = 0;
          if (((DAT_0040d328[0x15] == 0) || (DAT_0040d328[8] != DAT_0040d328[0xf])) ||
             (DAT_0040d328[9] != DAT_0040d328[0x10])) {
            piVar1 = DAT_0040d328 + 8;
            puVar18 = DAT_0040d328 + 0x11;
            DAT_0040d328[0xf] = *piVar1;
            iVar21 = *piVar1 - (*puVar18 >> 8);
            if (iVar21 != 0) {
              DAT_0040d350 = (float)iVar21 * 0.003921569 * _DAT_0040d30c;
              puVar14[0x13] = DAT_0040d350;
              DAT_0040d34c = DAT_0040d308;
            }
            puVar14[0x10] = puVar14[9];
            iVar21 = puVar14[9] - ((uint)puVar14[0x12] >> 8);
            if (iVar21 != 0) {
              DAT_0040d354 = (float)iVar21 * 0.003921569 * _DAT_0040d30c;
              puVar14[0x14] = DAT_0040d354;
              DAT_0040d34c = DAT_0040d308;
            }
          }
          else {
            DAT_0040d34c = DAT_0040d328[0x15];
            DAT_0040d350 = (float)DAT_0040d328[0x13];
            DAT_0040d354 = (float)DAT_0040d328[0x14];
          }
          uVar19 = DAT_0040d34c;
          if ((0 < (int)DAT_0040d34c) && (puVar14[0x15] = DAT_0040d34c, uVar19 < DAT_0040d32c)) {
            DAT_0040d32c = uVar19;
          }
          _DAT_0040d338 = (float)(int)DAT_0040d328[9] * 0.003921569;
          _DAT_0040d334 = (float)(int)DAT_0040d328[8] * 0.003921569;
          DAT_0040d348 = (float)(int)DAT_0040d328[0x12] * 0.00390625 * 0.003921569;
          _DAT_0040d33c = DAT_0040d328[0x11];
          DAT_0040d344 = (float)(int)_DAT_0040d33c * 0.00390625 * 0.003921569;
          uVar19 = DAT_0040d328[0xc];
          uVar15 = DAT_0040d328[0xd];
          uVar17 = DAT_0040d328[0xb];
          if (DAT_0040d328[0xe] != 1) {
            uVar23 = uVar19 ^ 0xffffffff;
            uVar19 = uVar23 + 1;
            uVar15 = (uVar15 ^ 0xffffffff) + (uint)(0xfffffffe < uVar23);
          }
          iVar21 = DAT_0040d328[10] + (DAT_0040d330 >> 1);
          uVar23 = DAT_0040d32c;
          pfVar24 = DAT_0040d31c;
          if (DAT_0040d34c == 0) {
            uVar23 = DAT_0040d32c >> 1;
            if (uVar23 != 0) {
              iVar6 = iVar21 * 2;
              psVar7 = (short *)(iVar21 * 2);
              uVar20 = (uVar17 >> 1) * 2;
              iVar22 = iVar21 + uVar15 + (uint)CARRY4(uVar20,uVar19);
              _DAT_0040d33c = uVar20 + uVar19 >> 1;
              uVar20 = _DAT_0040d33c * 2;
              iVar21 = iVar22 + uVar15 + (uint)CARRY4(uVar20,uVar19);
              fVar8 = ((float)*(short *)(iVar6 + 2) - (float)*psVar7) *
                      (float)(uVar17 >> 1) * 4.656613e-10 + (float)*psVar7;
              fVar9 = fVar8 * _DAT_0040d334;
              fVar11 = ((float)*(short *)(iVar22 * 2 + 2) - (float)*(short *)(iVar22 * 2)) *
                       (float)_DAT_0040d33c * 4.656613e-10 + (float)*(short *)(iVar22 * 2);
              pfVar25 = DAT_0040d31c;
              while( true ) {
                pfVar24 = pfVar25 + 4;
                uVar17 = uVar20 + uVar19;
                fVar12 = fVar11 * _DAT_0040d338;
                fVar10 = fVar8 * _DAT_0040d338 + pfVar25[1];
                fVar11 = fVar11 * _DAT_0040d334 + pfVar25[2];
                *pfVar25 = fVar9 + *pfVar25;
                fVar12 = fVar12 + pfVar25[3];
                uVar23 = uVar23 - 1;
                if (uVar23 == 0) break;
                iVar6 = iVar21 * 2;
                psVar7 = (short *)(iVar21 * 2);
                uVar20 = (uVar17 >> 1) * 2;
                iVar21 = iVar21 + uVar15 + (uint)CARRY4(uVar20,uVar19);
                _DAT_0040d33c = uVar20 + uVar19 >> 1;
                fVar13 = (float)_DAT_0040d33c;
                sVar2 = *(short *)(iVar21 * 2 + 2);
                uVar20 = _DAT_0040d33c * 2;
                sVar3 = *(short *)(iVar21 * 2);
                iVar21 = iVar21 + uVar15 + (uint)CARRY4(uVar20,uVar19);
                fVar8 = (float)*psVar7 +
                        ((float)*(short *)(iVar6 + 2) - (float)*psVar7) *
                        (float)(uVar17 >> 1) * 4.656613e-10;
                pfVar25[1] = fVar10;
                pfVar25[2] = fVar11;
                fVar9 = fVar8 * _DAT_0040d334;
                fVar11 = ((float)sVar2 - (float)sVar3) * fVar13 * 4.656613e-10 + (float)sVar3;
                pfVar25[3] = fVar12;
                pfVar25 = pfVar24;
              }
              pfVar25[1] = fVar10;
              pfVar25[2] = fVar11;
              pfVar25[3] = fVar12;
            }
            uVar23 = DAT_0040d32c & 1;
          }
          pfVar25 = pfVar24;
          if (uVar23 != 0) {
            do {
              _DAT_0040d33c = uVar17 >> 1;
              pfVar25 = pfVar24 + 2;
              iVar6 = iVar21 * 2;
              psVar7 = (short *)(iVar21 * 2);
              uVar17 = _DAT_0040d33c * 2 + uVar19;
              iVar21 = iVar21 + uVar15 + (uint)CARRY4(_DAT_0040d33c * 2,uVar19);
              fVar9 = (float)*psVar7 +
                      ((float)*(short *)(iVar6 + 2) - (float)*psVar7) *
                      (float)_DAT_0040d33c * 4.656613e-10;
              fVar8 = fVar9 * DAT_0040d344;
              DAT_0040d344 = DAT_0040d344 + DAT_0040d350;
              fVar9 = fVar9 * DAT_0040d348;
              DAT_0040d348 = DAT_0040d348 + DAT_0040d354;
              *pfVar24 = fVar8 + *pfVar24;
              pfVar24[1] = fVar9 + pfVar24[1];
              uVar23 = uVar23 - 1;
              pfVar24 = pfVar25;
            } while (uVar23 != 0);
            DAT_0040d344 = (float)(int)ROUND(DAT_0040d344 * 255.0 * 256.0);
            DAT_0040d348 = (float)(int)ROUND(DAT_0040d348 * 255.0 * 256.0);
          }
          puVar16 = DAT_0040d328;
          puVar18 = DAT_0040d324;
          uVar15 = iVar21 - (DAT_0040d330 >> 1);
          if (DAT_0040d34c != 0) {
            DAT_0040d328[0x11] = DAT_0040d344;
            puVar16[0x12] = DAT_0040d348;
            uVar19 = DAT_0040d32c;
            uVar23 = DAT_0040d34c - DAT_0040d32c;
            DAT_0040d350 = 0.0;
            DAT_0040d354 = 0.0;
            DAT_0040d34c = uVar23;
            puVar16[0x15] = uVar23;
            if (uVar23 == 0) {
              puVar16[0x13] = 0;
              puVar16[0x14] = 0;
              puVar16[0x11] = puVar16[8] << 8;
              puVar16[0x12] = puVar16[9] << 8;
              if (DAT_0040d340 != uVar19) {
                puVar16[10] = uVar15;
                puVar16[0xb] = uVar17;
                uVar19 = (uint)((int)DAT_0040d318 - (int)pfVar25) >> 3;
                DAT_0040d31c = pfVar25;
                if (uVar19 != 0) goto LAB_004081d9;
              }
            }
          }
          puVar16 = DAT_0040d328;
          puVar18 = DAT_0040d324;
          if (DAT_0040d320 == 0) break;
          if ((*(byte *)((int)DAT_0040d324 + 0x1d) & 2) == 0) {
            if ((*(byte *)((int)DAT_0040d324 + 0x1d) & 4) == 0) {
              uVar17 = 0;
              uVar15 = 0;
              DAT_0040d328[7] = 0;
              break;
            }
            if (DAT_0040d328[0xe] == 1) goto LAB_0040877d;
            do {
              uVar17 = -uVar17 - 1;
              uVar15 = ((puVar18[2] - 1) - uVar15) + puVar18[2];
              puVar16[0xe] = 1;
              if ((int)uVar15 < (int)(puVar18[2] + puVar18[3])) break;
LAB_0040877d:
              bVar26 = uVar17 != 0;
              iVar21 = -uVar17;
              uVar17 = iVar21 - 1;
              uVar15 = (((puVar18[2] + puVar18[3]) - uVar15) - (uint)bVar26) +
                       puVar18[2] + puVar18[3] + -1 + (uint)(iVar21 != 0);
              puVar16[0xe] = 2;
            } while ((int)uVar15 < (int)puVar18[2]);
            puVar16[10] = uVar15;
            puVar16[0xb] = uVar17;
            uVar19 = (uint)((int)DAT_0040d318 - (int)pfVar25) >> 3;
            DAT_0040d31c = pfVar25;
            if (uVar19 == 0) break;
            goto LAB_004081d9;
          }
          do {
            uVar15 = uVar15 - DAT_0040d324[3];
          } while (DAT_0040d324[2] + DAT_0040d324[3] <= uVar15);
          DAT_0040d328[10] = uVar15;
          puVar16[0xb] = uVar17;
          uVar19 = (uint)((int)DAT_0040d318 - (int)pfVar25) >> 3;
          DAT_0040d31c = pfVar25;
        } while (uVar19 != 0);
        puVar16 = DAT_0040d328;
        DAT_0040d328[0xb] = uVar17;
        puVar16[10] = uVar15;
      }
      DAT_0040d35c = DAT_0040d35c + 1;
    } while (DAT_0040d35c < 0x40);
  }
  return;
}

