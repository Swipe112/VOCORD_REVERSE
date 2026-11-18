//==== FUN_10001850 @ 10001850 ====

/* WARNING: Removing unreachable block (ram,0x10001bbb) */

undefined4 FUN_10001850(byte *param_1,uint param_2,undefined4 *param_3,uint *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined *local_8c;
  int local_1c;
  uint *local_10;
  uint local_8;
  
  if ((param_4 == (uint *)0x0) || (*param_4 != 0)) {
    if ((param_3 == (undefined4 *)0x0) || ((param_1 == (byte *)0x0 || (param_2 < 0x20)))) {
      uVar5 = 0x80040003;
    }
    else {
      *param_3 = 0;
      param_3[1] = 0;
      param_3[3] = 0;
      param_3[2] = 0xffffffff;
      local_8 = 1;
      if ((*(int *)param_1 == 0x3252504c) && (*(int *)(param_1 + 8) == 1)) {
        bVar3 = param_1[0x20];
        bVar1 = param_1[0x21];
        bVar2 = param_1[0x22];
        local_10 = (uint *)(param_1 + 0x23);
        if ((10 < bVar3) && (((bVar3 < 0x21 && (bVar1 < 9)) && (bVar2 != 0)))) {
          if (((bVar3 == 0xd) || ((bVar3 == 0xc && (4 < bVar1)))) && (*(int *)(param_1 + 0x14) != 0)
             ) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          for (local_1c = 0; local_1c < (int)(uint)bVar2; local_1c = local_1c + 1) {
            uVar7 = *local_10;
            uVar8 = local_10[1];
            local_10 = local_10 + 2;
            iVar6 = (uint)bVar3 * 10 + (uint)bVar1;
            if ((100 < uVar7) || (1000 < uVar8)) break;
            if (bVar4) {
              if (local_1c == 0) {
                param_3[2] = 1000;
                param_3[3] = 0;
                param_3[1] = iVar6;
                *param_3 = 1;
                thunk_FUN_100033a0(">>>> BinaryInfo(LPlates) %d (%d.FONT). Includes: ",*param_3,
                                   param_3[1]);
                local_8 = 1;
                local_8c = &DAT_105d30bc;
              }
              else {
                local_8c = &DAT_105d30b8;
              }
              thunk_FUN_100033a0("%s%d.%d",local_8c,uVar7,uVar8);
            }
            else {
              param_3[local_1c * 4 + 2] = uVar7;
              param_3[local_1c * 4 + 3] = uVar8;
              param_3[local_1c * 4 + 1] = iVar6;
              param_3[local_1c * 4] = 1;
              thunk_FUN_100033a0(">>>> BinaryInfo(LPlates) %d (%d.%d.%d)\n",param_3[local_1c * 4],
                                 param_3[local_1c * 4 + 1],param_3[local_1c * 4 + 2],
                                 param_3[local_1c * 4 + 3]);
              if (local_1c != 0) {
                local_8 = local_8 + 1;
              }
            }
            if ((param_4 == (uint *)0x0) || (*param_4 <= local_8)) break;
          }
          if (bVar4) {
            thunk_FUN_100033a0(&DAT_105d3078);
          }
          if (param_4 != (uint *)0x0) {
            *param_4 = local_8;
          }
          return 0;
        }
      }
      bVar3 = *param_1;
      if ((((0x13 < param_1[1]) && (param_1[1] < 0xc9)) && (0x13 < param_1[2])) &&
         (param_1[2] < 0xc9)) {
        uVar7 = __ftol();
        uVar8 = __ftol();
        uVar9 = __ftol();
        uVar10 = __ftol();
        uVar11 = __ftol();
        uVar12 = __ftol();
        if (((uVar7 < uVar8) && (uVar9 < uVar10)) && (uVar11 < uVar12)) {
          *param_3 = 2;
          param_3[1] = (uint)bVar3;
          thunk_FUN_100033a0(">>>> BinaryInfo(AdaBoost) %d (%d)\n",*param_3,param_3[1]);
          if (param_4 != (uint *)0x0) {
            *param_4 = 1;
          }
          return 0;
        }
      }
      thunk_FUN_100033a0(">>>> BinaryInfo(UNKNOWN) %d (%d.%d.%d)\n",*param_3,param_3[1],param_3[2],
                         param_3[3]);
      if (param_4 != (uint *)0x0) {
        *param_4 = 1;
      }
      uVar5 = 1;
    }
  }
  else {
    *param_4 = 0;
    uVar5 = 0;
  }
  return uVar5;
}



