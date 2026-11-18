//==== FUN_10006e20 @ 10006e20 ====

void FUN_10006e20(int *param_1)

{
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x1b4))(1);
  }
  return;
}



//==== FUN_10003ed0 @ 10003ed0 ====

int FUN_10003ed0(int *param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6,
                int param_7,int param_8,int param_9)

{
  int iVar1;
  undefined4 uVar2;
  int *local_58;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  local_8 = 0;
  if (param_1[1] != 0) {
    (**(code **)(*param_1 + 0xc))(param_1,param_9);
  }
  param_1[10] = param_2;
  param_1[0xb] = param_3;
  param_1[0xc] = param_4;
  param_1[0xd] = param_6;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  (**(code **)(*param_1 + 0xfc))(param_1);
  param_1[0xe] = 500;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x3ff00000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x3ff00000;
  param_1[0x10] = 0;
  param_1[0x11] = 0x40568000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0x33333333;
  param_1[0x13] = 0x3fd33333;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x3ff00000;
  param_1[0x66] = 0;
  param_1[0x67] = 30000;
  param_1[9] = param_9;
  iVar1 = FUN_100126d0();
  param_1[1] = iVar1;
  if (param_1[1] == 0) {
    local_8 = -0x7ffbfff4;
  }
  param_1[3] = 0;
  if (param_7 == 0) {
    local_58 = (int *)0x2;
  }
  else {
    local_58 = (int *)param_1[3];
  }
  param_1[3] = (int)local_58;
  if (param_7 == 4) {
    local_58 = (int *)0x2;
  }
  else {
    local_58 = (int *)param_1[3];
  }
  param_1[3] = (int)local_58;
  if (param_7 == 1) {
    local_58 = (int *)0x4;
  }
  else {
    local_58 = (int *)param_1[3];
  }
  param_1[3] = (int)local_58;
  if (param_7 == 2) {
    local_58 = (int *)0x5;
  }
  else {
    local_58 = (int *)param_1[3];
  }
  param_1[3] = (int)local_58;
  if (param_7 == 3) {
    local_58 = (int *)0x6;
  }
  else {
    local_58 = (int *)param_1[3];
  }
  param_1[3] = (int)local_58;
  if (-1 < local_8) {
    iVar1 = FUN_100e3cb0(param_1[3]);
    param_1[0x68] = iVar1;
    if (param_1[0x68] == 0) {
      local_8 = -0x7ffbfff4;
    }
  }
  if (-1 < local_8) {
    local_8 = (**(code **)(*(int *)param_1[0x68] + 4))
                        (param_1[0x68],param_2,param_3,param_4,param_6);
  }
  if (-1 < local_8) {
    if (((param_7 == 1) || (param_7 == 2)) || (param_7 == 3)) {
      iVar1 = FUN_10092e40();
      param_1[4] = iVar1;
      if (param_1[4] == 0) {
        local_8 = -0x7ffbfff4;
      }
      else {
        local_c = (param_1[3] != 4) + 1;
        local_8 = (**(code **)(*(int *)param_1[4] + 4))
                            (param_1[4],param_4,param_2,param_3,param_6,1,param_8,param_2 / 6,
                             local_c);
        if (-1 < local_8) {
          if (param_1[0x51] == 0) {
            (**(code **)(*(int *)param_1[4] + 0x48))(param_1[4],0xffffffff);
          }
          else {
            (**(code **)(*(int *)param_1[4] + 0x48))
                      (param_1[4],(uint)(param_3 * param_1[0x52]) / 100);
          }
        }
        if ((-1 < local_8) && (param_1[1] != 0)) {
          iVar1 = FUN_10152f40(local_10);
          param_1[5] = iVar1;
          if ((param_1[5] != 0) &&
             (iVar1 = (**(code **)(*(int *)param_1[5] + 0x14))
                                (param_1[5],param_1[1],param_2,param_3,param_4,param_8 << 2,param_6)
             , iVar1 < 0)) {
            (**(code **)(*(int *)param_1[5] + 8))(param_1[5]);
            param_1[5] = 0;
          }
        }
      }
      if ((((param_4 & 0x80808080) == 0) && ((param_4 & 0x60000000) != 0)) &&
         (((param_4 & 0x600000) != 0 && (((param_4 & 0x6000) != 0 && ((param_4 & 0x60) != 0)))))) {
        thunk_FUN_100033a0(">>>> TrafficAnalizer%s (LPlates) Init [%d x %d] FOURCC=[%c%c%c%c] Flip=%d\n"
                           ,"_65_4",param_2,param_3,param_4 & 0xff,param_4 >> 8 & 0xff,
                           param_4 >> 0x10 & 0xff,param_4 >> 0x18,param_6);
      }
      else {
        thunk_FUN_100033a0(">>>> TrafficAnalizer%s (LPlates) Init [%d x %d] FOURCC=0x%08X Flip=%d\n"
                           ,"_65_4",param_2,param_3,param_4,param_6);
      }
    }
    else if ((param_7 == 0) || (param_7 == 4)) {
      if (((param_4 & 0x80808080) == 0) &&
         (((((param_4 & 0x60000000) != 0 && ((param_4 & 0x600000) != 0)) &&
           ((param_4 & 0x6000) != 0)) && ((param_4 & 0x60) != 0)))) {
        thunk_FUN_100033a0(">>>> TrafficAnalizer%s (AdaBoost) Init [%d x %d] FOURCC=[%c%c%c%c] Flip=%d\n"
                           ,"_65_4",param_2,param_3,param_4 & 0xff,param_4 >> 8 & 0xff,
                           param_4 >> 0x10 & 0xff,param_4 >> 0x18,param_6);
      }
      else {
        thunk_FUN_100033a0(">>>> TrafficAnalizer%s (AdaBoost) Init [%d x %d] FOURCC=0x%08X Flip=%d\n"
                           ,"_65_4",param_2,param_3,param_4,param_6);
      }
    }
    else {
      local_8 = -0x7ffbfff2;
      if ((((param_4 & 0x80808080) == 0) && ((param_4 & 0x60000000) != 0)) &&
         (((param_4 & 0x600000) != 0 && (((param_4 & 0x6000) != 0 && ((param_4 & 0x60) != 0)))))) {
        thunk_FUN_100033a0(">>>> TrafficAnalizer%s (Unknown) Can\'t Init! [%d x %d] FOURCC=[%c%c%c%c] Flip=%d\n"
                           ,"_65_4",param_2,param_3,param_4 & 0xff,param_4 >> 8 & 0xff,
                           param_4 >> 0x10 & 0xff,param_4 >> 0x18,param_6);
      }
      else {
        thunk_FUN_100033a0(">>>> TrafficAnalizer%s (Unknown) Can\'t Init! [%d x %d] FOURCC=0x%08X Flip=%d\n"
                           ,"_65_4",param_2,param_3,param_4,param_6);
      }
    }
  }
  if (-1 < local_8) {
    local_8 = (**(code **)(*(int *)param_1[1] + 4))(param_1[1],param_4,param_2,param_3,param_6);
  }
  if (-1 < local_8) {
    (**(code **)(*param_1 + 0x34))(param_1,0,0,param_2,param_3,0);
    (**(code **)(*(int *)param_1[1] + 0x54))(param_1[1],1);
    if (*(double *)(param_1 + 0x14) <= *(double *)(param_1 + 0x12)) {
      local_58 = param_1 + 0x12;
    }
    else {
      local_58 = param_1 + 0x14;
    }
    (**(code **)(*(int *)param_1[1] + 0x5c))(param_1[1],local_58);
    (**(code **)(*(int *)param_1[1] + 0x14))(param_1[1],0x3c);
    iVar1 = (**(code **)(*(int *)param_1[0x68] + 0x14))(param_1[0x68]);
    param_1[2] = iVar1;
    if (param_1[2] == 0) {
      local_8 = -0x7ffbffff;
    }
    else if (param_1[3] == 2) {
      (**(code **)(*(int *)param_1[2] + 0x1c))(param_1[2],0);
      if (param_7 == 0) {
        (**(code **)(*(int *)param_1[2] + 0x2c))(param_1[2],0);
      }
      else if (param_7 == 4) {
        (**(code **)(*(int *)param_1[2] + 0x2c))(param_1[2],6);
      }
      (**(code **)(*(int *)param_1[1] + 0x44))(param_1[1],1);
      (**(code **)(*(int *)param_1[1] + 0xa4))(param_1[1],0,0x40140000,0,0x3ff00000);
    }
    else if (((param_1[3] == 4) || (param_1[3] == 5)) || (param_1[3] == 6)) {
      (**(code **)(*(int *)param_1[2] + 8))(param_1[2],0,0,param_2,param_3,0);
      (**(code **)(*(int *)param_1[2] + 0x38))(param_1[2],8);
      (**(code **)(*(int *)param_1[1] + 0x44))(param_1[1],0);
      (**(code **)(*(int *)param_1[1] + 0xa4))(param_1[1],0,0x40140000,0,0x3ff00000);
    }
  }
  if (-1 < local_8) {
    (**(code **)(*param_1 + 0x50))(param_1,0,0,0,0x40590000);
    if (((param_7 == 1) || (param_7 == 2)) || (param_7 == 3)) {
      iVar1 = FUN_1017dac0(0);
      param_1[6] = iVar1;
      if (param_1[6] != 0) {
        (*(code *)**(undefined4 **)param_1[6])
                  (param_1[6],param_2,param_3,param_4,7,param_6,param_5 == 1);
        (**(code **)(*(int *)param_1[6] + 4))
                  (param_1[6],0x1eb851ec,0x3fa1eb85,0x7cfa26a2,0x3ed71194);
        (**(code **)(*(int *)param_1[6] + 0x18))(param_1[6],param_1,1,1);
      }
    }
    iVar1 = FUN_101d36b0();
    param_1[7] = iVar1;
    if (param_1[7] != 0) {
      (*(code *)**(undefined4 **)param_1[7])(param_1[7],0);
      (**(code **)(*(int *)param_1[7] + 0x1c))(param_1[7],param_2,param_3);
    }
    iVar1 = FUN_101fb9b0();
    param_1[8] = iVar1;
    if (param_1[8] != 0) {
      (*(code *)**(undefined4 **)param_1[8])(param_1[8],param_2,param_3,param_4,param_6);
      uVar2 = (**(code **)(*(int *)param_1[1] + 0xac))(param_1[1]);
      (**(code **)(*(int *)param_1[8] + 0x14))(param_1[8],uVar2);
      (**(code **)(*(int *)param_1[8] + 0x24))(param_1[8],param_5 != 1);
      (**(code **)(*(int *)param_1[8] + 0x30))(param_1[8],0x18);
    }
  }
  if (local_8 < 0) {
    (**(code **)(*param_1 + 0xc))(param_1,param_9);
  }
  return local_8;
}



//==== FUN_10003e80 @ 10003e80 ====

void FUN_10003e80(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  (**(code **)(*param_1 + 4))(param_1,param_2,param_3,param_4,1,param_5,param_6,param_7,param_8);
  return;
}



