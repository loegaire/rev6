
uint __cdecl FUN_0040622b(int *param_1,int param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  void *pvVar5;
  undefined2 extraout_var;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  short *psVar10;
  int iVar11;
  byte *pbVar12;
  uint *puVar13;
  short sVar14;
  uint *puVar15;
  byte *pbVar16;
  undefined4 uVar17;
  char local_140 [256];
  undefined1 local_40 [4];
  int local_3c;
  int local_38;
  int *local_34;
  int local_30;
  uint local_2c;
  int local_28;
  uint *local_24;
  code *local_20;
  code *local_1c;
  uint local_18;
  uint *local_14;
  uint *local_10;
  ushort local_c [3];
  byte local_6;
  byte local_5;
  
  local_2c = 0;
  FUN_00405a45(param_2,0,0);
  uVar4 = FUN_00405a25(local_140,0x11,param_2);
  iVar7 = 0;
  do {
    uVar4 = CONCAT31((int3)(uVar4 >> 8),local_140[iVar7]);
    if (local_140[iVar7] != "AExtended Module: "[iVar7 + 1]) goto LAB_00406882;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x11);
  param_1[0x56] = (int)FUN_00406889;
  *(undefined1 *)(param_1 + 0x4a) = 0x40;
  FUN_00405a45(param_2,0x3c,0);
  FUN_00405a25(&local_3c,4,param_2);
  FUN_00405a25(param_1 + 4,6,param_2);
  FUN_00405a25(&local_2c,2,param_2);
  local_34 = param_1 + 8;
  FUN_00405a25(local_34,0x108,param_2);
  FUN_00405a45(param_2,local_3c + 0x3c,0);
  iVar11 = (int)(short)param_1[4];
  param_1[6] = 0;
  iVar7 = 0;
  uVar4 = 0;
  if (0 < iVar11) {
    uVar4 = 0;
    do {
      uVar8 = (uint)*(byte *)((int)param_1 + iVar7 + 0x28);
      if (uVar4 <= uVar8) {
        uVar4 = uVar8 + 1;
        param_1[6] = uVar4;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar11);
  }
  if (uVar4 <= (local_2c & 0xffff)) {
    uVar4 = local_2c & 0xffff;
  }
  param_1[7] = uVar4;
  local_20 = calloc_exref;
  pvVar5 = calloc(uVar4 << 3,1);
  *param_1 = (int)pvVar5;
  local_10 = (uint *)0x0;
  if ((short)local_2c != 0) {
    do {
      puVar15 = local_10;
      local_1c = (code *)*param_1;
      local_6 = 0;
      FUN_00405a25(&local_38,4,param_2);
      FUN_00405a25(&local_6,1,param_2);
      FUN_00405a25(local_c,2,param_2);
      *(uint *)((int)local_1c + (int)puVar15 * 8) = (uint)local_c[0];
      FUN_00405a25(&local_28,2,param_2);
      local_14 = (uint *)(*local_20)((int)(short)param_1[5] *
                                     *(int *)((int)local_1c + (int)puVar15 * 8) * 5,1);
      *(uint **)((int)local_1c + 4 + (int)puVar15 * 8) = local_14;
      if (((short)local_28 != 0) &&
         (local_18 = 0, 0 < (int)(short)param_1[5] * *(int *)((int)local_1c + (int)puVar15 * 8))) {
        pbVar12 = (byte *)((int)local_14 + 1);
        do {
          FUN_00405a25(&local_5,1,param_2);
          if ((char)local_5 < '\0') {
            if ((local_5 & 1) != 0) {
              FUN_00405a25(local_14,1,param_2);
            }
            if ((local_5 & 2) != 0) {
              FUN_00405a25(pbVar12,1,param_2);
            }
            if ((local_5 & 4) != 0) {
              FUN_00405a25(pbVar12 + 1,1,param_2);
            }
            if ((local_5 & 8) != 0) {
              FUN_00405a25(pbVar12 + 2,1,param_2);
            }
            if ((local_5 & 0x10) != 0) {
              uVar17 = 1;
              pbVar16 = pbVar12 + 3;
              goto LAB_00406443;
            }
          }
          else {
            if (local_5 != 0) {
              *(byte *)local_14 = local_5;
            }
            uVar17 = 4;
            pbVar16 = pbVar12;
LAB_00406443:
            FUN_00405a25(pbVar16,uVar17,param_2);
          }
          if ((byte)*local_14 == 0x61) {
            *(byte *)local_14 = 0xff;
          }
          if (0x80 < *pbVar12) {
            *pbVar12 = 0;
          }
          local_14 = (uint *)((int)local_14 + 5);
          pbVar12 = pbVar12 + 5;
          local_18 = local_18 + 1;
          puVar15 = local_10;
        } while ((int)local_18 <
                 (int)(short)param_1[5] * *(int *)((int)local_1c + (int)local_10 * 8));
      }
      local_10 = (uint *)((int)puVar15 + 1);
    } while ((int)local_10 < (int)(local_2c & 0xffff));
  }
  uVar4 = local_2c & 0xffff;
  if ((int)uVar4 < param_1[6]) {
    do {
      iVar7 = *param_1;
      *(undefined4 *)(iVar7 + uVar4 * 8) = 0x40;
      uVar17 = (*local_20)((short)param_1[5] * 0x140,1);
      *(undefined4 *)(iVar7 + 4 + uVar4 * 8) = uVar17;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < param_1[6]);
  }
  piVar6 = local_34;
  iVar7 = (*local_20)((short)*local_34 * 0x154,1);
  local_28 = 0;
  param_1[1] = iVar7;
  iVar7 = 0;
  if (0 < (short)*piVar6) {
    local_30 = 0;
    local_1c = free_exref;
    do {
      puVar15 = (uint *)(param_1[1] + local_30);
      local_14 = puVar15;
      iVar7 = FUN_00405ab6(param_2);
      FUN_00405a25(&local_38,4,param_2);
      puVar13 = (uint *)(iVar7 + local_38);
      local_24 = puVar13;
      FUN_00405a45(param_2,0x17,1);
      FUN_00405a25(local_c,2,param_2);
      uVar4 = CONCAT22(extraout_var,local_c[0]);
      iVar7 = 0x10;
      if (0x10 < local_c[0]) {
LAB_00406882:
        return uVar4 & 0xffffff00;
      }
      *puVar15 = (uint)local_c[0];
      if (local_c[0] == 0) {
        for (; puVar15 = puVar15 + 1, iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar15 = (uint)&DAT_004145e0;
        }
        FUN_00405a45(param_2,puVar13,0);
      }
      else {
        local_5 = 0;
        FUN_00405a25(local_40,4,param_2);
        FUN_00405a25(puVar15 + 0x11,0x60,param_2);
        FUN_00405a25(puVar15 + 0x29,0x30,param_2);
        FUN_00405a25(puVar15 + 0x3d,0x30,param_2);
        FUN_00405a25(puVar15 + 0x51,0x10,param_2);
        *(short *)((int)puVar15 + 0x152) = *(short *)((int)puVar15 + 0x152) << 1;
        if ((byte)puVar15[0x51] < 2) {
          *(undefined1 *)(puVar15 + 0x53) = 0;
        }
        if (*(byte *)((int)puVar15 + 0x145) < 2) {
          *(undefined1 *)((int)puVar15 + 0x14d) = 0;
        }
        FUN_00405a45(param_2,local_24,0);
        uVar4 = 0;
        if (local_c[0] == 0) {
LAB_004066fc:
          puVar15 = puVar15 + uVar4;
          for (iVar7 = 0x10 - uVar4; puVar15 = puVar15 + 1, puVar13 = local_14, iVar7 != 0;
              iVar7 = iVar7 + -1) {
            *puVar15 = (uint)&DAT_004145e0;
          }
        }
        else {
          local_10 = puVar15 + 1;
          uVar4 = 0;
          do {
            piVar6 = (int *)(*local_20)(0x30,1);
            *local_10 = (uint)piVar6;
            FUN_00405a25(piVar6 + 1,0xe,param_2);
            *(undefined2 *)(piVar6 + 7) = 0x108;
            FUN_00405a25(&local_6,1,param_2);
            bVar2 = *(byte *)((int)piVar6 + 0x1d);
            if ((local_6 & 1) != 0) {
              bVar2 = bVar2 & 0xfe | 2;
              *(byte *)((int)piVar6 + 0x1d) = bVar2;
            }
            if ((local_6 & 2) != 0) {
              bVar2 = bVar2 & 0xfc | 4;
              *(byte *)((int)piVar6 + 0x1d) = bVar2;
            }
            if ((local_6 & 0x10) != 0) {
              *(undefined1 *)(piVar6 + 7) = 0x10;
            }
            uVar8 = piVar6[1];
            if ((bVar2 & 1) != 0) {
              piVar6[2] = 0;
              piVar6[3] = uVar8;
            }
            uVar9 = piVar6[3];
            if ((char)piVar6[7] == '\x10') {
              piVar6[2] = (uint)piVar6[2] >> 1;
              uVar8 = uVar8 >> 1;
              uVar9 = uVar9 >> 1;
              piVar6[1] = uVar8;
              piVar6[3] = uVar9;
            }
            if (uVar9 == 0) {
              piVar6[2] = 0;
              piVar6[3] = uVar8;
              *(undefined1 *)((int)piVar6 + 0x1d) = 1;
            }
            FUN_00405a25(&local_5,1,param_2);
            piVar6[6] = (uint)local_5;
            FUN_00405a25(&local_5,1,param_2);
            *(byte *)((int)piVar6 + 0x1f) = local_5;
            FUN_00405a45(param_2,0x17,1);
            local_24 = (uint *)(piVar6[1] * 2);
            if (*piVar6 != 0) {
              (*local_1c)(*piVar6);
            }
            if (local_24 == (uint *)0x0) {
              iVar7 = 0;
            }
            else {
              iVar7 = (*local_20)(local_24 + 4,1);
            }
            local_10 = local_10 + 1;
            uVar4 = uVar4 + 1;
            *piVar6 = iVar7;
          } while (uVar4 < local_c[0]);
          puVar13 = local_14;
          puVar15 = local_14;
          local_18 = uVar4;
          if (uVar4 < 0x10) goto LAB_004066fc;
        }
        local_14 = (uint *)0x0;
        if (local_c[0] != 0) {
          local_24 = puVar13 + 1;
          do {
            puVar15 = (uint *)*local_24;
            uVar4 = puVar15[1];
            local_10 = (uint *)((byte)puVar15[7] * uVar4 >> 3);
            if (uVar4 != 0) {
              local_18 = (*local_20)(uVar4 * 2 + 0x10,1);
              if ((code *)param_1[0x57] == (code *)0x0) {
                FUN_00405a25(local_18,local_10,param_2);
              }
              else {
                (*(code *)param_1[0x57])(local_18,local_10,(char)puVar15[7],local_28,local_14);
                FUN_00405a45(param_2,local_10,1);
              }
              psVar10 = (short *)*puVar15;
              if ((char)puVar15[7] == '\b') {
                local_10 = (uint *)0x0;
                if (0 < (int)puVar15[1]) {
                  iVar7 = 0;
                  do {
                    pcVar1 = (char *)(iVar7 + local_18);
                    iVar7 = iVar7 + 1;
                    *psVar10 = (short)*pcVar1 << 8;
                    psVar10 = psVar10 + 1;
                  } while (iVar7 < (int)puVar15[1]);
                }
                *(undefined1 *)(puVar15 + 7) = 0x10;
                (*local_1c)(local_18);
              }
              else {
                (*local_1c)(psVar10);
                *puVar15 = local_18;
              }
              if (param_1[0x57] == 0) {
                psVar10 = (short *)*puVar15;
                uVar4 = 0;
                sVar14 = 0;
                if (puVar15[1] != 0) {
                  do {
                    sVar14 = sVar14 + *psVar10;
                    uVar4 = uVar4 + 1;
                    *psVar10 = sVar14;
                    psVar10 = psVar10 + 1;
                  } while (uVar4 < puVar15[1]);
                }
              }
              uVar4 = *puVar15;
              if (*(char *)((int)puVar15 + 0x1d) == '\x04') {
                iVar7 = puVar15[3] + puVar15[2];
                uVar3 = *(undefined2 *)((uVar4 - 2) + iVar7 * 2);
              }
              else {
                if (*(char *)((int)puVar15 + 0x1d) != '\x02') goto LAB_00406826;
                iVar7 = puVar15[3] + puVar15[2];
                uVar3 = *(undefined2 *)(uVar4 + puVar15[2] * 2);
              }
              *(undefined2 *)(uVar4 + iVar7 * 2) = uVar3;
            }
LAB_00406826:
            local_14 = (uint *)((int)local_14 + 1);
            local_24 = local_24 + 1;
          } while (local_14 < (uint)local_c[0]);
        }
      }
      iVar7 = local_28 + 1;
      local_30 = local_30 + 0x154;
      local_28 = iVar7;
    } while (iVar7 < (short)*local_34);
  }
  return CONCAT31((int3)((uint)iVar7 >> 8),1);
}