//==== FUN_10006380 @ 10006380 ====

int FUN_10006380(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  if (param_1[2] == 0) {
    local_8 = -0x7ffbffff;
  }
  else if (param_1[3] == 2) {
    local_8 = (*(code *)**(undefined4 **)param_1[2])(param_1[2],param_3,param_4,param_2);
    if (local_8 < 0) {
      thunk_FUN_100033a0(">>>> TrafficAnalizer(AdaBoost) LoadLibrary%02d INVALID BINARY FILE\n",
                         param_2);
    }
    else {
      thunk_FUN_100033a0(">>>> TrafficAnalizer(AdaBoost) LoadLibrary%02d OK\n",param_2);
    }
  }
  else if ((((param_1[3] == 4) || (param_1[3] == 5)) || (param_1[3] == 6)) && (param_1[4] != 0)) {
    (**(code **)(*param_1 + 0x10))(param_1,0);
    local_c = 0;
    local_c = (**(code **)(*(int *)param_1[4] + 0xc))(param_1[4],param_3,param_4,param_2);
    if (local_c < 0) {
      thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) LoadLibrary%02d INVALID BINARY FILE\n",
                         param_2);
    }
    else {
      (**(code **)(*(int *)param_1[4] + 0x14))(param_1[4],&local_10,&local_14,&local_18,param_2);
      thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) LoadLibrary%02d v%02d.%02d.%03d\n",param_2,
                         local_10,local_14,local_18);
    }
    uVar1 = (**(code **)(*(int *)param_1[4] + 0x80))(param_1[4]);
    (**(code **)(*(int *)param_1[2] + 0x50))(param_1[2],uVar1);
    local_8 = local_c;
  }
  else {
    local_8 = 0x4000e;
  }
  return local_8;
}



//==== FUN_10006700 @ 10006700 ====

undefined4 FUN_10006700(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = 0x80040001;
  }
  else if (*(int *)(param_1 + 0xc) == 2) {
    thunk_FUN_100033a0(">>>> TrafficAnalizer(AdaBoost) Set_Mask%02d\n",param_2);
    uVar1 = (**(code **)(**(int **)(param_1 + 8) + 4))
                      (*(undefined4 *)(param_1 + 8),param_3,param_4,param_2);
  }
  else if (((*(int *)(param_1 + 0xc) == 4) || (*(int *)(param_1 + 0xc) == 5)) ||
          (*(int *)(param_1 + 0xc) == 6)) {
    thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) Set_Mask%02d\n",param_2);
    uVar1 = (**(code **)(**(int **)(param_1 + 8) + 4))
                      (*(undefined4 *)(param_1 + 8),param_3,param_4,param_2);
  }
  else {
    uVar1 = 0x4000e;
  }
  return uVar1;
}



//==== FUN_10006950 @ 10006950 ====

int FUN_10006950(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = -0x7ffbffff;
  }
  else if ((((*(int *)(param_1 + 0xc) == 4) || (*(int *)(param_1 + 0xc) == 5)) ||
           (*(int *)(param_1 + 0xc) == 6)) && (*(int *)(param_1 + 0x10) != 0)) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x30))
                      (*(undefined4 *)(param_1 + 0x10),param_2,param_3);
    if (iVar1 < 0) {
      thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) SetPreferableRegionalCodes_old: id=%-d - FAIL\n"
                         ,param_3);
    }
    else if (param_2 == 0) {
      thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) SetPreferableRegionalCodes_old: id=%-d - %p\n"
                         ,param_3,0);
    }
    else {
      thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) SetPreferableRegionalCodes_old: id=%-d - \"%ls\"\n"
                         ,param_3,param_2);
    }
  }
  else {
    iVar1 = 0x4000e;
  }
  return iVar1;
}



//==== FUN_100067e0 @ 100067e0 ====