//==== FUN_10004b20 @ 10004b20 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10004b20(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  float10 fVar5;
  int *local_2a4;
  undefined4 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined1 local_230;
  undefined4 local_22f;
  int local_214;
  LPCWSTR local_210;
  int *local_20c;
  undefined1 local_208 [248];
  int *local_110;
  int *local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  double local_e4;
  undefined1 local_dc [8];
  undefined1 local_d4 [8];
  undefined1 local_cc [168];
  int *local_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1041620c;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  thunk_FUN_100033a0(">>>> TrafficAnalizer          DeInit 1\n");
  (**(code **)(*param_1 + 0x110))(param_1);
  if (param_1[1] != 0) {
    local_20 = (**(code **)(*(int *)param_1[1] + 0x2c))(param_1[1]);
    thunk_FUN_10001e70();
    local_8 = 0;
    local_ec = 0;
    local_e8 = 0;
    local_f4 = 0;
    local_f0 = 0;
    if (param_2 == (int *)0x0) {
      local_2a4 = (int *)param_1[9];
    }
    else {
      local_2a4 = param_2;
    }
    local_110 = local_2a4;
    if (param_1[0x62] == 1) {
      if (param_1[99] == 1) {
        (**(code **)(*(int *)param_1[6] + 0x30))(param_1[6]);
        param_1[99] = 0;
      }
      iVar1 = (**(code **)(*(int *)param_1[6] + 0x38))(param_1[6],0);
      if (iVar1 == 1) {
        (**(code **)(*(int *)param_1[6] + 0x40))(param_1[6],local_208);
        if (local_110 != (int *)0x0) {
          (**(code **)(*local_110 + 0x28))(local_110,local_208);
        }
        (**(code **)(*(int *)param_1[6] + 0x10))(param_1[6],0);
        param_1[0x62] = 0;
        param_1[100] = 0xf;
      }
      local_110 = (int *)0x0;
    }
    (**(code **)(*(int *)param_1[1] + 0xc))(param_1[1]);
    for (local_1c = 0; local_1c < local_20; local_1c = local_1c + 1) {
      local_24 = (int *)(**(code **)(*(int *)param_1[1] + 0x4c))(param_1[1],local_1c);
      if (local_24 != (int *)0x0) {
        local_10c = (int *)(**(code **)(*local_24 + 0x5c))(local_24);
        iVar1 = (**(code **)(*local_24 + 0x2c))(local_24);
        if (iVar1 == 1) {
          thunk_FUN_10002aa0(local_24);
          local_f8 = 0;
          local_100 = thunk_FUN_1000fff0(local_24,local_d4,local_dc,&local_ec,&local_f4,&local_f8,0)
          ;
          thunk_FUN_10002d20(local_d4,local_dc,&local_ec,&local_f4,local_f8,local_100);
          local_104 = thunk_FUN_100104c0(local_24,&local_fc,&local_f8);
          thunk_FUN_10002e00(local_fc,local_104);
          local_108 = thunk_FUN_10010820(local_24,&local_18);
          thunk_FUN_10002e40(local_18,local_108);
          if (param_1[4] == 0) {
            local_2a4 = (int *)0x3ff00000;
          }
          else {
            local_2a4 = (int *)0x0;
          }
          local_e4 = (double)(ZEXT48(local_2a4) << 0x20);
          local_20c = (int *)0x0;
          if (local_10c == (int *)0x0) {
            local_20c = (int *)(**(code **)(*local_24 + 0x6c))(local_24);
            thunk_FUN_10002e80(local_20c,0);
            if (local_20c == (int *)0x0) {
              thunk_FUN_10002e80(0,0x80040001);
            }
            else {
              fVar5 = (float10)(**(code **)(*local_20c + 0xc))(local_20c);
              local_e4 = (double)fVar5;
            }
          }
          else {
            local_e4 = 0.0;
            local_20c = (int *)(**(code **)(*local_10c + 0x1c))(local_10c);
            thunk_FUN_10002e80(local_20c,0);
            if (local_20c != (int *)0x0) {
              fVar5 = (float10)(**(code **)(*local_20c + 0xc))(local_20c);
              local_e4 = (double)fVar5;
            }
            if ((_DAT_105d3c50 < *(double *)(param_1 + 0x14)) &&
               (fVar5 = (float10)(**(code **)(*local_24 + 0x14))(local_24),
               fVar5 < (float10)*(double *)(param_1 + 0x14))) {
              thunk_FUN_10002c60(1);
            }
          }
          if (*(double *)(param_1 + 0x12) <= local_e4) {
            local_210 = (LPCWSTR)0x0;
            local_234 = DAT_105d3c48;
            local_230 = DAT_105d3c4c;
            puVar4 = &local_22f;
            for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar4 = 0;
              puVar4 = puVar4 + 1;
            }
            *(undefined2 *)puVar4 = 0;
            *(undefined1 *)((int)puVar4 + 2) = 0;
            if (local_20c != (int *)0x0) {
              local_238 = 0xffffffff;
              local_23c = 0xffffffff;
              local_210 = (LPCWSTR)(**(code **)*local_20c)(local_20c,&local_214);
              if ((local_210 != (LPCWSTR)0x0) && (local_214 != 0)) {
                WideCharToMultiByte(0,0,local_210,-1,(LPSTR)&local_234,0x20,(LPCSTR)0x0,(LPBOOL)0x0)
                ;
              }
              (**(code **)(*local_20c + 8))(local_20c,&local_238,&local_23c);
            }
            iVar1 = (**(code **)(*local_24 + 0x18))(local_24);
            if (iVar1 == 0xd0) {
              local_240 = 0xffffffff;
              uVar2 = (**(code **)(*local_24 + 0xc))(local_24);
              local_248 = 0;
              piVar3 = (int *)(**(code **)(*local_24 + 8))(local_24);
              if (piVar3 != (int *)0x0) {
                local_240 = (**(code **)*piVar3)(piVar3);
                local_248 = (**(code **)(*piVar3 + 0xc))(piVar3);
              }
              thunk_FUN_10006c70(1,local_240,uVar2,local_248);
              puVar4 = (undefined4 *)(**(code **)(*local_24 + 0x40))(local_24);
              uVar2 = (**(code **)(*local_24 + 0x18))(local_24,&local_234,*puVar4,puVar4[1]);
              uVar2 = (**(code **)*local_24)(local_24,uVar2);
              thunk_FUN_100033a0(">>>> TrafficAnalizer          DeInit (Disapeared Double) [Id=%d] State=0x%04X (%s) TS=%-I64d\n"
                                 ,uVar2);
            }
            else {
              puVar4 = (undefined4 *)(**(code **)(*local_24 + 0x40))(local_24);
              uVar2 = (**(code **)(*local_24 + 0x18))(local_24,&local_234,*puVar4,puVar4[1]);
              uVar2 = (**(code **)*local_24)(local_24,uVar2);
              thunk_FUN_100033a0(">>>> TrafficAnalizer          DeInit (Disapeared)        [Id=%d] State=0x%04X (%s) TS=%-I64d\n"
                                 ,uVar2);
            }
            if (local_110 != (int *)0x0) {
              uVar2 = (**(code **)(*local_24 + 0x40))(local_24);
              (**(code **)(*local_110 + 4))(local_110,local_cc,uVar2);
            }
          }
        }
        if (local_10c != (int *)0x0) {
          (**(code **)(*local_24 + 0x58))(local_24,0);
          (**(code **)(*local_10c + 4))(local_10c);
        }
      }
    }
    (*(code *)**(undefined4 **)param_1[1])(param_1[1]);
    param_1[1] = 0;
    local_8 = 0xffffffff;
    thunk_FUN_10002fa0();
  }
  param_1[2] = 0;
  if (param_1[0x68] != 0) {
    (**(code **)(*(int *)param_1[0x68] + 8))(param_1[0x68]);
    (*(code *)**(undefined4 **)param_1[0x68])(param_1[0x68]);
    param_1[0x68] = 0;
  }
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 500;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  (**(code **)(*param_1 + 0xfc))(param_1);
  param_1[0x22] = 0;
  param_1[0x1e] = 0;
  if (param_1[0x1f] != 0) {
    thunk_FUN_100039f0(param_1[0x1f]);
    param_1[0x1f] = 0;
  }
  if (param_1[0x20] != 0) {
    if ((undefined4 *)param_1[0x20] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x20])(3);
    }
    param_1[0x20] = 0;
  }
  if (param_1[0x21] != 0) {
    thunk_FUN_100039f0(param_1[0x21]);
    param_1[0x21] = 0;
  }
  param_1[0x44] = 0;
  thunk_FUN_1000bb40();
  param_1[0x4e] = 0;
  if (param_1[0x4f] != 0) {
    thunk_FUN_100039f0(param_1[0x4f]);
    param_1[0x4f] = 0;
  }
  param_1[0x50] = 0;
  if (param_1[4] == 0) {
    thunk_FUN_100033a0(">>>> TrafficAnalizer          DeInit 2\n");
  }
  else {
    (**(code **)(*(int *)param_1[4] + 8))(param_1[4]);
    (*(code *)**(undefined4 **)param_1[4])(param_1[4]);
    param_1[4] = 0;
    thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) DeInit 2\n");
  }
  param_1[0x65] = 0;
  if (param_1[5] != 0) {
    (**(code **)(*(int *)param_1[5] + 0x18))(param_1[5]);
    (**(code **)(*(int *)param_1[5] + 8))(param_1[5]);
    param_1[5] = 0;
  }
  if (param_1[6] != 0) {
    (**(code **)(*(int *)param_1[6] + 0xc))(param_1[6]);
    (**(code **)(*(int *)param_1[6] + 0x14))(param_1[6]);
    param_1[6] = 0;
  }
  if (param_1[7] != 0) {
    (**(code **)(*(int *)param_1[7] + 4))(param_1[7]);
    (**(code **)(*(int *)param_1[7] + 8))(param_1[7]);
    param_1[7] = 0;
  }
  if (param_1[8] != 0) {
    (**(code **)(*(int *)param_1[8] + 0xc))(param_1[8]);
    (**(code **)(*(int *)param_1[8] + 8))(param_1[8]);
    param_1[8] = 0;
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x3ff00000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x3ff00000;
  param_1[0x10] = 0;
  param_1[0x11] = 0x40568000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0x33333333;
  param_1[0x13] = 0x3fd33333;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x3ff00000;
  param_1[0x66] = 0;
  param_1[0x67] = 30000;
  param_1[0x51] = 0;
  param_1[0x52] = 0x32;
  ExceptionList = local_10;
  return local_14;
}



//==== FUN_10005b10 @ 10005b10 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10005b10(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  float10 fVar5;
  int *local_198;
  undefined4 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined1 local_138;
  undefined4 local_137;
  int local_11c;
  LPCWSTR local_118;
  int *local_114;
  uint local_110;
  uint local_10c;
  undefined4 local_108;
  int *local_104;
  int *local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  double local_d8;
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  undefined1 local_c0 [168];
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1041622c;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  thunk_FUN_100033a0(">>>> TrafficAnalizer          Reset 1\n");
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_10001e70();
    local_8 = 0;
    local_e0 = 0;
    local_dc = 0;
    local_e8 = 0;
    local_e4 = 0;
    if (param_2 == (int *)0x0) {
      local_198 = *(int **)(param_1 + 0x24);
    }
    else {
      local_198 = param_2;
    }
    local_104 = local_198;
    if (*(int *)(param_1 + 0x188) == 1) {
      local_104 = (int *)0x0;
    }
    (**(code **)(**(int **)(param_1 + 4) + 0xc))(*(undefined4 *)(param_1 + 4));
    local_110 = (**(code **)(**(int **)(param_1 + 4) + 0x2c))(*(undefined4 *)(param_1 + 4));
    for (local_10c = 0; local_10c < local_110; local_10c = local_10c + 1) {
      local_18 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x4c))
                                  (*(undefined4 *)(param_1 + 4),local_10c);
      if (local_18 != (int *)0x0) {
        local_100 = (int *)(**(code **)(*local_18 + 0x5c))(local_18);
        iVar1 = (**(code **)(*local_18 + 0x2c))(local_18);
        if (iVar1 == 1) {
          thunk_FUN_10002aa0(local_18);
          local_ec = 0;
          local_f4 = thunk_FUN_1000fff0(local_18,local_c8,local_d0,&local_e0,&local_e8,&local_ec,0);
          thunk_FUN_10002d20(local_c8,local_d0,&local_e0,&local_e8,local_ec,local_f4);
          local_f8 = thunk_FUN_100104c0(local_18,&local_f0,&local_ec);
          thunk_FUN_10002e00(local_f0,local_f8);
          local_fc = thunk_FUN_10010820(local_18,&local_108);
          thunk_FUN_10002e40(local_108,local_fc);
          if (*(int *)(param_1 + 0x10) == 0) {
            local_198 = (int *)0x3ff00000;
          }
          else {
            local_198 = (int *)0x0;
          }
          local_d8 = (double)(ZEXT48(local_198) << 0x20);
          local_114 = (int *)0x0;
          if (local_100 == (int *)0x0) {
            local_114 = (int *)(**(code **)(*local_18 + 0x6c))(local_18);
            thunk_FUN_10002e80(local_114,0);
            if (local_114 == (int *)0x0) {
              thunk_FUN_10002e80(0,0x80040001);
            }
            else {
              fVar5 = (float10)(**(code **)(*local_114 + 0xc))(local_114);
              local_d8 = (double)fVar5;
            }
          }
          else {
            local_d8 = 0.0;
            local_114 = (int *)(**(code **)(*local_100 + 0x1c))(local_100);
            thunk_FUN_10002e80(local_114,0);
            if (local_114 != (int *)0x0) {
              fVar5 = (float10)(**(code **)(*local_114 + 0xc))(local_114);
              local_d8 = (double)fVar5;
            }
            if ((_DAT_105d3c50 < *(double *)(param_1 + 0x50)) &&
               (fVar5 = (float10)(**(code **)(*local_18 + 0x14))(local_18),
               fVar5 < (float10)*(double *)(param_1 + 0x50))) {
              thunk_FUN_10002c60(1);
            }
          }
          if (*(double *)(param_1 + 0x48) <= local_d8) {
            local_118 = (LPCWSTR)0x0;
            local_13c = DAT_105d3c48;
            local_138 = DAT_105d3c4c;
            puVar4 = &local_137;
            for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar4 = 0;
              puVar4 = puVar4 + 1;
            }
            *(undefined2 *)puVar4 = 0;
            *(undefined1 *)((int)puVar4 + 2) = 0;
            if (local_114 != (int *)0x0) {
              local_140 = 0xffffffff;
              local_144 = 0xffffffff;
              local_118 = (LPCWSTR)(**(code **)*local_114)(local_114,&local_11c);
              if ((local_118 != (LPCWSTR)0x0) && (local_11c != 0)) {
                WideCharToMultiByte(0,0,local_118,-1,(LPSTR)&local_13c,0x20,(LPCSTR)0x0,(LPBOOL)0x0)
                ;
              }
              (**(code **)(*local_114 + 8))(local_114,&local_140,&local_144);
            }
            iVar1 = (**(code **)(*local_18 + 0x18))(local_18);
            if (iVar1 == 0xd0) {
              local_148 = 0xffffffff;
              uVar2 = (**(code **)(*local_18 + 0xc))(local_18);
              local_150 = 0;
              piVar3 = (int *)(**(code **)(*local_18 + 8))(local_18);
              if (piVar3 != (int *)0x0) {
                local_148 = (**(code **)*piVar3)(piVar3);
                local_150 = (**(code **)(*piVar3 + 0xc))(piVar3);
              }
              thunk_FUN_10006c70(1,local_148,uVar2,local_150);
              puVar4 = (undefined4 *)(**(code **)(*local_18 + 0x40))(local_18);
              uVar2 = (**(code **)(*local_18 + 0x18))(local_18,&local_13c,*puVar4,puVar4[1]);
              uVar2 = (**(code **)*local_18)(local_18,uVar2);
              thunk_FUN_100033a0(">>>> TrafficAnalizer          Reset (Disapeared Double) [Id=%d] State=0x%04X (%s) TS=%-I64d\n"
                                 ,uVar2);
            }
            else {
              puVar4 = (undefined4 *)(**(code **)(*local_18 + 0x40))(local_18);
              uVar2 = (**(code **)(*local_18 + 0x18))(local_18,&local_13c,*puVar4,puVar4[1]);
              uVar2 = (**(code **)*local_18)(local_18,uVar2);
              thunk_FUN_100033a0(">>>> TrafficAnalizer          Reset (Disapeared)        [Id=%d] State=0x%04X (%s) TS=%-I64d\n"
                                 ,uVar2);
            }
            if (local_104 != (int *)0x0) {
              uVar2 = (**(code **)(*local_18 + 0x40))(local_18);
              (**(code **)(*local_104 + 4))(local_104,local_c0,uVar2);
            }
          }
        }
        if (local_100 != (int *)0x0) {
          (**(code **)(*local_18 + 0x58))(local_18,0);
          (**(code **)(*local_100 + 4))(local_100);
        }
      }
    }
    local_8 = 0xffffffff;
    thunk_FUN_10002fa0();
  }
  if (*(int *)(param_1 + 0x1a0) != 0) {
    (**(code **)(**(int **)(param_1 + 0x1a0) + 0xc))(*(undefined4 *)(param_1 + 0x1a0));
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x28))(*(undefined4 *)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 0xc))(*(undefined4 *)(param_1 + 0x1c));
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 4))(*(undefined4 *)(param_1 + 0x20));
  }
  thunk_FUN_100033a0(">>>> TrafficAnalizer          Reset 2\n");
  ExceptionList = local_10;
  return local_14;
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



//==== FUN_10006600 @ 10006600 ====

undefined4 FUN_10006600(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1[2] == 0) {
    uVar1 = 0x80040001;
  }
  else if (param_1[3] == 2) {
    uVar1 = (*(code *)**(undefined4 **)param_1[2])(param_1[2],0,0,param_2);
  }
  else if (((param_1[3] == 4) || (param_1[3] == 5)) || (param_1[3] == 6)) {
    (**(code **)(*param_1 + 0x10))(param_1,0);
    uVar1 = (**(code **)(*(int *)param_1[4] + 0xc))(param_1[4],0,0,param_2);
    uVar2 = (**(code **)(*(int *)param_1[4] + 0x80))(param_1[4]);
    (**(code **)(*(int *)param_1[2] + 0x50))(param_1[2],uVar2);
  }
  else {
    uVar1 = 0x4000e;
  }
  return uVar1;
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



