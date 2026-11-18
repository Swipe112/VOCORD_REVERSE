//==== FUN_10095a70 @ 10095a70 ====

undefined4 __thiscall FUN_10095a70(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_104189c6;
  local_c = ExceptionList;
  if (param_2 == (int *)0x0) {
    uVar1 = 0x4001a;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x1618);
    iVar3 = 0;
    if (iVar4 == 0) {
      ExceptionList = &local_c;
      iVar2 = thunk_FUN_10003930(0x1175a8);
      local_4 = 1;
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        FUN_1009ff10();
      }
      *(int *)(param_1 + 0x1618) = iVar2;
    }
    else {
      iVar3 = 1;
      iVar2 = *(int *)(iVar4 + 0x1175a0);
      if (*(int *)(iVar4 + 0x1175a0) != 0) {
        do {
          iVar4 = iVar2;
          iVar3 = iVar3 + 1;
          iVar2 = *(int *)(iVar4 + 0x1175a0);
        } while (*(int *)(iVar4 + 0x1175a0) != 0);
        if (0x1f < iVar3) {
          return 0x80040005;
        }
      }
      ExceptionList = &local_c;
      iVar2 = thunk_FUN_10003930(0x1175a8);
      local_4 = 0;
      if (iVar2 == 0) {
        iVar2 = 0;
        *(undefined4 *)(iVar4 + 0x1175a0) = 0;
      }
      else {
        FUN_1009ff10();
        *(int *)(iVar4 + 0x1175a0) = iVar2;
      }
    }
    if (iVar2 == 0) {
      uVar1 = 0x8004000c;
    }
    else {
      *param_2 = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x80854) = param_1 + 0x18;
        *(undefined4 *)(*param_2 + 0x8086c) = 0xffffffff;
        *(int *)(*param_2 + 0x80874) = iVar3;
        *(undefined4 *)(*param_2 + 0x1175a0) = 0;
        *(undefined4 *)(*param_2 + 0x80860) = 0;
        *(undefined4 *)(*param_2 + 0x80878) = 0;
        *(undefined4 *)(*param_2 + 0x8087c) = 0;
        *(undefined4 *)(*param_2 + 0x80884) = 0xffffffff;
        *(undefined4 *)(*param_2 + 0x80870) = 0;
      }
      uVar1 = 0;
    }
  }
  ExceptionList = local_c;
  return uVar1;
}



//==== FUN_10096090 @ 10096090 ====

int FUN_10096090(int param_1,int *param_2,undefined4 param_3,uint *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int local_4;
  
  iVar3 = param_1;
  param_4[3] = 0;
  if ((*param_2 == 0x3252504c) && (param_2[2] == 1)) {
    bVar1 = *(byte *)(param_2 + 8);
    bVar2 = *(byte *)((int)param_2 + 0x21);
    uVar7 = (uint)*(byte *)((int)param_2 + 0x22);
    piVar8 = (int *)((int)param_2 + 0x23);
    param_4[2] = uVar7;
    *param_4 = (uint)bVar1;
    param_4[1] = (uint)bVar2;
    if ((bVar1 == 0xd) && (bVar2 == 7)) {
      if (uVar7 != 0) {
        piVar8 = piVar8 + uVar7 * 2;
      }
      *(int *)(param_1 + 0x80860) = param_2[5];
      param_2 = (int *)0x0;
      piVar4 = (int *)(*(int *)(param_1 + 0x80854) + 4);
      while (*piVar4 != 0) {
        param_2 = (int *)((int)param_2 + 1);
        piVar4 = piVar4 + 0xb;
        if (0x7f < (int)param_2) {
          return -0x7ffbfffb;
        }
      }
      if ((int)param_2 < 0) {
        return -0x7ffbfffb;
      }
      iVar9 = (int)param_2 * 0x2c;
      local_4 = 0;
      while (*piVar8 != -1) {
        if (0x15ff < iVar9) goto LAB_100961f0;
        param_1 = 0;
        iVar5 = FUN_100a1570(piVar8,*(undefined4 *)(iVar3 + 0x8086c),local_4,&param_1);
        if (iVar5 < 0) {
          return iVar5;
        }
        iVar5 = *(int *)(iVar3 + 0x80854);
        piVar8 = (int *)((int)piVar8 + param_1);
        iVar6 = 0;
        if (0 < iVar9) {
          piVar4 = (int *)(iVar5 + 0x28);
          do {
            if (*piVar4 == *(int *)(iVar9 + iVar5 + 0x28)) {
              FUN_100a1710();
              goto LAB_100961c5;
            }
            iVar6 = iVar6 + 1;
            piVar4 = piVar4 + 0xb;
          } while (iVar6 < (int)param_2);
        }
        param_2 = (int *)((int)param_2 + 1);
        iVar9 = iVar9 + 0x2c;
LAB_100961c5:
        local_4 = local_4 + 1;
        if (0x7f < local_4) {
          param_4[3] = (int)piVar8 + 9;
          return 0;
        }
      }
      piVar8 = piVar8 + 1;
LAB_100961f0:
      param_4[3] = (int)piVar8 + 9;
      return 0;
    }
  }
  return -0x7ffbffee;
}