int FUN_100067e0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = -0x7ffbffff;
  }
  else if ((((*(int *)(param_1 + 0xc) == 4) || (*(int *)(param_1 + 0xc) == 5)) ||
           (*(int *)(param_1 + 0xc) == 6)) && (*(int *)(param_1 + 0x10) != 0)) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x34))
                      (*(undefined4 *)(param_1 + 0x10),param_2,param_3);
    if (iVar1 < 0) {
      thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) SetPreferableRegionalCodes_old: id=%-d - FAIL\n"
                         ,param_3);
    }
    else if (param_2 == 0) {
      thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) SetPreferableRegionalCodes_old: id=%-d - %p\n"
                         ,param_3,0);
    }
    else {
      thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) SetPreferableRegionalCodes_old: id=%-d - \"%ls\"\n"
                         ,param_3,param_2);
    }
  }
  else {
    iVar1 = 0x4000e;
  }
  return iVar1;
}



//==== FUN_10006ac0 @ 10006ac0 ====

int FUN_10006ac0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = -0x7ffbffff;
  }
  else if ((((*(int *)(param_1 + 0xc) == 4) || (*(int *)(param_1 + 0xc) == 5)) ||
           (*(int *)(param_1 + 0xc) == 6)) && (*(int *)(param_1 + 0x10) != 0)) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x50))
                      (*(undefined4 *)(param_1 + 0x10),param_2,param_3,param_4);
    if (iVar1 < 0) {
      thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) SetLibraryWeight: id=%-d - %lf - FAIL\n",
                         param_4,param_2,param_3);
    }
    else {
      thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) SetLibraryWeight: id=%-d - %lf\n",param_4,
                         param_2,param_3);
    }
  }
  else {
    iVar1 = 0x4000e;
  }
  return iVar1;
}



//==== FUN_10092ea0 @ 10092ea0 ====

undefined4 * __fastcall FUN_10092ea0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10418826;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_105d7600;
  param_1[1] = &PTR_LAB_105d75c0;
  FUN_10095470();
  local_4 = 0;
  FUN_100958b0();
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_LAB_105d7530;
  param_1[1] = &PTR_LAB_105d74f0;
  param_1[0x45] = 0;
  param_1[0x46] = 0x4000;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4e] = 0x300;
  param_1[0x4f] = 0x240;
  param_1[0x50] = 0;
  param_1[0x52] = 1;
  param_1[0x54] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x5c] = 0x33333333;
  param_1[0x5d] = 0x3feb3333;
  thunk_FUN_100033a0(s_>>>>______TrafficAnalizer_Recogn_106125c0,s_20161004_10612608,param_1);
  param_1[0x5e] = 0x66666666;
  param_1[0x5f] = 0x3fe66666;
  param_1[0x4a] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0xffffffff;
  param_1[0x4be2] = 0;
  param_1[0x4be3] = 0;
  puVar1 = param_1 + 0x123;
  iVar2 = 0x20;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[2] = 0;
    puVar1[1] = 0xffffffff;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = param_1 + 99;
  iVar2 = 0x40;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  ExceptionList = local_c;
  return param_1;
}