//==== FUN_10006ba0 @ 10006ba0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_10006ba0(int param_1,undefined4 param_2)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    fVar1 = (float10)_DAT_105d3c50;
  }
  else if ((((*(int *)(param_1 + 0xc) == 4) || (*(int *)(param_1 + 0xc) == 5)) ||
           (*(int *)(param_1 + 0xc) == 6)) && (*(int *)(param_1 + 0x10) != 0)) {
    fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0x10) + 0x54))
                               (*(undefined4 *)(param_1 + 0x10),param_2);
  }
  else {
    fVar1 = (float10)_DAT_105d4140;
  }
  return fVar1;
}



//==== FUN_10006550 @ 10006550 ====

undefined4
FUN_10006550(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  
  *param_5 = 0;
  *param_4 = 0;
  *param_3 = 0;
  if (((*(int *)(param_1 + 0xc) == 4) || (*(int *)(param_1 + 0xc) == 5)) ||
     (*(int *)(param_1 + 0xc) == 6)) {
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar1 = 0x80040001;
    }
    else {
      uVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x14))
                        (*(undefined4 *)(param_1 + 0x10),param_3,param_4,param_5,param_2);
    }
  }
  else {
    uVar1 = 0x8004000e;
  }
  return uVar1;
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



//==== FUN_100068d0 @ 100068d0 ====

undefined4 FUN_100068d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = 0;
  }
  else if ((((*(int *)(param_1 + 0xc) == 4) || (*(int *)(param_1 + 0xc) == 5)) ||
           (*(int *)(param_1 + 0xc) == 6)) && (*(int *)(param_1 + 0x10) != 0)) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x3c))
                      (*(undefined4 *)(param_1 + 0x10),param_2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== FUN_10006f20 @ 10006f20 ====

void FUN_10006f20(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  undefined4 local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined1 local_8;
  
  local_8c = 4;
  local_8 = 1;
  local_88 = param_2;
  local_48 = param_3;
  local_84 = param_2 + param_4 + -1;
  local_44 = param_3;
  local_80 = param_2 + param_4 + -1;
  local_40 = param_3 + param_5 + -1;
  local_7c = param_2;
  local_3c = param_3 + param_5 + -1;
  (**(code **)(*param_1 + 0x3c))(param_1,&local_8c,param_6);
  return;
}



//==== FUN_100071f0 @ 100071f0 ====

int FUN_100071f0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 local_98;
  undefined1 local_94 [64];
  undefined1 local_54 [64];
  undefined1 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1041624c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(*param_1 + 0x40))(param_1,&local_98,param_6);
  if (-1 < iVar1) {
    thunk_FUN_100072e0(local_98,local_94,local_54,local_14);
    local_8 = 0;
    thunk_FUN_10007520(param_2,param_3,param_4,param_5);
    local_8 = 0xffffffff;
    thunk_FUN_10007340();
  }
  ExceptionList = local_10;
  return iVar1;
}



//==== FUN_10007ab0 @ 10007ab0 ====

int FUN_10007ab0(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1041626c;
  local_10 = ExceptionList;
  if ((*(int *)(param_1 + 8) == 0) || (*(int *)(param_1 + 4) == 0)) {
    local_14 = -0x7ffbffff;
  }
  else if (param_2 == (int *)0x0) {
    local_14 = 1;
  }
  else if (*param_2 == 0) {
    local_14 = 1;
  }
  else {
    ExceptionList = &local_10;
    local_14 = (**(code **)(**(int **)(param_1 + 4) + 0x70))
                         (*(undefined4 *)(param_1 + 4),*param_2,param_2 + 1,param_2 + 0x11,
                          (char)param_2[0x21]);
    local_18 = 0;
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
    if (-1 < local_14) {
      thunk_FUN_100072e0(*param_2,param_2 + 1,param_2 + 0x11,(char)param_2[0x21]);
      local_8 = 0;
      thunk_FUN_10007520(&local_18,&local_1c,&local_20,&local_24);
      local_8 = 0xffffffff;
      thunk_FUN_10007340();
      if (*(int *)(param_1 + 0xc) == 2) {
        thunk_FUN_100033a0(">>>> TrafficAnalizer(AdaBoost) SetROIEx%02d (%d) %d,%d,%d,%d\n",param_3,
                           *param_2,local_18,local_1c,local_20,local_24);
        local_14 = (**(code **)(**(int **)(param_1 + 8) + 0x10))
                             (*(undefined4 *)(param_1 + 8),*param_2,param_2 + 1,param_2 + 0x11,
                              param_3,(char)param_2[0x21]);
      }
      else if (*(int *)(param_1 + 0xc) == 4) {
        thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) V3 SetROIEx%02d (%d) %d,%d,%d,%d\n",
                           param_3,*param_2,local_18,local_1c,local_20,local_24);
        local_14 = (**(code **)(**(int **)(param_1 + 8) + 0x10))
                             (*(undefined4 *)(param_1 + 8),*param_2,param_2 + 1,param_2 + 0x11,
                              param_3,(char)param_2[0x21]);
      }
      else if ((*(int *)(param_1 + 0xc) == 5) || (*(int *)(param_1 + 0xc) == 6)) {
        thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) SetROIEx%02d (%d) %d,%d,%d,%d\n",param_3,
                           *param_2,local_18,local_1c,local_20,local_24);
        local_14 = (**(code **)(**(int **)(param_1 + 8) + 0x10))
                             (*(undefined4 *)(param_1 + 8),*param_2,param_2 + 1,param_2 + 0x11,
                              param_3,(char)param_2[0x21]);
      }
      else {
        local_14 = 0x4000e;
      }
      if (-1 < local_14) {
        FUN_10208650(param_1 + 0x88,param_2,0x88);
      }
    }
  }
  ExceptionList = local_10;
  return local_14;
}



//==== FUN_10007fe0 @ 10007fe0 ====

undefined4 FUN_10007fe0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 8) == 0) || (*(int *)(param_1 + 4) == 0)) {
    uVar1 = 0x80040001;
  }
  else if (*(int *)(param_1 + 0x88) == 0) {
    uVar1 = 0x80040001;
  }
  else {
    FUN_10208650(param_2,param_1 + 0x88,0x88);
    uVar1 = 0;
  }
  return uVar1;
}



//==== FUN_10008290 @ 10008290 ====

int FUN_10008290(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                int param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  if (param_4 < param_3) {
    thunk_FUN_100033a0(">>>> TrafficAnalizer (ERROR)   SetObjectSizeRange%02d FLIPPED (%d - %d)\n",
                       param_2,param_3,param_4);
    local_8 = -0x7ffbfffd;
  }
  else {
    local_8 = 0x80040001;
    if (*(int *)(param_1 + 8) == 0) {
      local_8 = -0x7ffbffff;
    }
    else if (*(int *)(param_1 + 0xc) == 2) {
      thunk_FUN_100033a0(">>>> TrafficAnalizer(AdaBoost) SetObjectSizeRange Requested(%d) (%d - %d)\n"
                         ,param_2,param_3,param_4);
      local_8 = (**(code **)(**(int **)(param_1 + 8) + 0x14))
                          (*(undefined4 *)(param_1 + 8),param_3,param_4,param_2);
      (**(code **)(**(int **)(param_1 + 8) + 0x18))
                (*(undefined4 *)(param_1 + 8),&param_3,&param_4,param_2);
      thunk_FUN_100033a0(">>>> TrafficAnalizer(AdaBoost) SetObjectSizeRange Used     (%d) %d - %d\n"
                         ,param_2,param_3,param_4);
    }
    else if (((*(int *)(param_1 + 0xc) == 4) || (*(int *)(param_1 + 0xc) == 5)) ||
            (*(int *)(param_1 + 0xc) == 6)) {
      if (*(int *)(param_1 + 0x2c) + -1 < param_6) {
        param_6 = *(int *)(param_1 + 0x2c) + -1;
      }
      thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) SetObjectSizeRange%02d (%d[%d] - %d[%d])\n",
                         param_2,param_3,param_5,param_4,param_6);
      local_8 = (**(code **)(**(int **)(param_1 + 8) + 0x1c))
                          (*(undefined4 *)(param_1 + 8),param_5,param_6,param_2);
      if (-1 < local_8) {
        local_8 = (**(code **)(**(int **)(param_1 + 8) + 0x14))
                            (*(undefined4 *)(param_1 + 8),param_3,param_4,param_2);
      }
      (**(code **)(**(int **)(param_1 + 8) + 0x18))
                (*(undefined4 *)(param_1 + 8),&local_c,&local_10,param_2);
      thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) SetObjectSizeRange%02d Used (%d - %d)\n",
                         param_2,local_c,local_10);
      if (((-1 < local_8) && (*(int *)(param_1 + 0x14) != 0)) &&
         (iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x18))
                            (*(undefined4 *)(param_1 + 8),&local_c,&local_10,param_2), -1 < iVar1))
      {
        piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x14) + 0x24))
                                  (*(undefined4 *)(param_1 + 0x14),local_c,local_10);
        (**(code **)(*piVar2 + 4))(piVar2);
      }
    }
    else {
      local_8 = 0x4000e;
    }
  }
  return local_8;
}



//==== FUN_10008530 @ 10008530 ====

undefined4
FUN_10008530(int param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 local_1c;
  int local_18;
  int local_14 [2];
  int local_c;
  int local_8;
  
  *param_5 = 0;
  *param_6 = 0x7fffffff;
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = 0x80040001;
  }
  else if (*(int *)(param_1 + 0xc) == 2) {
    uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x18))
                      (*(undefined4 *)(param_1 + 8),param_3,param_4,param_2);
  }
  else if (*(int *)(param_1 + 0xc) == 4) {
    uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x18))
                      (*(undefined4 *)(param_1 + 8),&local_8,&local_c,param_2);
    *param_3 = local_8;
    *param_4 = local_c;
  }
  else if ((*(int *)(param_1 + 0xc) == 5) || (*(int *)(param_1 + 0xc) == 6)) {
    local_1c = 0;
    uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x18))
                      (*(undefined4 *)(param_1 + 8),local_14,&local_18,param_2);
    local_14[0] = (local_14[0] + local_18) / 2;
    if (local_14[0] < 1) {
      local_14[0] = local_18 / 2;
    }
    (**(code **)(**(int **)(param_1 + 8) + 0x24))
              (*(undefined4 *)(param_1 + 8),local_14[0],&local_1c,param_2);
    *param_3 = local_14[0];
    *param_5 = local_1c;
    *param_4 = local_18;
    *param_6 = *(undefined4 *)(param_1 + 0x2c);
  }
  else {
    uVar1 = 0x4000e;
  }
  return uVar1;
}



//==== FUN_100086d0 @ 100086d0 ====

undefined4 FUN_100086d0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = 0x80040001;
  }
  else if (*(int *)(param_1 + 0xc) == 2) {
    uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x18))
                      (*(undefined4 *)(param_1 + 8),param_3,param_4,param_2);
  }
  else if (((*(int *)(param_1 + 0xc) == 4) || (*(int *)(param_1 + 0xc) == 5)) ||
          (*(int *)(param_1 + 0xc) == 6)) {
    uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x18))
                      (*(undefined4 *)(param_1 + 8),&local_8,&local_c,param_2);
    *param_3 = local_8;
    *param_4 = local_c;
  }
  else {
    uVar1 = 0x4000e;
  }
  return uVar1;
}



//==== FUN_10008050 @ 10008050 ====

int FUN_10008050(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(param_1 + 0x1a8) = param_2;
  *(undefined4 *)(param_1 + 0x1ac) = param_3;
  *(undefined4 *)(param_1 + 0x1b0) = param_4;
  *(undefined4 *)(param_1 + 0x1b4) = param_5;
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xac))(*(undefined4 *)(param_1 + 4));
  iVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1);
  if (iVar2 == 0) {
    (**(code **)(**(int **)(param_1 + 0x1a0) + 0x18))(*(undefined4 *)(param_1 + 0x1a0),0,0,0);
    iVar3 = 0;
  }
  else {
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xac))(*(undefined4 *)(param_1 + 4));
    iVar2 = (**(code **)(*piVar1 + 0x80))(piVar1);
    uVar4 = thunk_FUN_10003930(iVar2 << 2);
    uVar5 = thunk_FUN_10003930(iVar2 << 2);
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xac))
                              (*(undefined4 *)(param_1 + 4),param_2,param_3,param_4,param_5,uVar4,
                               uVar5);
    iVar3 = (**(code **)(*piVar1 + 0x84))(piVar1);
    if (-1 < iVar3) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x1a0) + 0x18))
                        (*(undefined4 *)(param_1 + 0x1a0),uVar4,uVar5,iVar2);
      thunk_FUN_100039f0(uVar4);
      thunk_FUN_100039f0(uVar5);
    }
  }
  return iVar3;
}



//==== FUN_10008230 @ 10008230 ====

undefined4 FUN_10008230(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 0x1a8);
  param_2[1] = *(undefined4 *)(param_1 + 0x1ac);
  *param_3 = *(undefined4 *)(param_1 + 0x1b0);
  param_3[1] = *(undefined4 *)(param_1 + 0x1b4);
  return 0;
}



//==== FUN_100087a0 @ 100087a0 ====

int FUN_100087a0(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1[4] == 0) {
    iVar1 = 0x4000e;
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1,0);
    iVar1 = (**(code **)(*(int *)param_1[4] + 0x1c))(param_1[4],param_2);
    if ((param_1[5] != 0) && (-1 < iVar1)) {
      (**(code **)(*(int *)param_1[5] + 0x20))(param_1[5],param_2 << 2);
    }
  }
  return iVar1;
}



//==== FUN_10008b00 @ 10008b00 ====

undefined4 FUN_10008b00(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    *param_2 = 0;
    uVar1 = 0x4000e;
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))(*(undefined4 *)(param_1 + 0x10));
    *param_2 = uVar1;
    uVar1 = 0;
  }
  return uVar1;
}



//==== FUN_10008840 @ 10008840 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10008840(int param_1,double *param_2)

{
  int local_4c;
  
  if (_DAT_105d3c50 <= *param_2) {
    if (*param_2 <= _DAT_105d4140) {
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)param_2;
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)((int)param_2 + 4);
    }
    else {
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0x3ff00000;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    if (*(double *)(param_1 + 0x50) <= *(double *)(param_1 + 0x48)) {
      local_4c = param_1 + 0x48;
    }
    else {
      local_4c = param_1 + 0x50;
    }
    (**(code **)(**(int **)(param_1 + 4) + 0x5c))(*(undefined4 *)(param_1 + 4),local_4c);
    if (((*(int *)(param_1 + 0xc) == 4) || (*(int *)(param_1 + 0xc) == 5)) ||
       (*(int *)(param_1 + 0xc) == 6)) {
      thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) SetConfidenceThreshold - %lf\n",
                         *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
    }
  }
  return 0;
}



//==== FUN_10008970 @ 10008970 ====

undefined4 FUN_10008970(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x48);
  param_2[1] = *(undefined4 *)(param_1 + 0x4c);
  return 0;
}