//==== FUN_10096210 @ 10096210 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10096210(uint *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint *puVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint *puVar15;
  uint local_8;
  int local_4;
  
  puVar2 = param_1;
  puVar7 = (uint *)param_2[3];
  if (puVar7 == (uint *)0x0) {
    param_2[2] = param_2[2] - 1;
    return 0x4001a;
  }
  param_1[0x20219] = 0;
  param_1[0x2021a] = 0;
  local_8 = *puVar7;
  param_1[0x2021e] = *param_2;
  param_1[0x2021f] = param_2[1];
  param_1[0x20221] = puVar7[1];
  param_1[0x2021c] = puVar7[2];
  param_1[0x20220] = param_2[1] + *param_2 * 10;
  uVar12 = puVar7[3];
  param_1[0x45452] = uVar12;
  puVar10 = puVar7 + 4;
  puVar11 = param_1 + 0x45352;
  for (iVar5 = (uVar12 & 0xfffffff) << 2; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(char *)puVar11 = (char)*puVar10;
    puVar10 = (uint *)((int)puVar10 + 1);
    puVar11 = (uint *)((int)puVar11 + 1);
  }
  puVar7 = puVar7 + 4 + param_1[0x45452] * 4;
  if ((param_1[0x20218] == 0) && (local_8 != 0)) {
    puVar10 = puVar7;
    puVar11 = param_1;
    for (iVar5 = 0x20215; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    puVar7 = puVar7 + 0x20215;
    iVar5 = 0;
    if (0 < (int)param_1[0x20203]) {
      pfVar3 = (float *)(param_1 + 0x20205);
      do {
        iVar5 = iVar5 + 1;
        *pfVar3 = (float)(double)CONCAT44(param_4,param_3) * *pfVar3;
        pfVar3 = pfVar3 + 2;
      } while (iVar5 < (int)param_1[0x20203]);
    }
    param_1 = (uint *)0x0;
    if (0 < (int)local_8) {
      do {
        if (puVar2[0x20219] == 0x20) {
          return -0x7ff8fff2;
        }
        puVar10 = puVar2 + puVar2[0x20219] * 0x1288 + 0x20232;
        puVar11 = puVar7;
        puVar15 = puVar10;
        for (iVar5 = 0xa5c; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar15 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar15 = puVar15 + 1;
        }
        puVar10[0xa5c] = (uint)puVar2;
        puVar10[0xa5d] = puVar2[0x2021b];
        uVar12 = puVar2[0x20219];
        puVar10[0xa52] = (uint)((float)(double)CONCAT44(param_4,param_3) * (float)puVar10[0xa52]);
        puVar10[0x1266] = (uint)(puVar2 + puVar10[0x84d] * 0x2000 + 0x202);
        puVar10[0xa50] = (uint)((float)(double)CONCAT44(param_4,param_3) * (float)puVar10[0xa50]);
        puVar10[0xa5f] = uVar12;
        puVar10[0x1267] = (uint)(puVar2 + puVar10[0x84e] * 0x2000 + 0x202);
        uVar12 = puVar10[4];
        puVar10[0xa60] = 0;
        puVar10[0x1261] = 0;
        puVar10[0xa5e] = 1;
        puVar10[0xa5b] = 0;
        if (0 < (int)uVar12) {
          pfVar3 = (float *)(puVar10 + 0x74e);
          do {
            if (*pfVar3 < _DAT_105d76a0) {
              puVar10[0xa5b] = 1;
            }
            pfVar3 = pfVar3 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        if (0xf < (int)puVar10[3]) {
          thunk_FUN_100033a0(s_>>>>______TrafficAnalizer_Recogn_10613a00,s_20161004_10612608,puVar2,
                             puVar10[3],0x10);
          return -0x7ffbffee;
        }
        iVar5 = FUN_100a0280(puVar10[1],puVar7 + 0xa5c);
        puVar7 = (uint *)((int)(puVar7 + 0xa5c) + iVar5);
        param_1 = (uint *)((int)param_1 + 1);
        puVar2[0x20219] = puVar2[0x20219] + 1;
      } while ((int)param_1 < (int)local_8);
    }
  }
  if (((char)*puVar7 == '\x06') && (*(char *)((int)puVar7 + 1) == '\0')) {
    local_4 = 0;
    iVar5 = FUN_100a0090(0xe,0x14,(char *)((int)puVar7 + 5),&local_4);
    if (-1 < iVar5) {
      pbVar13 = (byte *)((int)puVar7 + local_4 + 5);
      iVar5 = FUN_100a0080();
      if (iVar5 == 0) {
        return -0x7fffbffb;
      }
      bVar1 = *pbVar13;
      pbVar13 = pbVar13 + 1;
      iVar5 = FUN_100a0080();
      iVar5 = *(int *)(iVar5 + 0x18);
      uVar12 = (uint)bVar1;
      local_8 = uVar12;
      if (bVar1 != 0) {
        param_1 = (uint *)uVar12;
        do {
          bVar1 = *pbVar13;
          uVar8 = (uint)pbVar13[1];
          pbVar13 = pbVar13 + 2;
          if (uVar8 != 0) {
            do {
              FUN_100a0130(pbVar13,bVar1);
              pbVar13 = pbVar13 + iVar5 * 8;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
            uVar12 = local_8;
          }
          param_1 = (uint *)((int)param_1 - 1);
        } while (param_1 != (uint *)0x0);
      }
      iVar9 = 0;
      if (0 < (int)uVar12) {
        do {
          local_8 = 0;
          iVar4 = FUN_100a0090(iVar5,1,pbVar13,&local_8);
          if (iVar4 < 0) {
            return iVar4;
          }
          iVar9 = iVar9 + 1;
          pbVar13 = pbVar13 + local_8 + 0x10;
        } while (iVar9 < (int)uVar12);
      }
      iVar5 = *(int *)pbVar13;
      pbVar13 = pbVar13 + 4;
      param_1 = (uint *)0x0;
      pbVar14 = pbVar13;
      if (0 < iVar5) {
        do {
          pbVar13 = pbVar14 + 4;
          if (*(int *)pbVar14 == -1) break;
          iVar9 = *(int *)pbVar13;
          pbVar13 = pbVar14 + 8;
          iVar4 = 0;
          piVar6 = (int *)(puVar2[0x20215] + 0x28);
          while ((piVar6[-9] == 0 || (*piVar6 != iVar9))) {
            iVar4 = iVar4 + 1;
            piVar6 = piVar6 + 0xb;
            if (0x7f < iVar4) {
              thunk_FUN_100033a0(s_>>>>______TrafficAnalizer_Recogn_106139a0,s_20161004_10612608,
                                 puVar2,iVar9);
              return -0x7ffbffee;
            }
          }
          FUN_100a01c0(*(int *)pbVar14,iVar4 * 0x2c + puVar2[0x20215]);
          param_1 = (uint *)((int)param_1 + 1);
          pbVar14 = pbVar13;
        } while ((int)param_1 < iVar5);
      }
      param_2[3] = (uint)(pbVar13 + 4);
      param_2[2] = param_2[2] - 1;
      puVar2[0x20216] = 1;
      puVar2[0x20217] = 1;
      return 0;
    }
  }
  else {
    puVar2[0x20219] = 0;
    iVar5 = -0x7ffbffee;
  }
  return iVar5;
}