//==== FUN_10093530 @ 10093530 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_10093530(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *unaff_EBX;
  int iVar6;
  int *piVar7;
  int *unaff_ESI;
  int *piVar8;
  uint uVar9;
  double *pdVar10;
  int *piVar11;
  char *pcVar12;
  int local_2a0;
  int local_29c [2];
  int *local_294;
  int *local_290;
  char local_208 [516];
  
  piVar11 = (int *)(local_208 + 0x204);
  thunk_FUN_100033a0(s_>>>>______TrafficAnalizer_Recogn_10612d80,s_20161004_10612608,param_1);
  piVar7 = param_1 + 0x62;
  iVar5 = 0;
  piVar1 = piVar7;
  while (*piVar1 == 0) {
    iVar5 = iVar5 + 1;
    piVar1 = piVar1 + 3;
    if (0x3f < iVar5) {
      return -0x7ffbffff;
    }
  }
  piVar1 = *(int **)(*piVar1 + 0x1c0);
  if (piVar1 == (int *)0x0) {
    return -0x7ffbffff;
  }
  local_29c[1] = 0;
  piVar8 = param_1 + 0x124;
  local_294 = piVar1;
  local_290 = piVar7;
  do {
    if (*piVar8 != -1) {
      local_2a0 = 0;
      if (piVar8[-2] == 0) {
        local_29c[0] = 0;
        do {
          if ((*piVar7 != 0) && ((piVar7[2] == 0 || (piVar8[1] == 0)))) {
            piVar1 = *(int **)(*piVar7 + 0x1c0);
            if (piVar1 == (int *)0x0) {
              iVar5 = -0x7ffbffff;
LAB_10093867:
              thunk_FUN_100033a0(s_>>>>______TrafficAnalizer_Recogn_10612a78,s_20161004_10612608,
                                 param_1,*piVar8);
              return iVar5;
            }
            iVar5 = (**(code **)(*piVar1 + 0x1c))(0,0,*piVar8,0,0);
            if (iVar5 < 0) goto LAB_10093867;
            local_2a0 = local_2a0 + 1;
          }
          piVar7 = piVar7 + 3;
          local_29c[0] = local_29c[0] + 1;
        } while (local_29c[0] < 0x40);
        if (local_2a0 == 0) {
          iVar5 = *piVar8;
          pcVar12 = s_>>>>______TrafficAnalizer_Recogn_10612c00;
        }
        else {
          iVar5 = *piVar8;
          pcVar12 = s_>>>>______TrafficAnalizer_Recogn_10612c60;
        }
        thunk_FUN_100033a0(pcVar12,s_20161004_10612608,param_1,iVar5);
        *piVar8 = -1;
      }
      else {
        local_208[0] = '\0';
        local_29c[0] = 0;
        do {
          if ((param_1[local_29c[0] * 3 + 0x62] != 0) &&
             ((param_1[local_29c[0] * 3 + 100] == 0 || (piVar8[1] == 0)))) {
            piVar7 = *(int **)(param_1[local_29c[0] * 3 + 0x62] + 0x1c0);
            if (local_29c[0] == 0) {
              if (piVar7 == (int *)0x0) goto LAB_1009382d;
              iVar5 = (**(code **)(*piVar7 + 0x1c))
                                (piVar8[-2],piVar8[-1],*piVar8,FUN_10093490,local_208);
            }
            else {
              if (piVar7 == (int *)0x0) {
LAB_1009382d:
                iVar5 = -0x7ffbffff;
                goto LAB_10093832;
              }
              iVar5 = (**(code **)(*piVar7 + 0x1c))(piVar8[-2],piVar8[-1],*piVar8,0,0);
            }
            if (iVar5 < 0) {
              if (iVar5 == -0x7ffbfff4) {
                thunk_FUN_100033a0(s_>>>>______TrafficAnalizer_Recogn_10612a10,s_20161004_10612608,
                                   param_1);
                return -0x7ffbfff4;
              }
LAB_10093832:
              if (local_208[0] == '\0') {
                thunk_FUN_100033a0(s_>>>>______TrafficAnalizer_Recogn_106129a0,s_20161004_10612608,
                                   param_1);
                return iVar5;
              }
              thunk_FUN_100033a0(s_>>>>______TrafficAnalizer_Recogn_10612ae0,s_20161004_10612608,
                                 local_208);
              return iVar5;
            }
            local_2a0 = local_2a0 + 1;
          }
          local_29c[0] = local_29c[0] + 1;
        } while (local_29c[0] < 0x40);
        if (local_2a0 == 0) {
          thunk_FUN_100033a0(s_>>>>______TrafficAnalizer_Recogn_10612cc0,s_20161004_10612608,param_1
                             ,*piVar8);
        }
        else {
          thunk_FUN_100033a0(s_>>>>______TrafficAnalizer_Recogn_10612d20,s_20161004_10612608,param_1
                             ,*piVar8,local_208);
        }
      }
      piVar8[1] = 1;
      piVar1 = local_294;
      piVar7 = local_290;
    }
    piVar8 = piVar8 + 4;
    local_29c[1] = local_29c[1] + 1;
  } while (local_29c[1] < 0x20);
  uVar2 = (**(code **)(*piVar1 + 0x5c))(0,0x400,0,0);
  thunk_FUN_100033a0(s_>>>>______TrafficAnalizer_Recogn_10612ba0,s_20161004_10612608,param_1,uVar2);
  iVar5 = 0;
  iVar6 = 0;
  do {
    uVar3 = (**(code **)(*unaff_EBX + 0x58))();
    uVar9 = 0;
    if (uVar3 != 0) {
      do {
        iVar4 = (**(code **)(*(int *)param_1[0x4be3] + 0x1c))(local_29c[uVar9 + 1]);
        if (iVar4 < 0) {
          return iVar4;
        }
        iVar4 = (**(code **)(*(int *)param_1[0x4be3] + 0x20))(local_29c[uVar9]);
        if ((iVar4 != 0) && (*(short *)(iVar4 + 4) != 0)) {
          iVar4 = (**(code **)(*param_1 + 0x30))();
          if (iVar4 < 0) {
            return iVar4;
          }
          iVar5 = iVar5 + 1;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar3);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x20);
  piVar7 = (int *)0x0;
  if (iVar5 == 0) {
    thunk_FUN_100033a0();
  }
  param_1[0x4be2] = 0;
  iVar5 = (**(code **)(*param_1 + 0x68))(param_1,local_29c);
  if (unaff_EBX != (int *)0x0) {
    do {
      iVar6 = (**(code **)(*unaff_ESI + 0x54))
                        (*(undefined4 *)(iVar5 + (int)piVar7 * 8),
                         *(undefined4 *)(iVar5 + 4 + (int)piVar7 * 8));
      if (iVar6 != 0) {
        uVar3 = param_1[0x4be2];
        uVar9 = 0;
        if (uVar3 != 0) {
          pdVar10 = (double *)(param_1 + 0x9e4);
          do {
            if ((ABS((float)pdVar10[-1] - *(float *)(iVar6 + 0x2964)) < (float)_DAT_105d5168) &&
               (ABS((float)*pdVar10 - *(float *)(iVar6 + 0x2968)) < (float)_DAT_105d5168))
            goto LAB_100939c4;
            uVar9 = uVar9 + 1;
            pdVar10 = pdVar10 + 8;
          } while (uVar9 < uVar3);
        }
        if (uVar3 < 0x400) {
          *(double *)(param_1 + uVar3 * 0x10 + 0x9e2) = (double)*(float *)(iVar6 + 0x2964);
          *(double *)(param_1 + param_1[0x4be2] * 0x10 + 0x9e4) = (double)*(float *)(iVar6 + 0x2968)
          ;
          param_1[param_1[0x4be2] * 0x10 + 0x9e6] = (uint)(1 < *(int *)(iVar6 + 0x2c));
          param_1[0x4be2] = param_1[0x4be2] + 1;
          thunk_FUN_100033a0(s_>>>>______TrafficAnalizer_Recogn_10612940,s_20161004_10612608,param_1
                             ,(double)(*(float *)(iVar6 + 0x2964) * (float)_DAT_105d7690));
        }
      }
LAB_100939c4:
      piVar7 = (int *)((int)piVar7 + 1);
    } while (piVar7 < unaff_EBX);
  }
  iVar5 = 0x40;
  do {
    if ((int *)*piVar11 != (int *)0x0) {
      piVar11[2] = 1;
      (**(code **)(*(int *)*piVar11 + 8))();
    }
    piVar11 = piVar11 + 3;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return 0;
}



//==== thunk_FUN_100033a0 @ 10001316 ====

void thunk_FUN_100033a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  WCHAR WStackY_1804;
  undefined4 auStackY_1802 [1023];
  CHAR aCStackY_804 [2008];
  undefined4 uStackY_2c;
  
  FUN_10208560();
  WStackY_1804 = DAT_105d33e8;
  puVar2 = auStackY_1802;
  for (iVar1 = 0x3ff; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  FUN_1020858f();
  uStackY_2c = 0x1000341f;
  MultiByteToWideChar(0,0,aCStackY_804,-1,&WStackY_1804,0x800);
  thunk_FUN_10003460();
  return;
}



//==== __ftol @ 10208350 ====

/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}



//==== FUN_100958b0 @ 100958b0 ====

void __fastcall FUN_100958b0(int param_1)

{
  *(undefined4 *)(param_1 + 0x100) = 0;
  return;
}



//==== FUN_10095470 @ 10095470 ====

undefined4 * __fastcall FUN_10095470(undefined4 *param_1)

{
  HANDLE pvVar1;
  
  param_1[1] = 1;
  pvVar1 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  *param_1 = pvVar1;
  return param_1;
}



// FAILED CreateMutexA @ EXTERNAL:0000001b : Exception while decompiling EXTERNAL:0000001b: Cannot marshal address space: EXTERNAL