//==== FUN_100089a0 @ 100089a0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100089a0(int param_1,double *param_2)

{
  int local_4c;
  
  if (_DAT_105d3c50 <= *param_2) {
    if (*param_2 <= _DAT_105d4140) {
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)param_2;
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)((int)param_2 + 4);
    }
    else {
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0x3ff00000;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    if (*(double *)(param_1 + 0x50) <= *(double *)(param_1 + 0x48)) {
      local_4c = param_1 + 0x48;
    }
    else {
      local_4c = param_1 + 0x50;
    }
    (**(code **)(**(int **)(param_1 + 4) + 0x5c))(*(undefined4 *)(param_1 + 4),local_4c);
    if (((*(int *)(param_1 + 0xc) == 4) || (*(int *)(param_1 + 0xc) == 5)) ||
       (*(int *)(param_1 + 0xc) == 6)) {
      thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) SetCurrentConfidenceThreshold - %lf\n",
                         *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
    }
  }
  return 0;
}



//==== FUN_10008ad0 @ 10008ad0 ====

undefined4 FUN_10008ad0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x50);
  param_2[1] = *(undefined4 *)(param_1 + 0x54);
  return 0;
}



//==== FUN_10008b60 @ 10008b60 ====

undefined4 FUN_10008b60(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0x80040001;
  }
  else {
    (**(code **)(**(int **)(param_1 + 4) + 0x54))(*(undefined4 *)(param_1 + 4),param_2);
    uVar1 = 0;
  }
  return uVar1;
}



//==== FUN_10008bb0 @ 10008bb0 ====

undefined4 FUN_10008bb0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x58))(*(undefined4 *)(param_1 + 4));
  }
  return uVar1;
}



//==== FUN_10008c00 @ 10008c00 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10008c00(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 *param_5,double param_6)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  
  if (param_1[1] == 0) {
    iVar1 = -0x7ffbffff;
  }
  else {
    fVar3 = (float10)FUN_10209304(param_6 / _DAT_105d47a0);
    *(double *)(param_1 + 0x1a) = (double)fVar3;
    piVar2 = (int *)(**(code **)(*(int *)param_1[1] + 0xac))
                              (param_1[1],param_2,param_3,param_4,param_5);
    iVar1 = (**(code **)(*piVar2 + 8))(piVar2);
    if (param_1[7] != 0) {
      (**(code **)(*(int *)param_1[7] + 0x14))(param_1[7],param_2,param_3,param_4,param_5);
    }
    if (param_1[8] != 0) {
      (**(code **)(*(int *)param_1[8] + 0x10))(param_1[8]);
    }
    if (-1 < iVar1) {
      (**(code **)(*param_1 + 0x50))
                (param_1,param_1[0x6a],param_1[0x6b],param_1[0x6c],param_1[0x6d]);
    }
    if (iVar1 < 0) {
      thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) CalcPerspective. FAIL. Factor = %5.3lf\n",
                         param_1[0x1c],param_1[0x1d]);
    }
    else {
      thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) CalcPerspective. OK. Factor = %5.3lf\n",
                         param_1[0x1c],param_1[0x1d]);
    }
    thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) CalcPerspective. pel_x={%4.2f,%4.2f,%4.2f,%4.2f}\n"
                       ,*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],param_2[6],
                       param_2[7]);
    thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) CalcPerspective. pel_y={%4.2f,%4.2f,%4.2f,%4.2f}\n"
                       ,*param_3,param_3[1],param_3[2],param_3[3],param_3[4],param_3[5],param_3[6],
                       param_3[7]);
    thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) CalcPerspective. meter_x={%4.2f,%4.2f,%4.2f,%4.2f}\n"
                       ,*param_4,param_4[1],param_4[2],param_4[3],param_4[4],param_4[5],param_4[6],
                       param_4[7]);
    thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) CalcPerspective. meter_y={%4.2f,%4.2f,%4.2f,%4.2f}\n"
                       ,*param_5,param_5[1],param_5[2],param_5[3],param_5[4],param_5[5],param_5[6],
                       param_5[7]);
  }
  return iVar1;
}



//==== FUN_100091f0 @ 100091f0 ====

undefined4 FUN_100091f0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0x80040001;
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0x3ff00000;
    thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) ClearPerspective\n");
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xac))(*(undefined4 *)(param_1 + 4));
    (**(code **)(*piVar2 + 0x10))(piVar2);
    uVar1 = 0;
  }
  return uVar1;
}



//==== FUN_10009270 @ 10009270 ====

undefined4 FUN_10009270(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xac))(*(undefined4 *)(param_1 + 4));
    uVar1 = (**(code **)(*piVar2 + 0x1c))(piVar2);
  }
  return uVar1;
}



//==== FUN_100092d0 @ 100092d0 ====

undefined4
FUN_100092d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0x80040001;
  }
  else {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xac))
                              (*(undefined4 *)(param_1 + 4),param_2,param_3,param_4,param_5,param_6,
                               param_7);
    uVar1 = (**(code **)(*piVar2 + 0x14))(piVar2);
  }
  return uVar1;
}



//==== FUN_10009350 @ 10009350 ====

undefined4
FUN_10009350(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0x80040001;
  }
  else {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xac))
                              (*(undefined4 *)(param_1 + 4),param_2,param_3,param_4,param_5,param_6,
                               param_7);
    uVar1 = (**(code **)(*piVar2 + 0x18))(piVar2);
  }
  return uVar1;
}



//==== FUN_10009da0 @ 10009da0 ====

undefined4 FUN_10009da0(int param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint *local_94;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_104162ab;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x7c) != 0) {
    ExceptionList = &local_10;
    thunk_FUN_100039f0(*(undefined4 *)(param_1 + 0x7c));
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    if (*(undefined4 **)(param_1 + 0x80) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x80))(3);
    }
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    thunk_FUN_100039f0(*(undefined4 *)(param_1 + 0x84));
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  uVar2 = thunk_FUN_10003930(param_2 * 0x30);
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  if (*(int *)(param_1 + 0x7c) == 0) {
    uVar2 = 0x8004000c;
  }
  else {
    local_14 = param_2;
    local_94 = (uint *)thunk_FUN_10003930(param_2 * 0x10c + 4);
    local_8 = 0;
    if (local_94 == (uint *)0x0) {
      local_94 = (uint *)0x0;
    }
    else {
      *local_94 = local_14;
      FUN_1020939e(local_94 + 1,0x10c,local_14,&LAB_10001217,thunk_FUN_10007340);
      local_94 = local_94 + 1;
    }
    local_8 = 0xffffffff;
    *(uint **)(param_1 + 0x80) = local_94;
    if (*(int *)(param_1 + 0x7c) == 0) {
      if (*(int *)(param_1 + 0x7c) != 0) {
        thunk_FUN_100039f0(*(undefined4 *)(param_1 + 0x7c));
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
      uVar2 = 0x8004000c;
    }
    else {
      uVar2 = thunk_FUN_10003930(param_2 << 4);
      *(undefined4 *)(param_1 + 0x84) = uVar2;
      if (*(int *)(param_1 + 0x84) == 0) {
        if (*(int *)(param_1 + 0x7c) != 0) {
          thunk_FUN_100039f0(*(undefined4 *)(param_1 + 0x7c));
          *(undefined4 *)(param_1 + 0x7c) = 0;
        }
        if (*(int *)(param_1 + 0x80) != 0) {
          if (*(undefined4 **)(param_1 + 0x80) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(param_1 + 0x80))(3);
          }
          *(undefined4 *)(param_1 + 0x80) = 0;
        }
        uVar2 = 0x8004000c;
      }
      else {
        *(uint *)(param_1 + 0x78) = param_2;
        FUN_10208650(*(undefined4 *)(param_1 + 0x7c),param_3,param_2 * 0x30);
        thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) SetLaneStructure (Lanes=%-d)\n",param_2);
        for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
          thunk_FUN_100033a0(&DAT_105d4cd8,local_18,
                             *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x20 + local_18 * 0x30),
                             *(undefined4 *)(*(int *)(param_1 + 0x7c) + local_18 * 0x30),
                             *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x10 + local_18 * 0x30),
                             *(undefined4 *)(*(int *)(param_1 + 0x7c) + 4 + local_18 * 0x30),
                             *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x14 + local_18 * 0x30),
                             *(undefined4 *)(*(int *)(param_1 + 0x7c) + 8 + local_18 * 0x30),
                             *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x18 + local_18 * 0x30),
                             *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0xc + local_18 * 0x30),
                             *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x1c + local_18 * 0x30));
          thunk_FUN_10007370(4);
          thunk_FUN_100073c0(local_18 * 0x30 + *(int *)(param_1 + 0x7c),
                             *(int *)(param_1 + 0x7c) + 0x10 + local_18 * 0x30,1);
          *(uint *)(*(int *)(param_1 + 0x84) + 8 + local_18 * 0x10) =
               (uint)(*(int *)(param_1 + 0x2c) << 1) / 3;
          cVar1 = thunk_FUN_1000a400(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8 + local_18 * 0x10)
                                     ,&local_1c,&local_20);
          if (cVar1 == '\x01') {
            if (local_20 - local_1c < 1) {
              local_94 = (uint *)-(local_20 - local_1c);
            }
            else {
              local_94 = (uint *)(local_20 - local_1c);
            }
            *(uint **)(*(int *)(param_1 + 0x84) + 4 + local_18 * 0x10) = local_94;
            *(int *)(local_18 * 0x10 + *(int *)(param_1 + 0x84)) = (local_20 + 1 + local_1c) / 2;
          }
          else {
            *(undefined4 *)(*(int *)(param_1 + 0x84) + 4 + local_18 * 0x10) = 0;
            *(undefined4 *)(local_18 * 0x10 + *(int *)(param_1 + 0x84)) = 0;
          }
          *(undefined4 *)(*(int *)(param_1 + 0x84) + 0xc + local_18 * 0x10) = 0;
        }
        thunk_FUN_1000b8c0();
        uVar2 = 0;
      }
    }
  }
  ExceptionList = local_10;
  return uVar2;
}



//==== FUN_1000bbc0 @ 1000bbc0 ====

int FUN_1000bbc0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_8;
  
  if (*(int *)(param_1 + 0x80) != 0) {
    for (local_8 = 0; local_8 < *(int *)(param_1 + 0x78); local_8 = local_8 + 1) {
      uVar1 = __ftol();
      uVar2 = __ftol(uVar1);
      iVar3 = thunk_FUN_1000a560(uVar2,uVar1);
      if (iVar3 != 0) break;
    }
  }
  if (*(int *)(param_1 + 0x78) <= local_8) {
    local_8 = -1;
  }
  uVar1 = __ftol();
  uVar1 = __ftol(uVar1);
  thunk_FUN_100033a0(&DAT_105d4e68,local_8,uVar1);
  return local_8;
}



//==== FUN_10007000 @ 10007000 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10007000(int param_1,double *param_2,double *param_3)

{
  undefined4 uVar1;
  double local_4c;
  
  thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) SetLPHorizAngle: angle=%-lf scale=%lf\n",
                     *(undefined4 *)param_2,*(undefined4 *)((int)param_2 + 4),*(undefined4 *)param_3
                     ,*(undefined4 *)((int)param_3 + 4));
  if (*param_2 < _DAT_105d41a0) {
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((int)param_2 + 4) = 0xc03e0000;
  }
  if (_DAT_105d4190 < *param_2) {
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((int)param_2 + 4) = 0x403e0000;
  }
  if (*param_2 <= _DAT_105d3c50) {
    local_4c = -*param_2;
  }
  else {
    local_4c = *param_2;
  }
  if (_DAT_105d4180 <= local_4c) {
    if (*param_3 < _DAT_105d4170) {
      *(undefined4 *)param_3 = 0x9999999a;
      *(undefined4 *)((int)param_3 + 4) = 0x3fb99999;
    }
    if (_DAT_105d4160 < *param_3) {
      *(undefined4 *)param_3 = 0x66666666;
      *(undefined4 *)((int)param_3 + 4) = 0x3ffe6666;
    }
  }
  else {
    *(undefined4 *)param_3 = 0;
    *(undefined4 *)((int)param_3 + 4) = 0x3ff00000;
  }
  *(double *)(param_1 + 0x58) = *param_2 / _DAT_105d4150;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)param_3;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)((int)param_3 + 4);
  if ((*(int *)(param_1 + 8) == 0) ||
     (((*(int *)(param_1 + 0xc) != 4 && (*(int *)(param_1 + 0xc) != 5)) &&
      (*(int *)(param_1 + 0xc) != 6)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x40))
                      (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x58),
                       *(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60),
                       *(undefined4 *)(param_1 + 100));
  }
  return uVar1;
}



//==== FUN_10007e00 @ 10007e00 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10007e00(int param_1,double *param_2,undefined4 *param_3)

{
  *param_2 = *(double *)(param_1 + 0x58) * _DAT_105d4150;
  *param_3 = *(undefined4 *)(param_1 + 0x60);
  param_3[1] = *(undefined4 *)(param_1 + 100);
  return 0;
}



//==== FUN_1000bcb0 @ 1000bcb0 ====

int FUN_1000bcb0(int param_1,uint param_2,int param_3)

{
  uint local_3c;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  int local_8;
  
  if (*(int *)(param_1 + 4) == 0) {
    local_8 = -0x7ffbffff;
  }
  else {
    *(undefined4 *)(param_1 + 0x140) = 0;
    (**(code **)(**(int **)(param_1 + 4) + 0x80))(*(undefined4 *)(param_1 + 4));
    thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) SetBoundaryStructure (Boundaries=%-d)\n",
                       param_2);
    local_8 = 0;
    if ((param_2 == 0) || (param_3 == 0)) {
      local_8 = 0;
    }
    else {
      thunk_FUN_1000bec0();
      for (local_3c = 0; local_3c < param_2; local_3c = local_3c + 1) {
        thunk_FUN_100033a0(&DAT_105d4f18,local_3c,*(undefined4 *)(param_3 + local_3c * 0x18),
                           *(undefined4 *)(param_3 + 8 + local_3c * 0x18),
                           *(undefined4 *)(param_3 + 4 + local_3c * 0x18),
                           *(undefined4 *)(param_3 + 0xc + local_3c * 0x18));
        local_10 = local_3c;
        local_38 = (double)*(int *)(param_3 + local_3c * 0x18);
        local_28 = (double)*(int *)(param_3 + 4 + local_3c * 0x18);
        local_30 = (double)*(int *)(param_3 + 8 + local_3c * 0x18);
        local_20 = (double)*(int *)(param_3 + 0xc + local_3c * 0x18);
        local_14 = *(undefined4 *)(param_3 + 0x10 + local_3c * 0x18);
        local_18 = *(undefined4 *)(param_3 + 0x14 + local_3c * 0x18);
        local_8 = (**(code **)(**(int **)(param_1 + 4) + 0x74))
                            (*(undefined4 *)(param_1 + 4),&local_38);
        if (local_8 < 0) {
          (**(code **)(**(int **)(param_1 + 4) + 0x80))(*(undefined4 *)(param_1 + 4));
          *(undefined4 *)(param_1 + 0x140) = 0;
          thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) SetBoundaryStructure ERROR (Failed after %-d)\n"
                             ,local_3c);
          break;
        }
      }
    }
  }
  return local_8;
}



//==== FUN_1000bf10 @ 1000bf10 ====

undefined4 FUN_1000bf10(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0x80040001;
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x8c))
                      (*(undefined4 *)(param_1 + 4),param_2,param_3);
    if (iVar2 < 0) {
      uVar1 = 0x80040002;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



//==== FUN_1000bf70 @ 1000bf70 ====

undefined4 FUN_1000bf70(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_3 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0x80040001;
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x90))
                      (*(undefined4 *)(param_1 + 4),param_2,param_3);
    if (iVar2 < 0) {
      uVar1 = 0x80040002;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



//==== FUN_1000bfe0 @ 1000bfe0 ====

undefined4 FUN_1000bfe0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0x80040001;
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x94))
                      (*(undefined4 *)(param_1 + 4),param_2,param_3);
    if (iVar2 < 0) {
      uVar1 = 0x80040002;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



//==== FUN_1000c040 @ 1000c040 ====

undefined4 FUN_1000c040(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_3 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0x80040001;
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x98))
                      (*(undefined4 *)(param_1 + 4),param_2,param_3);
    if (iVar2 < 0) {
      uVar1 = 0x80040002;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



//==== FUN_10009990 @ 10009990 ====

void FUN_10009990(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 0xc) == 2) {
      thunk_FUN_100033a0(">>>> TrafficAnalizer(AdaBoost) SetSensitivity (%d)\n",param_2);
      (**(code **)(**(int **)(param_1 + 8) + 0x24))(*(undefined4 *)(param_1 + 8),param_2);
    }
    else if (((*(int *)(param_1 + 0xc) == 4) || (*(int *)(param_1 + 0xc) == 5)) ||
            (*(int *)(param_1 + 0xc) == 6)) {
      thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) SetSensitivity (%d)\n",param_2);
      (**(code **)(**(int **)(param_1 + 8) + 0x30))(*(undefined4 *)(param_1 + 8),param_2);
    }
  }
  return;
}



//==== FUN_10009a50 @ 10009a50 ====

undefined4 FUN_10009a50(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = 0xf0;
  }
  else if (*(int *)(param_1 + 0xc) == 2) {
    uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x28))(*(undefined4 *)(param_1 + 8));
  }
  else if (((*(int *)(param_1 + 0xc) == 4) || (*(int *)(param_1 + 0xc) == 5)) ||
          (*(int *)(param_1 + 0xc) == 6)) {
    uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x34))(*(undefined4 *)(param_1 + 8));
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



//==== FUN_10009b80 @ 10009b80 ====

void FUN_10009b80(int param_1,uint param_2)

{
  uint local_48;
  
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x1c))(*(undefined4 *)(param_1 + 4),param_2);
    if (param_2 < 0x1f5) {
      local_48 = 500;
    }
    else {
      local_48 = param_2;
    }
    *(uint *)(param_1 + 0x38) = local_48;
    thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) SetTrialPeriod (%d)\n",param_2);
  }
  return;
}



//==== FUN_10009c00 @ 10009c00 ====

undefined4 FUN_10009c00(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x20))(*(undefined4 *)(param_1 + 4));
  }
  return uVar1;
}



//==== FUN_10009c40 @ 10009c40 ====

void FUN_10009c40(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x24))(*(undefined4 *)(param_1 + 4),param_2);
    thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) SetLeavingPeriod (%d)\n",param_2);
  }
  return;
}



//==== FUN_10009ca0 @ 10009ca0 ====

undefined4 FUN_10009ca0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x28))(*(undefined4 *)(param_1 + 4));
  }
  return uVar1;
}



//==== FUN_10009ae0 @ 10009ae0 ====

void FUN_10009ae0(int param_1,undefined4 param_2)

{
  if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0xc) == 2)) {
    (**(code **)(**(int **)(param_1 + 8) + 0x1c))(*(undefined4 *)(param_1 + 8),param_2);
  }
  return;
}



//==== FUN_10009b30 @ 10009b30 ====

undefined4 FUN_10009b30(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 8) == 0) || (*(int *)(param_1 + 0xc) != 2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x20))(*(undefined4 *)(param_1 + 8));
  }
  return uVar1;
}



//==== FUN_10007e50 @ 10007e50 ====

void FUN_10007e50(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  *(undefined4 *)(param_1 + 0x44) = param_3;
  return;
}



//==== FUN_10007e80 @ 10007e80 ====

float10 FUN_10007e80(int param_1)

{
  return (float10)*(double *)(param_1 + 0x40);
}



//==== FUN_1000b6d0 @ 1000b6d0 ====

void FUN_1000b6d0(int param_1,undefined4 param_2)

{
  if (((*(int *)(param_1 + 0xc) == 4) || (*(int *)(param_1 + 0xc) == 5)) ||
     (*(int *)(param_1 + 0xc) == 6)) {
    *(undefined4 *)(param_1 + 0x110) = param_2;
  }
  thunk_FUN_1000b8c0();
  return;
}



//==== FUN_10007ea0 @ 10007ea0 ====

undefined4 FUN_10007ea0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x110);
}



//==== FUN_1000b730 @ 1000b730 ====

void FUN_1000b730(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x144) = param_2;
  *(undefined4 *)(param_1 + 0x148) = param_3;
  if (*(int *)(param_1 + 0x10) != 0) {
    if (*(int *)(param_1 + 0x144) == 0) {
      (**(code **)(**(int **)(param_1 + 0x10) + 0x48))(*(undefined4 *)(param_1 + 0x10),0xffffffff);
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x10) + 0x48))
                (*(undefined4 *)(param_1 + 0x10),
                 (uint)(*(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x148)) / 100);
    }
  }
  return;
}



//==== FUN_10007ed0 @ 10007ed0 ====

void FUN_10007ed0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 0x144);
  *param_3 = *(undefined4 *)(param_1 + 0x148);
  return;
}



//==== FUN_1000b7e0 @ 1000b7e0 ====

void FUN_1000b7e0(int param_1,undefined4 param_2)

{
  if ((*(int *)(param_1 + 4) != 0) &&
     (((*(int *)(param_1 + 0xc) == 4 || (*(int *)(param_1 + 0xc) == 5)) ||
      (*(int *)(param_1 + 0xc) == 6)))) {
    (**(code **)(**(int **)(param_1 + 4) + 0x9c))(*(undefined4 *)(param_1 + 4),param_2);
  }
  return;
}



//==== FUN_1000b850 @ 1000b850 ====

undefined4 FUN_1000b850(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 4) == 0) ||
     (((*(int *)(param_1 + 0xc) != 4 && (*(int *)(param_1 + 0xc) != 5)) &&
      (*(int *)(param_1 + 0xc) != 6)))) {
    uVar1 = 0x14a;
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xa0))(*(undefined4 *)(param_1 + 4));
  }
  return uVar1;
}



//==== FUN_1000ca90 @ 1000ca90 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1000ca90(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint *param_5,
                int *param_6)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  float10 fVar9;
  int *piVar10;
  double *pdVar11;
  undefined4 uVar12;
  undefined8 local_578;
  undefined1 local_50c [248];
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 *local_3f4;
  int local_3f0;
  int *local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined1 local_3c8;
  undefined4 local_3c7;
  int local_3ac;
  LPCWSTR local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  int local_394;
  int local_390;
  uint local_38c;
  uint local_388;
  double local_384;
  int local_37c;
  int local_378;
  int local_374;
  int local_370;
  uint local_36c;
  uint local_368;
  int local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 *local_33c;
  int local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined1 local_328;
  undefined4 local_327;
  int local_30c;
  LPCWSTR local_308;
  undefined4 local_304 [5];
  undefined1 local_2f0 [8];
  undefined1 local_2e8 [8];
  double local_2e0;
  int local_2d8 [4];
  int local_2c8;
  int local_298 [4];
  int local_288;
  undefined4 local_258;
  undefined4 local_254;
  int local_250;
  int local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  double local_1e8;
  int local_174;
  int local_170;
  int *local_16c;
  int *local_168;
  int local_164;
  int local_160;
  int *local_15c;
  int local_158;
  undefined4 local_154;
  int local_150;
  int local_14c;
  undefined8 local_148;
  int *local_140;
  int *local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  int local_128;
  uint local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined1 local_10c [8];
  double local_104;
  undefined4 local_fc;
  int local_f8;
  int local_f4;
  uint local_f0;
  undefined4 local_ec;
  int *local_e8;
  undefined1 local_e4 [168];
  int local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_104162ec;
  local_10 = ExceptionList;
  if (param_1[1] == 0) {
    return -0x7ffbffff;
  }
  ExceptionList = &local_10;
  thunk_FUN_10005910();
  if (param_1[0x5a] == 0 && param_1[0x5b] == 0) {
    param_1[0x5a] = *param_5;
    param_1[0x5b] = param_5[1];
  }
  uVar2 = *param_5;
  uVar3 = param_5[1];
  param_1[0x5c] = uVar2 + 1;
  param_1[0x5d] = uVar3 + (0xfffffffe < uVar2);
  if (param_4 == 0) {
    param_4 = param_1[10];
    uVar2 = param_1[0xc];
    if (uVar2 < 0x3259555a) {
      if (uVar2 == 0x32595559) {
LAB_1000cb9a:
        param_4 = param_4 << 1;
      }
      else if ((uVar2 == 0) || (uVar2 == 0x20565559)) {
        param_4 = param_4 * 3;
      }
    }
    else if ((uVar2 == 0x56595559) || (uVar2 == 0x59565955)) goto LAB_1000cb9a;
  }
  if (param_6 == (int *)0x0) {
    local_578._4_4_ = (int *)param_1[9];
  }
  else {
    local_578._4_4_ = param_6;
  }
  local_14 = local_578._4_4_;
  local_18 = (int *)0x0;
  if (param_1[0x62] == 1) {
    local_18 = local_578._4_4_;
    local_14 = (int *)0x0;
  }
  local_20 = *param_5 - param_1[0x54];
  local_1c = (param_5[1] - param_1[0x55]) - (uint)(*param_5 < (uint)param_1[0x54]);
  if (param_1[0x58] == 0 && param_1[0x59] == 0) {
    thunk_FUN_100033a0(">>>> TrafficAnalizer%s          Analize(Timestamp) Fr=%-12I64d TS=%-16I64d FIRST\n"
                       ,"_65_4",param_1[0x58],param_1[0x59],*param_5,param_5[1]);
    goto LAB_1000cdc2;
  }
  if ((param_1[0x56] == local_20) && (param_1[0x57] == local_1c)) {
    thunk_FUN_100033a0(">>>> TrafficAnalizer%s(LPlates) Analize(Timestamp) Fr=%-12I64d TS=%-16I64d(%I64d) RT=%-5.1lf\n"
                       ,"_65_4",param_1[0x58],param_1[0x59],*param_5,param_5[1],local_20,local_1c,
                       param_1[0x46],param_1[0x47]);
    goto LAB_1000cdc2;
  }
  if (local_1c < 0) {
LAB_1000cd24:
    thunk_FUN_100033a0(">>>> TrafficAnalizer%s(LPlates) Analize(Timestamp) Fr=%-12I64d TS=%-16I64d(%I64d) RT=%-5.1lf NOT EQUAL, RESET\n"
                       ,"_65_4",param_1[0x58],param_1[0x59],*param_5,param_5[1],local_20,local_1c,
                       param_1[0x46],param_1[0x47]);
    (**(code **)(*param_1 + 0x10))(param_1,local_14);
  }
  else {
    if (param_1[0x67] != 0) {
      local_578._4_4_ = (int *)((ulonglong)(uint)param_1[0x67] * 10000 >> 0x20);
      if (((int)local_578._4_4_ <= local_1c) &&
         (((int)local_578._4_4_ < local_1c ||
          (local_578._0_4_ = (uint)((ulonglong)(uint)param_1[0x67] * 10000),
          (uint)local_578 < local_20)))) goto LAB_1000cd24;
    }
    thunk_FUN_100033a0(">>>> TrafficAnalizer%s(LPlates) Analize(Timestamp) Fr=%-12I64d TS=%-16I64d(%I64d) RT=%-5.1lf NOT EQUAL\n"
                       ,"_65_4",param_1[0x58],param_1[0x59],*param_5,param_5[1],local_20,local_1c,
                       param_1[0x46],param_1[0x47]);
  }
LAB_1000cdc2:
  param_1[0x56] = local_20;
  param_1[0x57] = local_1c;
  param_1[0x54] = *param_5;
  param_1[0x55] = param_5[1];
  uVar2 = param_1[0x58];
  param_1[0x58] = uVar2 + 1;
  param_1[0x59] = param_1[0x59] + (uint)(0xfffffffe < uVar2);
  if (param_1[0x45] != 0) {
    local_28 = (**(code **)(*(int *)param_1[0x45] + 0x20))
                         (param_1[0x45],param_2,param_4 * param_1[0xb] * 2,param_4,param_5,0);
    for (local_24 = 0; local_24 < (uint)param_1[0x1e]; local_24 = local_24 + 1) {
      (**(code **)(*(int *)param_1[0x45] + 0x34))
                (param_1[0x45],local_24,param_1[0x21] + 0xc + local_24 * 0x10);
    }
  }
  local_2c = 0;
  local_30 = (**(code **)(*(int *)param_1[0x68] + 0x1c))
                       (param_1[0x68],param_2,param_4,0,0,param_5,param_3,&local_2c);
  if (local_30 != 0) {
    thunk_FUN_100033a0(">>>> TrafficAnalizer          Analize(DetectorFailed) ERRCODE=0x%08X\n",
                       local_30);
  }
  local_34 = (**(code **)(*(int *)param_1[0x68] + 0x28))(param_1[0x68]);
  local_3c = (**(code **)(*(int *)param_1[1] + 0x10))
                       (param_1[1],param_2,param_3,param_4,param_5,local_34,local_2c,&local_38);
  if (local_3c != 0) {
    thunk_FUN_100033a0();
  }
  if (-1 < local_3c) {
    thunk_FUN_10001e70();
    local_8 = 0;
    local_114 = 0;
    local_110 = 0;
    local_11c = 0;
    local_118 = 0;
    local_154 = 1;
    local_158 = 0;
    local_15c = (int *)0x0;
    if ((param_1[5] != 0) && (param_1[0x65] == 1)) {
      (**(code **)(*(int *)param_1[5] + 0x2c))(param_1[5],param_2,param_4,param_3,param_5);
    }
    if (param_1[0x62] == 1) {
      if (param_1[99] == 1) {
        (**(code **)(*(int *)param_1[6] + 0x30))(param_1[6]);
        param_1[99] = 0;
      }
      else {
        iVar4 = (**(code **)(*(int *)param_1[6] + 0x38))();
        if (iVar4 == 0) {
          (**(code **)(*(int *)param_1[6] + 0x1c))(param_1[6],param_2,param_4,param_5,param_3);
        }
      }
    }
    if (param_1[8] != 0) {
      (**(code **)(*(int *)param_1[8] + 0x20))(param_1[8],param_2,param_4,param_5,param_3);
    }
    local_38 = (**(code **)(*(int *)param_1[1] + 0x2c))(param_1[1]);
    if (param_1[4] != 0) {
      local_158 = (**(code **)(*(int *)param_1[4] + 100))
                            (param_1[4],param_2,param_4,param_3,param_5);
      if (-1 < local_158) {
        for (local_120 = 0; local_120 < local_38; local_120 = local_120 + 1) {
          local_e8 = (int *)(**(code **)(*(int *)param_1[1] + 0x4c))(param_1[1],local_120);
          if (local_e8 != (int *)0x0) {
            local_164 = (**(code **)(*local_e8 + 100))(local_e8,&local_160);
            if ((local_160 == 0) || (local_164 == 0)) {
              (**(code **)(*local_e8 + 0x60))(local_e8,0x18);
              local_164 = (**(code **)(*local_e8 + 100))(local_e8,&local_160);
            }
            local_ec = (**(code **)*local_e8)(local_e8);
            local_f0 = (**(code **)(*local_e8 + 0x18))(local_e8);
            local_140 = (int *)(**(code **)(*local_e8 + 0x5c))(local_e8);
            local_168 = (int *)0x0;
            if (((local_f0 & 1) != 0) &&
               (iVar4 = (**(code **)(*local_e8 + 0x98))(local_e8,&local_168), iVar4 != 0)) {
              local_16c = (int *)0x0;
              local_16c = (int *)(**(code **)(*local_168 + 0x5c))(local_168);
              if (local_16c != (int *)0x0) {
                (**(code **)(*local_168 + 0x58))(local_168,0);
                (**(code **)(*local_16c + 4))(local_16c);
                local_16c = (int *)0x0;
              }
              if (local_140 != (int *)0x0) {
                uVar5 = (**(code **)*local_168)(local_168);
                (**(code **)(*local_140 + 0x4c))(local_140,&local_16c,uVar5);
              }
              local_170 = 0;
              local_174 = (**(code **)(*local_168 + 100))(local_168,&local_170);
              if ((local_170 == 0) || (local_174 == 0)) {
                (**(code **)(*local_e8 + 0x60))(local_e8,0x18);
                local_174 = (**(code **)(*local_e8 + 100))(local_e8,&local_170);
              }
              (**(code **)(*local_168 + 0x58))(local_168,local_16c);
            }
            if ((local_f0 & 0x20) == 0x20) {
              if (local_140 != (int *)0x0) {
                (**(code **)(*local_e8 + 0x58))(local_e8,0);
                (**(code **)(*local_140 + 4))(local_140);
                local_140 = (int *)0x0;
              }
            }
            else {
              *(undefined4 *)(local_164 + 0x10) = 0;
              *(undefined4 *)(local_164 + 0x14) = 0x3ff00000;
              if ((local_140 == (int *)0x0) && ((local_f0 & 0x80) == 0)) {
                local_140 = (int *)(**(code **)(*(int *)param_1[4] + 0x28))(param_1[4],local_ec);
                (**(code **)(*local_e8 + 0x58))(local_e8,local_140);
              }
              if (local_140 != (int *)0x0) {
                piVar6 = (int *)(**(code **)(*local_140 + 0x1c))(local_140);
                fVar9 = (float10)(**(code **)(*piVar6 + 0xc))(piVar6);
                *(double *)(local_164 + 0x10) = (double)fVar9;
                if ((local_f0 & 0x10) == 0) {
                  (**(code **)(*local_e8 + 0x20))(local_e8,&local_248);
                  local_fc = 0;
                  thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) Analize(Try to Recognize) [Id=%d] Angle=%-6.3lf (%-5.1lfx%-5.1lf)(%-5.1lfx%-5.1lf) State=0x%04X\n"
                                     ,local_ec,(local_1e8 * _DAT_105d5718) / _DAT_105d5708,local_248
                                     ,local_244,local_240,local_23c,local_238,local_234,local_230,
                                     local_22c,local_f0);
                  local_134 = (**(code **)(*local_140 + 0xc))
                                        (local_140,&local_248,0,local_154,local_fc,local_f0 == 5);
                  if (param_1[7] != 0) {
                    uVar5 = thunk_FUN_1000f400(local_248,local_244,local_240,local_23c,*param_5,
                                               param_5[1],local_ec);
                    (**(code **)(*(int *)param_1[7] + 0x30))(param_1[7],uVar5);
                  }
                }
              }
            }
          }
        }
      }
      local_3c = (**(code **)(*(int *)param_1[4] + 0x60))(param_1[4],0xffffffff);
      if (local_3c < 0) {
        thunk_FUN_100033a0();
        iVar4 = local_3c;
        local_8 = 0xffffffff;
        thunk_FUN_10002fa0();
        ExceptionList = local_10;
        return iVar4;
      }
    }
    for (local_120 = 0; local_120 < local_38; local_120 = local_120 + 1) {
      local_e8 = (int *)(**(code **)(*(int *)param_1[1] + 0x4c))();
      if (local_e8 != (int *)0x0) {
        piVar6 = &local_24c;
        piVar10 = local_e8;
        local_250 = (**(code **)(*local_e8 + 100))();
        if ((local_24c == 0) || (local_250 == 0)) {
          (**(code **)(*local_e8 + 0x60))(local_e8,0x18,piVar10,piVar6);
          local_250 = (**(code **)(*local_e8 + 100))(local_e8,&local_24c);
        }
        *(undefined4 *)(local_250 + 4) = 0;
        local_ec = (**(code **)*local_e8)();
        local_f0 = (**(code **)(*local_e8 + 0x18))(local_e8);
        if ((local_f0 & 0x20) == 0x20) {
          if ((param_1[0x62] == 1) &&
             (iVar4 = (**(code **)(*(int *)param_1[6] + 0x38))(), iVar4 == 0)) {
            (**(code **)(*(int *)param_1[6] + 0x24))();
          }
          if (param_1[8] != 0) {
            (**(code **)(*(int *)param_1[8] + 0x1c))();
          }
        }
        else {
          thunk_FUN_10002aa0(local_e8);
          local_f8 = 0;
          local_128 = thunk_FUN_1000fff0(local_e8,&local_104,local_10c,&local_114,&local_11c,
                                         &local_f8,param_1[0xe]);
          thunk_FUN_10002d20(&local_104,local_10c,&local_114,&local_11c,local_f8,local_128);
          local_12c = thunk_FUN_100104c0(local_e8,&local_f4,&local_f8);
          thunk_FUN_10002e00();
          if ((-1 < local_f4) && (param_1[0x44] == 1)) {
            thunk_FUN_100105d0();
          }
          local_130 = thunk_FUN_10010820();
          thunk_FUN_10002e40();
          local_134 = 0x80040001;
          local_13c = (int *)0x0;
          local_140 = (int *)0x0;
          if ((param_1[4] != 0) && (-1 < local_158)) {
            local_140 = (int *)(**(code **)(*local_e8 + 0x5c))(local_e8);
            if (local_140 == (int *)0x0) {
              local_13c = (int *)(**(code **)(*local_e8 + 0x6c))();
              local_134 = 0;
            }
            else {
              local_13c = (int *)(**(code **)(*local_140 + 0x1c))();
              local_134 = (**(code **)(*local_140 + 0x44))(local_140);
            }
          }
          thunk_FUN_10002e80();
          local_254 = 0;
          local_258 = 0;
          if ((param_1[5] != 0) && (param_1[0x65] == 1)) {
            (**(code **)(*(int *)param_1[5] + 0x30))(param_1[5],local_ec,param_5,local_13c);
            iVar4 = (**(code **)(*(int *)param_1[5] + 0x38))(param_1[5],local_ec,&local_15c);
            if ((-1 < iVar4) &&
               ((local_15c != (int *)0x0 &&
                (iVar4 = (**(code **)(*local_15c + 4))(local_15c,local_298,local_2d8), -1 < iVar4)))
               ) {
              if (local_298[0] == 1) {
                if (local_288 == 1) {
                  local_254 = 1;
                }
                else if (local_288 == 2) {
                  local_254 = 2;
                }
              }
              if (local_2d8[0] == 1) {
                if (local_2c8 == 1) {
                  local_258 = 1;
                }
                else if (local_2c8 == 2) {
                  local_258 = 2;
                }
              }
            }
          }
          thunk_FUN_1000f460();
          if ((param_1[0x62] == 1) &&
             (iVar4 = (**(code **)(*(int *)param_1[6] + 0x38))(), iVar4 == 0)) {
            (**(code **)(*(int *)param_1[6] + 0x20))(param_1[6],local_ec,local_13c);
          }
          if (param_1[7] != 0) {
            (**(code **)(*(int *)param_1[7] + 0x60))(param_1[7],local_ec,local_13c);
          }
          if (param_1[8] != 0) {
            (**(code **)(*(int *)param_1[8] + 0x18))(param_1[8],local_ec,local_13c);
          }
          if (local_140 != (int *)0x0) {
            pdVar11 = &local_2e0;
            piVar6 = local_140;
            (**(code **)(*local_140 + 0x30))();
            (**(code **)(*local_e8 + 0x10))(local_e8,&local_2e0,piVar6,pdVar11);
            if ((_DAT_105d3c50 < *(double *)(param_1 + 0x14)) &&
               (local_2e0 < *(double *)(param_1 + 0x14))) {
              thunk_FUN_10002c60(1);
            }
          }
          if ((local_f0 == 5) &&
             ((param_1[4] == 0 ||
              (dVar1 = *(double *)(param_1 + 0x12),
              (!NAN(dVar1) && !NAN(_DAT_105d3c50)) &&
              dVar1 < _DAT_105d3c50 != (dVar1 == _DAT_105d3c50))))) {
            *(undefined4 *)(local_250 + 4) = 1;
            *(undefined4 *)(local_250 + 8) = 0;
            thunk_FUN_100033a0(">>>> TrafficAnalizer          Analize(Detected) [Id=%d] State=0x%04X\n"
                               ,local_ec,5);
            param_1[0x5e] = param_1[0x5e] + 1;
            thunk_FUN_10002e80();
            if (local_14 != (int *)0x0) {
              iVar4 = param_1[0x5e];
              piVar6 = local_e8;
              uVar5 = (**(code **)(*local_e8 + 0x40))();
              (**(code **)*local_14)(local_14,local_e4,uVar5,piVar6,iVar4);
            }
          }
          if (param_1[4] == 0) {
            local_578 = 1.0;
          }
          else {
            local_578 = 0.0;
          }
          local_148 = local_578;
          if ((local_13c != (int *)0x0) && (_DAT_105d3c50 < *(double *)(param_1 + 0x12))) {
            fVar9 = (float10)(**(code **)(*local_13c + 0xc))(local_13c);
            local_148 = (double)fVar9;
            (**(code **)(*local_13c + 0x18))(local_13c,&local_150,local_2e8,local_2f0);
            if ((*(double *)(local_250 + 0x10) < local_148) ||
               ((piVar6 = (int *)(**(code **)(*local_e8 + 0x40))(local_e8), local_150 == *piVar6 &&
                (local_14c == piVar6[1])))) {
              *(undefined4 *)(local_250 + 4) = 1;
            }
            iVar4 = (**(code **)(*local_e8 + 0x2c))(local_e8);
            if ((iVar4 == 1) && (*(double *)(param_1 + 0x12) <= local_148)) {
              if (*(double *)(local_250 + 0x10) <= *(double *)(param_1 + 0x12) + _DAT_105d5598) {
                thunk_FUN_100024e0(local_e4,local_304,0);
                *(undefined4 *)(local_250 + 8) = 0;
                uVar5 = local_304[0];
                fVar9 = (float10)(**(code **)(*local_e8 + 0x14))();
                thunk_FUN_100033a0(">>>> TrafficAnalizer          Analize(Detected) [Id=%d] State=0x%04X Conf(T=%lf, L=%lf) Int=%1d\n"
                                   ,local_ec,local_f0,(undefined4)local_148,local_148._4_4_,
                                   (double)fVar9,uVar5);
                param_1[0x5e] = param_1[0x5e] + 1;
                if (local_14 != (int *)0x0) {
                  iVar4 = param_1[0x5e];
                  piVar6 = local_e8;
                  uVar5 = (**(code **)(*local_e8 + 0x40))();
                  (**(code **)*local_14)(local_14,local_e4,uVar5,piVar6,iVar4);
                }
              }
              if (*(int *)(local_250 + 4) == 1) {
                local_32c = DAT_105d3c48;
                local_328 = DAT_105d3c4c;
                puVar7 = &local_327;
                for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *puVar7 = 0;
                  puVar7 = puVar7 + 1;
                }
                *(undefined2 *)puVar7 = 0;
                *(undefined1 *)((int)puVar7 + 2) = 0;
                local_330 = 0xffffffff;
                local_334 = 0xffffffff;
                piVar6 = &local_30c;
                piVar10 = local_13c;
                local_308 = (LPCWSTR)(**(code **)*local_13c)();
                if ((local_308 != (LPCWSTR)0x0) && (local_30c != 0)) {
                  WideCharToMultiByte(0,0,local_308,-1,(LPSTR)&local_32c,0x20,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
                }
                (**(code **)(*local_13c + 8))(local_13c,&local_330,&local_334,piVar10,piVar6);
                iVar4 = thunk_FUN_1000c700();
                if (iVar4 == 0) {
                  thunk_FUN_100033a0(">>>> TrafficAnalizer            (Confidence)    [Id=%d] %-8.6lf -> %-8.6lf (%s) LPTime = %-I64d\n"
                                     ,local_ec,*(undefined4 *)(local_250 + 0x10),
                                     *(undefined4 *)(local_250 + 0x14),(undefined4)local_148,
                                     local_148._4_4_,&local_32c,local_150,local_14c);
                  if (local_14 != (int *)0x0) {
                    (**(code **)(*local_e8 + 0x40))(local_e8);
                    (**(code **)(*local_14 + 0x1c))(local_14);
                  }
                }
              }
            }
          }
          iVar4 = (**(code **)(*local_e8 + 0x2c))(local_e8);
          if ((iVar4 == 1) && (*(double *)(param_1 + 0x12) <= local_148)) {
            local_33c = (undefined4 *)(**(code **)(*local_e8 + 0x78))();
            local_344 = 1;
            for (; 0 < local_338; local_338 = local_338 + -1) {
              local_35c = local_33c[6];
              local_358 = local_33c[7];
              local_354 = __ftol();
              local_350 = __ftol();
              local_348 = *local_33c;
              local_34c = *(undefined4 *)(local_33c[1] + 0x28);
              if (local_14 != (int *)0x0) {
                puVar7 = &local_35c;
                piVar6 = local_e8;
                uVar5 = (**(code **)(*local_e8 + 0x40))();
                (**(code **)(*local_14 + 0x14))(local_14,local_e4,uVar5,piVar6,puVar7);
              }
              local_33c = local_33c + 10;
            }
            if ((local_f0 & 0x10) == 0) {
              (**(code **)(*local_e8 + 0x88))(local_e8,&local_360,&local_364);
              if ((local_364 == 1) &&
                 (thunk_FUN_100033a0(">>>> TrafficAnalizer          Analize(CUR_STOPPED_EVENT)        [Id=%d] IsStop[Prev=%1d -> Curr=%1d]\n"
                                     ,local_ec,local_360,1), local_14 != (int *)0x0)) {
                uVar5 = (**(code **)(*local_e8 + 0x40))(local_e8);
                (**(code **)(*local_14 + 8))(local_14,local_e4,uVar5);
              }
              local_368 = 0;
              local_36c = 0;
              local_370 = (**(code **)(*local_e8 + 0x30))(local_e8,&local_368,&local_36c);
              if (((local_370 == 0) && (3 < local_368)) && ((1 < local_36c || (param_1[4] == 0)))) {
                local_578._4_4_ = (int *)0x1;
              }
              else {
                local_578._4_4_ = (int *)0x0;
              }
              local_374 = (int)local_578._4_4_;
              if ((local_f8 == -2) && (local_578._4_4_ == (int *)0x1)) {
                thunk_FUN_100033a0(">>>> TrafficAnalizer          Analize(SUSPECTED_WRONGWAY_EVENT)        [Id=%d] #%-d NumDet=%-d\n"
                                   ,local_ec,*(undefined4 *)(local_250 + 8),local_368);
                *(int *)(local_250 + 8) = *(int *)(local_250 + 8) + 1;
                if (local_14 != (int *)0x0) {
                  uVar12 = 0;
                  piVar6 = local_e8;
                  uVar5 = (**(code **)(*local_e8 + 0x40))();
                  (**(code **)(*local_14 + 0x30))(local_14,local_e4,uVar5,piVar6,uVar12);
                }
              }
            }
          }
          if ((local_f0 == 0x90) || (local_f0 == 0xd0)) {
            iVar4 = (**(code **)(*local_e8 + 0x2c))(local_e8);
            if ((iVar4 == 1) && (*(double *)(param_1 + 0x12) <= local_148)) {
              local_378 = 0;
              local_128 = thunk_FUN_1000fff0(local_e8,&local_104,local_10c,&local_114,&local_11c,
                                             &local_378,0);
              thunk_FUN_10002d20(&local_104,local_10c,&local_114,&local_11c,local_378,local_128);
              local_37c = local_378;
              local_12c = thunk_FUN_100104c0(local_e8,&local_f4,&local_378);
              thunk_FUN_10002e00();
              local_384 = 0.0;
              local_138 = 0x80040001;
              if (param_1[7] != 0) {
                local_138 = (**(code **)(*(int *)param_1[7] + 0x34))(param_1[7],local_ec,&local_384)
                ;
                local_384 = local_384 * _DAT_105d53a0;
              }
              thunk_FUN_10002db0(local_384._0_4_,(int)((ulonglong)local_384 >> 0x20),local_138);
              local_388 = 0;
              local_38c = 0;
              local_390 = (**(code **)(*local_e8 + 0x30))(local_e8,&local_388,&local_38c);
              if (((local_390 == 0) && (3 < local_388)) && ((1 < local_38c || (param_1[4] == 0)))) {
                local_578._4_4_ = (int *)0x1;
              }
              else {
                local_578._4_4_ = (int *)0x0;
              }
              local_394 = (int)local_578._4_4_;
              if (local_578._4_4_ == (int *)0x0) {
                local_39c = 0;
                local_398 = 0xbff00000;
                local_3a4 = 0;
                local_3a0 = 0xbff00000;
                local_37c = 0;
                local_128 = 0x40002;
                thunk_FUN_10002d20(&local_39c,&local_3a4,&local_39c,&local_39c,0,0x40002);
              }
              if (local_128 != 0) {
                param_1[0x5f] = param_1[0x5f] + 1;
                *(double *)(param_1 + 0x60) = local_104 + *(double *)(param_1 + 0x60);
              }
              local_3a8 = (LPCWSTR)0x0;
              local_3cc = DAT_105d3c48;
              local_3c8 = DAT_105d3c4c;
              puVar7 = &local_3c7;
              for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar7 = 0;
                puVar7 = puVar7 + 1;
              }
              *(undefined2 *)puVar7 = 0;
              *(undefined1 *)((int)puVar7 + 2) = 0;
              local_3d0 = 0xffffffff;
              local_3d4 = 0xffffffff;
              puVar7 = (undefined4 *)(**(code **)(*local_e8 + 0x40))(local_e8);
              local_3dc = *puVar7;
              local_3d8 = puVar7[1];
              if (local_13c != (int *)0x0) {
                local_3a8 = (LPCWSTR)(**(code **)*local_13c)(local_13c,&local_3ac);
                if ((local_3a8 != (LPCWSTR)0x0) && (local_3ac != 0)) {
                  WideCharToMultiByte(0,0,local_3a8,-1,(LPSTR)&local_3cc,0x20,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
                }
                (**(code **)(*local_13c + 8))(local_13c,&local_3d0,&local_3d4);
              }
              iVar4 = (**(code **)(*local_e8 + 0x18))(local_e8);
              if (iVar4 == 0xd0) {
                local_3e0 = 0xffffffff;
                local_3e4 = (**(code **)(*local_e8 + 0xc))(local_e8);
                local_3e8 = 0;
                local_3ec = (int *)(**(code **)(*local_e8 + 8))();
                if (local_3ec != (int *)0x0) {
                  local_3e0 = (**(code **)*local_3ec)(local_3ec);
                  local_3e8 = (**(code **)(*local_3ec + 0xc))();
                  if (param_1[7] != 0) {
                    (**(code **)(*(int *)param_1[7] + 0x3c))(param_1[7],local_ec,local_3e0);
                  }
                }
                thunk_FUN_10006c70(1,local_3e0,local_3e4,local_3e8);
                if (param_1[7] != 0) {
                  (**(code **)(*(int *)param_1[7] + 0x38))();
                }
                thunk_FUN_100033a0(">>>> TrafficAnalizer          Analize(Disapeared Double) [Id=%d] State=0x%04X (%s) TS=%-I64d\n"
                                   ,local_ec,local_f0,&local_3cc,local_3dc,local_3d8);
              }
              else {
                iVar4 = thunk_FUN_1000c700();
                if (iVar4 == 1) {
                  thunk_FUN_10006c70(1,0xffffffff,0,0);
                  thunk_FUN_100033a0(">>>> TrafficAnalizer          Analize(Disapeared Invalid) [Id=%d] State=0x%04X (%s) TS=%-I64d\n"
                                     ,local_ec,local_f0,&local_3cc,local_3dc,local_3d8);
                }
                else {
                  if (((local_378 == -2) && (local_394 == 1)) &&
                     (thunk_FUN_100033a0(">>>> TrafficAnalizer          Analize(WRONGWAY_EVENT)        [Id=%d] NumDet=%-d\n"
                                         ,local_ec,local_388), local_14 != (int *)0x0)) {
                    (**(code **)(*local_e8 + 0x40))(local_e8);
                    (**(code **)(*local_14 + 0x10))(local_14,local_e4);
                  }
                  local_3f4 = (undefined4 *)(**(code **)(*local_e8 + 0x7c))();
                  local_3fc = 0;
                  for (; 0 < local_3f0; local_3f0 = local_3f0 + -1) {
                    local_414 = local_3f4[6];
                    local_410 = local_3f4[7];
                    local_40c = __ftol();
                    local_408 = __ftol();
                    local_400 = *local_3f4;
                    local_404 = *(undefined4 *)(local_3f4[1] + 0x28);
                    thunk_FUN_100033a0(">>>> TrafficAnalizer          Analize(BOUNDARY_CROSS)        [Id=%d] BorderId=%-d\n"
                                       ,local_ec,local_404);
                    if (local_14 != (int *)0x0) {
                      puVar7 = &local_414;
                      piVar6 = local_e8;
                      uVar5 = (**(code **)(*local_e8 + 0x40))();
                      (**(code **)(*local_14 + 0x14))(local_14,local_e4,uVar5,piVar6,puVar7);
                    }
                    local_3f4 = local_3f4 + 10;
                  }
                  thunk_FUN_100033a0(">>>> TrafficAnalizer          Analize(Disapeared)        [Id=%d] State=0x%04X (%s) TS=%-I64d\n"
                                     ,local_ec,local_f0,&local_3cc,local_3dc,local_3d8);
                }
              }
              if (local_14 != (int *)0x0) {
                (**(code **)(*local_e8 + 0x40))(local_e8);
                (**(code **)(*local_14 + 4))(local_14);
              }
            }
            if ((param_1[0x62] == 1) &&
               (iVar4 = (**(code **)(*(int *)param_1[6] + 0x38))(), iVar4 == 0)) {
              (**(code **)(*(int *)param_1[6] + 0x24))();
            }
            if (param_1[8] != 0) {
              (**(code **)(*(int *)param_1[8] + 0x1c))();
            }
            if ((param_1[5] != 0) && (param_1[0x65] == 1)) {
              (**(code **)(*(int *)param_1[5] + 0x34))();
            }
            if (param_1[7] != 0) {
              (**(code **)(*(int *)param_1[7] + 0x38))();
            }
            if (local_140 != (int *)0x0) {
              uVar5 = 0;
              piVar6 = local_e8;
              (**(code **)(*local_e8 + 0x58))();
              (**(code **)(*local_140 + 4))(local_140,piVar6,uVar5);
              local_140 = (int *)0x0;
            }
          }
        }
      }
    }
    if (local_14 != (int *)0x0) {
      for (local_24 = 0; local_24 < (uint)param_1[0x1e]; local_24 = local_24 + 1) {
        if (*(int *)(param_1[0x21] + 0xc + local_24 * 0x10) == 1) {
          (**(code **)(*local_14 + 0x20))(local_14,local_24,param_5);
        }
      }
    }
    if (param_1[0x62] == 1) {
      uVar5 = 0;
      iVar4 = param_1[6];
      iVar8 = (**(code **)(*(int *)param_1[6] + 0x38))();
      if (iVar8 == 1) {
        (**(code **)(*(int *)param_1[6] + 0x40))(param_1[6],local_50c);
        if (local_18 != (int *)0x0) {
          (**(code **)(*local_18 + 0x28))(local_18,local_50c);
        }
        (**(code **)(*(int *)param_1[6] + 0x10))(param_1[6],0);
        (**(code **)(*param_1 + 0x10))(param_1,local_14);
        param_1[0x62] = 0;
        param_1[100] = 0xf;
      }
      else {
        iVar4 = (**(code **)(*(int *)param_1[6] + 0x50))(param_1[6],iVar4,uVar5);
        if (iVar4 == 1) {
          param_1[99] = 1;
          if (local_18 != (int *)0x0) {
            (**(code **)(*local_18 + 0x34))(local_18);
          }
        }
        else if (local_18 != (int *)0x0) {
          piVar6 = param_1 + 100;
          iVar4 = param_1[6];
          uVar5 = (**(code **)(*(int *)param_1[6] + 0x28))();
          (**(code **)(*local_18 + 0x2c))(local_18,uVar5,iVar4,piVar6);
        }
      }
    }
    local_8 = 0xffffffff;
    thunk_FUN_10002fa0();
  }
  thunk_FUN_10005940();
  ExceptionList = local_10;
  return local_3c;
}



//==== FUN_1000f490 @ 1000f490 ====

undefined4 FUN_1000f490(void)

{
  return 0;
}



//==== FUN_1000f4b0 @ 1000f4b0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000f4b0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float10 fVar5;
  int *local_220;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  int local_1c8;
  LPCWSTR local_1c4;
  undefined4 local_1c0;
  undefined1 local_1bc;
  undefined4 local_1bb;
  int *local_1a0;
  int local_19c;
  int local_18c;
  int local_15c;
  int local_14c;
  undefined4 local_11c;
  undefined4 local_118;
  double local_114;
  uint local_10c;
  undefined4 local_108;
  int local_104;
  uint local_100;
  int *local_fc;
  int *local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  undefined1 local_c0 [168];
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1041630c;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    local_1d8 = 0x80040001;
  }
  else {
    if (param_3 == (int *)0x0) {
      local_220 = *(int **)(param_1 + 0x24);
    }
    else {
      local_220 = param_3;
    }
    local_14 = local_220;
    if (*(int *)(param_1 + 0x188) == 1) {
      local_14 = (int *)0x0;
    }
    ExceptionList = &local_10;
    thunk_FUN_10001e70();
    local_8 = 0;
    local_d8 = 0;
    local_d4 = 0;
    local_e0 = 0;
    local_dc = 0;
    local_fc = (int *)0x0;
    local_10c = (**(code **)(**(int **)(param_1 + 4) + 0x2c))(*(undefined4 *)(param_1 + 4));
    for (local_100 = 0; local_100 < local_10c; local_100 = local_100 + 1) {
      local_18 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x4c))
                                  (*(undefined4 *)(param_1 + 4),local_100);
      if (((local_18 != (int *)0x0) &&
          ((local_104 = (**(code **)*local_18)(local_18), param_2 == -1 || (local_104 == param_2))))
         && ((param_2 != -1 ||
             (((iVar1 = (**(code **)(*local_18 + 0x2c))(local_18), iVar1 != 0 &&
               (uVar2 = (**(code **)(*local_18 + 0x18))(local_18), (uVar2 & 0x80) != 0x80)) &&
              (uVar2 = (**(code **)(*local_18 + 0x18))(local_18), (uVar2 & 0x20) != 0x20)))))) {
        thunk_FUN_10002aa0(local_18);
        local_e4 = 0;
        local_ec = thunk_FUN_1000fff0(local_18,local_c8,local_d0,&local_d8,&local_e0,&local_e4,
                                      *(undefined4 *)(param_1 + 0x38));
        thunk_FUN_10002d20(local_c8,local_d0,&local_d8,&local_e0,local_e4,local_ec);
        local_f0 = thunk_FUN_100104c0();
        thunk_FUN_10002e00(local_e8,local_f0);
        local_f4 = thunk_FUN_10010820(local_18,&local_108);
        thunk_FUN_10002e40(local_108,local_f4);
        local_118 = 0;
        local_11c = 0;
        if (((*(int *)(param_1 + 0x14) != 0) && (*(int *)(param_1 + 0x194) == 1)) &&
           ((iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x38))(), -1 < iVar1 &&
            ((local_fc != (int *)0x0 && (iVar1 = (**(code **)(*local_fc + 4))(), -1 < iVar1)))))) {
          if (local_15c == 1) {
            if (local_14c == 1) {
              local_118 = 1;
            }
            else if (local_14c == 2) {
              local_118 = 2;
            }
          }
          if (local_19c == 1) {
            if (local_18c == 1) {
              local_11c = 1;
            }
            else if (local_18c == 2) {
              local_11c = 2;
            }
          }
        }
        thunk_FUN_1000f460(local_118,local_11c);
        local_1a0 = (int *)0x0;
        if (*(int *)(param_1 + 0x10) == 0) {
          local_220 = (int *)0x3ff00000;
        }
        else {
          local_220 = (int *)0x0;
        }
        local_114 = (double)(ZEXT48(local_220) << 0x20);
        local_f8 = (int *)(**(code **)(*local_18 + 0x5c))(local_18);
        if (local_f8 == (int *)0x0) {
          thunk_FUN_10002e80(0,0x80040001);
        }
        else {
          local_114 = 0.0;
          local_1a0 = (int *)(**(code **)(*local_f8 + 0x1c))(local_f8);
          thunk_FUN_10002e80(local_1a0,0);
          if (local_1a0 != (int *)0x0) {
            fVar5 = (float10)(**(code **)(*local_1a0 + 0xc))(local_1a0);
            local_114 = (double)fVar5;
          }
          if ((_DAT_105d3c50 < *(double *)(param_1 + 0x50)) &&
             (fVar5 = (float10)(**(code **)(*local_18 + 0x14))(local_18),
             fVar5 < (float10)*(double *)(param_1 + 0x50))) {
            thunk_FUN_10002c60(1);
          }
        }
        if ((local_14 != (int *)0x0) && (*(double *)(param_1 + 0x48) <= local_114)) {
          local_1c0 = DAT_105d3c48;
          local_1bc = DAT_105d3c4c;
          puVar4 = &local_1bb;
          for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          *(undefined2 *)puVar4 = 0;
          *(undefined1 *)((int)puVar4 + 2) = 0;
          if (local_1a0 != (int *)0x0) {
            local_1cc = 0xffffffff;
            local_1d0 = 0xffffffff;
            local_1c4 = (LPCWSTR)(**(code **)*local_1a0)(local_1a0,&local_1c8);
            if ((local_1c4 != (LPCWSTR)0x0) && (local_1c8 != 0)) {
              WideCharToMultiByte(0,0,local_1c4,-1,(LPSTR)&local_1c0,0x20,(LPCSTR)0x0,(LPBOOL)0x0);
            }
            (**(code **)(*local_1a0 + 8))(local_1a0,&local_1cc,&local_1d0);
            iVar1 = thunk_FUN_1000c700(local_1c4,local_1cc);
            if (iVar1 == 1) {
              thunk_FUN_10002c60(1);
            }
          }
          fVar5 = (float10)(**(code **)(*local_18 + 0x14))(local_18,&local_1c0);
          uVar3 = (**(code **)(*local_18 + 0x18))(local_18,(double)fVar5);
          thunk_FUN_100033a0(">>>> TrafficAnalizer          FindCarById(Requested)        [Id=%d] State=0x%04X (Confidence=%lf) (%s)\n"
                             ,local_104,uVar3);
          (**(code **)(*local_18 + 0x40))();
          (**(code **)(*local_14 + 0x18))(local_14,local_c0);
        }
        if (param_2 != -1) {
          local_8 = 0xffffffff;
          thunk_FUN_10002fa0();
          ExceptionList = local_10;
          return 0;
        }
      }
    }
    if (param_2 == -1) {
      local_1dc = 0;
      local_8 = 0xffffffff;
      thunk_FUN_10002fa0();
      local_1d8 = local_1dc;
    }
    else {
      local_1d8 = 1;
      local_8 = 0xffffffff;
      thunk_FUN_10002fa0();
    }
  }
  ExceptionList = local_10;
  return local_1d8;
}



//==== FUN_1000fe00 @ 1000fe00 ====

void FUN_1000fe00(int param_1)

{
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 1;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  return;
}



//==== FUN_1000fef0 @ 1000fef0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000fef0(int param_1,double *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 local_8;
  
  local_8 = 0;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  if (param_3 == 0) {
    *param_2 = (double)*(uint *)(param_1 + 0x178);
  }
  else if (param_3 == 1) {
    uVar2 = *(uint *)(param_1 + 0x170) - *(uint *)(param_1 + 0x168);
    iVar1 = (*(int *)(param_1 + 0x174) - *(int *)(param_1 + 0x16c)) -
            (uint)(*(uint *)(param_1 + 0x170) < *(uint *)(param_1 + 0x168));
    if ((iVar1 < 0) || ((iVar1 < 1 && (uVar2 < 2)))) {
      local_8 = 0x80040014;
    }
    else {
      *param_2 = ((double)*(uint *)(param_1 + 0x178) * _DAT_105d5a38) /
                 (double)CONCAT44(iVar1,uVar2);
    }
  }
  else {
    local_8 = 0x80040003;
  }
  return local_8;
}



//==== FUN_10008ea0 @ 10008ea0 ====

undefined4
FUN_10008ea0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0x80040001;
  }
  else {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xac))
                              (*(undefined4 *)(param_1 + 4),param_2,param_3,param_4,param_5);
    uVar1 = (**(code **)(*piVar2 + 0xc))(piVar2);
  }
  return uVar1;
}



//==== FUN_100109a0 @ 100109a0 ====

void FUN_100109a0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  (**(code **)(*param_1 + 0x138))(param_1,param_2,param_3,param_4,param_5);
  return;
}



//==== FUN_100108b0 @ 100108b0 ====

void FUN_100108b0(int *param_1,undefined4 param_2)

{
  param_1[0x62] = 0;
  param_1[99] = 0;
  if (param_1[6] != 0) {
    (**(code **)(*param_1 + 0x10))(param_1,0);
    (**(code **)(*(int *)param_1[6] + 0x10))(param_1[6],0);
    (**(code **)(*(int *)param_1[6] + 8))(param_1[6],param_2);
    param_1[0x62] = 1;
    param_1[100] = 7;
  }
  return;
}



//==== FUN_10010960 @ 10010960 ====

void FUN_10010960(int param_1)

{
  if (*(int *)(param_1 + 0x188) == 1) {
    *(undefined4 *)(param_1 + 0x18c) = 1;
  }
  return;
}



//==== FUN_10010850 @ 10010850 ====

undefined4 FUN_10010850(int param_1)

{
  return *(undefined4 *)(param_1 + 0x188);
}



//==== FUN_10006ef0 @ 10006ef0 ====

void FUN_10006ef0(void)

{
  thunk_FUN_10003220(0,0);
  return;
}



//==== FUN_10006fd0 @ 10006fd0 ====

void FUN_10006fd0(void)

{
  thunk_FUN_10003220(0xffffffff,0);
  return;
}



//==== FUN_10006ec0 @ 10006ec0 ====

void FUN_10006ec0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10003220(param_2,param_3);
  return;
}



//==== FUN_100109e0 @ 100109e0 ====

void FUN_100109e0(int param_1,int param_2)

{
  if (param_2 == 1) {
    thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) SetLampStatesChecker Check=ON\n");
  }
  else {
    thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) SetLampStatesChecker Check=OFF\n");
  }
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(int *)(param_1 + 0x194) = param_2;
  if ((*(int *)(param_1 + 0x14) != 0) && (param_2 == 0)) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x28))(*(undefined4 *)(param_1 + 0x14));
  }
  return;
}



//==== FUN_10010a70 @ 10010a70 ====

undefined4 FUN_10010a70(int param_1)

{
  return *(undefined4 *)(param_1 + 0x194);
}



//==== FUN_100090f0 @ 100090f0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100090f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) SetPerspLengthFactor. Factor = %5.3lf\n",param_2
                     ,param_3);
  if ((double)CONCAT44(param_3,param_2) < _DAT_105d4888) {
    param_2 = 0x9999999a;
    param_3 = 0x3fc99999;
  }
  if (_DAT_105d4878 < (double)CONCAT44(param_3,param_2)) {
    param_2 = 0;
    param_3 = 0x40140000;
  }
  *(undefined4 *)(param_1 + 0x70) = param_2;
  *(undefined4 *)(param_1 + 0x74) = param_3;
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xac))(*(undefined4 *)(param_1 + 4));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x74))
                (piVar1,*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
    }
  }
  return;
}



//==== FUN_100091d0 @ 100091d0 ====

float10 FUN_100091d0(int param_1)

{
  return (float10)*(double *)(param_1 + 0x70);
}



//==== FUN_10009450 @ 10009450 ====

undefined4 FUN_10009450(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0x80040001;
  }
  else {
    thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) set camera altitude %f\n",param_2,param_3);
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xac))
                              (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x28),
                               *(undefined4 *)(param_1 + 0x2c));
    (**(code **)(*piVar2 + 0x20))(piVar2);
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xac))
                              (*(undefined4 *)(param_1 + 4),param_2,param_3);
    (**(code **)(*piVar2 + 0x3c))(piVar2);
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))
                (*(undefined4 *)(param_1 + 0x1c),param_2,param_3);
    }
    uVar1 = 0;
  }
  return uVar1;
}



//==== FUN_100095e0 @ 100095e0 ====

undefined4
FUN_100095e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0x80040001;
  }
  else {
    thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) set camera focus = %g, lfPixelSide = %g \n",
                       param_2,param_3,param_4,param_5);
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xac))
                              (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x28),
                               *(undefined4 *)(param_1 + 0x2c));
    (**(code **)(*piVar2 + 0x20))(piVar2);
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xac))
                              (*(undefined4 *)(param_1 + 4),param_2,param_3,param_4,param_5);
    (**(code **)(*piVar2 + 0x28))(piVar2);
    if (*(int *)(param_1 + 0x18) != 0) {
      (**(code **)(**(int **)(param_1 + 0x18) + 4))
                (*(undefined4 *)(param_1 + 0x18),param_2,param_3,param_4,param_5);
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))
                (*(undefined4 *)(param_1 + 0x1c),param_2,param_3,param_4,param_5);
    }
    uVar1 = 0;
  }
  return uVar1;
}



//==== FUN_10009890 @ 10009890 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10009890(int param_1,double *param_2,double *param_3,double *param_4)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = -0x7ffbffff;
  }
  else {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xac))
                              (*(undefined4 *)(param_1 + 4),param_3,param_4,param_2);
    iVar1 = (**(code **)(*piVar2 + 0x50))(piVar2);
    if (iVar1 < 0) {
      thunk_FUN_100033a0(&DAT_105d4ac0);
    }
    else {
      *param_2 = *param_2 * _DAT_105d3378;
      *param_3 = *param_3 * _DAT_105d3378;
      *param_4 = *param_4 * _DAT_105d3378;
      thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) GetEulerAngles [Deg.]. Azimuth = %.1lf, Tangage = %.1f, Roll = %.1f \n"
                         ,*(undefined4 *)param_2,*(undefined4 *)((int)param_2 + 4),
                         *(undefined4 *)param_3,*(undefined4 *)((int)param_3 + 4),
                         *(undefined4 *)param_4,*(undefined4 *)((int)param_4 + 4));
    }
  }
  return iVar1;
}



//==== FUN_10009720 @ 10009720 ====

undefined4
FUN_10009720(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0x80040001;
  }
  else {
    thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) Adjust Camera Props [%.1lf x %.1lf] - [%.1lf x %.1lf]. Dist = -%.1lf\n"
                       ,*param_2,param_2[1],*param_3,param_3[1],param_2[2],param_2[3],param_3[2],
                       param_3[3],param_4,param_5);
    thunk_FUN_10009840();
    thunk_FUN_10009840();
    local_14 = *param_2;
    local_10 = param_2[1];
    local_c = *param_3;
    local_8 = param_3[1];
    local_24 = param_2[2];
    local_20 = param_2[3];
    local_1c = param_3[2];
    local_18 = param_3[3];
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xac))
                              (*(undefined4 *)(param_1 + 4),&local_14,&local_24,param_4,param_5);
    uVar1 = (**(code **)(*piVar2 + 0x54))(piVar2);
  }
  return uVar1;
}



//==== FUN_10009ce0 @ 10009ce0 ====

undefined4 FUN_10009ce0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x198) = param_2;
  *(undefined4 *)(param_1 + 0x19c) = param_3;
  thunk_FUN_100033a0(">>>> TrafficAnalizer(LPlates) SetVideoDiscontinueTimes %d %d \n",param_2,
                     param_3);
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(**(int **)(param_1 + 4) + 0xb0))(*(undefined4 *)(param_1 + 4),param_2);
  }
  return 0;
}



//==== FUN_10009d60 @ 10009d60 ====

undefined4 FUN_10009d60(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 0x198);
  *param_3 = *(undefined4 *)(param_1 + 0x19c);
  return 0;
}



//==== FUN_100093d0 @ 100093d0 ====

undefined4
FUN_100093d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0x80040001;
  }
  else {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xac))
                              (*(undefined4 *)(param_1 + 4),param_2,param_3,param_4,param_5,param_6,
                               param_7,param_8,param_9);
    uVar1 = (**(code **)(*piVar2 + 0x60))(piVar2);
  }
  return uVar1;
}



//==== FUN_10010880 @ 10010880 ====

undefined4 FUN_10010880(int param_1)

{
  return *(undefined4 *)(param_1 + 400);
}



//==== FUN_10006c20 @ 10006c20 ====

undefined4 FUN_10006c20(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x68))
                      (*(undefined4 *)(param_1 + 0x10),param_2);
  }
  return uVar1;
}



//==== FUN_10006cf0 @ 10006cf0 ====

undefined4
FUN_10006cf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = 0x80040001;
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0x4000e;
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x70))
                      (*(undefined4 *)(param_1 + 0x10),param_2,param_3,param_4,param_5);
  }
  return uVar1;
}



//==== FUN_10006d60 @ 10006d60 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_10006d60(int param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    fVar1 = (float10)_DAT_105d3c50;
  }
  else {
    fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0x10) + 0x74))
                               (*(undefined4 *)(param_1 + 0x10),param_2,param_3);
  }
  return fVar1;
}



//==== FUN_10006db0 @ 10006db0 ====

undefined4 FUN_10006db0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = 0x80040001;
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0x4000e;
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x78))
                      (*(undefined4 *)(param_1 + 0x10),param_2,param_3,param_4);
  }
  return uVar1;
}



//==== FUN_10006e70 @ 10006e70 ====

undefined4 FUN_10006e70(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x7c))
                      (*(undefined4 *)(param_1 + 0x10),param_2,param_3);
  }
  return uVar1;
}



