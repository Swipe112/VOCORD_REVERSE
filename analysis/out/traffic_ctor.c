//==== FUN_10007f60 @ 10007f60 ====

void __fastcall FUN_10007f60(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1041628f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_LAB_105d3460;
  local_8 = 0;
  thunk_FUN_10004b20(param_1,0);
  local_8 = 0xffffffff;
  thunk_FUN_100058b0();
  ExceptionList = local_10;
  return;
}



//==== FUN_10003ae0 @ 10003ae0 ====

undefined4 * __fastcall FUN_10003ae0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_104161ef;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  thunk_FUN_10003e50();
  thunk_FUN_10004aa0();
  local_8 = 0;
  *param_1 = &PTR_LAB_105d3460;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[9] = 0;
  param_1[0x68] = 0;
  param_1[3] = 2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0xf;
  param_1[0x65] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 500;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0x33333333;
  param_1[0x13] = 0x3fd33333;
  param_1[0x66] = 0;
  param_1[0x67] = 30000;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x3ff00000;
  thunk_FUN_1000fe00(param_1);
  param_1[0x22] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x3ff00000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x3ff00000;
  param_1[0x10] = 0;
  param_1[0x11] = 0x40568000;
  param_1[0x51] = 0;
  param_1[0x52] = 0x32;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  thunk_FUN_100058e0(param_1 + 0x46);
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0x40590000;
  ExceptionList = local_10;
  return param_1;
}



//==== thunk_FUN_10004b20 @ 100013b6 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_10004b20(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  float10 fVar5;
  int *piStack_2a4;
  undefined4 uStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined1 uStack_230;
  undefined4 uStack_22f;
  int iStack_214;
  LPCWSTR pWStack_210;
  int *piStack_20c;
  undefined1 auStack_208 [248];
  int *piStack_110;
  int *piStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  double dStack_e4;
  undefined1 auStack_dc [8];
  undefined1 auStack_d4 [8];
  undefined1 auStack_cc [168];
  int *piStack_24;
  uint uStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1041620c;
  pvStack_10 = ExceptionList;
  uStack_14 = 0;
  ExceptionList = &pvStack_10;
  thunk_FUN_100033a0(">>>> TrafficAnalizer          DeInit 1\n");
  (**(code **)(*param_1 + 0x110))(param_1);
  if (param_1[1] != 0) {
    uStack_20 = (**(code **)(*(int *)param_1[1] + 0x2c))(param_1[1]);
    thunk_FUN_10001e70();
    uStack_8 = 0;
    uStack_ec = 0;
    uStack_e8 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    if (param_2 == (int *)0x0) {
      piStack_2a4 = (int *)param_1[9];
    }
    else {
      piStack_2a4 = param_2;
    }
    piStack_110 = piStack_2a4;
    if (param_1[0x62] == 1) {
      if (param_1[99] == 1) {
        (**(code **)(*(int *)param_1[6] + 0x30))(param_1[6]);
        param_1[99] = 0;
      }
      iVar1 = (**(code **)(*(int *)param_1[6] + 0x38))(param_1[6],0);
      if (iVar1 == 1) {
        (**(code **)(*(int *)param_1[6] + 0x40))(param_1[6],auStack_208);
        if (piStack_110 != (int *)0x0) {
          (**(code **)(*piStack_110 + 0x28))(piStack_110,auStack_208);
        }
        (**(code **)(*(int *)param_1[6] + 0x10))(param_1[6],0);
        param_1[0x62] = 0;
        param_1[100] = 0xf;
      }
      piStack_110 = (int *)0x0;
    }
    (**(code **)(*(int *)param_1[1] + 0xc))(param_1[1]);
    for (uStack_1c = 0; uStack_1c < uStack_20; uStack_1c = uStack_1c + 1) {
      piStack_24 = (int *)(**(code **)(*(int *)param_1[1] + 0x4c))(param_1[1],uStack_1c);
      if (piStack_24 != (int *)0x0) {
        piStack_10c = (int *)(**(code **)(*piStack_24 + 0x5c))(piStack_24);
        iVar1 = (**(code **)(*piStack_24 + 0x2c))(piStack_24);
        if (iVar1 == 1) {
          thunk_FUN_10002aa0(piStack_24);
          uStack_f8 = 0;
          uStack_100 = thunk_FUN_1000fff0(piStack_24,auStack_d4,auStack_dc,&uStack_ec,&uStack_f4,
                                          &uStack_f8,0);
          thunk_FUN_10002d20(auStack_d4,auStack_dc,&uStack_ec,&uStack_f4,uStack_f8,uStack_100);
          uStack_104 = thunk_FUN_100104c0(piStack_24,&uStack_fc,&uStack_f8);
          thunk_FUN_10002e00(uStack_fc,uStack_104);
          uStack_108 = thunk_FUN_10010820(piStack_24,&uStack_18);
          thunk_FUN_10002e40(uStack_18,uStack_108);
          if (param_1[4] == 0) {
            piStack_2a4 = (int *)0x3ff00000;
          }
          else {
            piStack_2a4 = (int *)0x0;
          }
          dStack_e4 = (double)(ZEXT48(piStack_2a4) << 0x20);
          piStack_20c = (int *)0x0;
          if (piStack_10c == (int *)0x0) {
            piStack_20c = (int *)(**(code **)(*piStack_24 + 0x6c))(piStack_24);
            thunk_FUN_10002e80(piStack_20c,0);
            if (piStack_20c == (int *)0x0) {
              thunk_FUN_10002e80(0,0x80040001);
            }
            else {
              fVar5 = (float10)(**(code **)(*piStack_20c + 0xc))(piStack_20c);
              dStack_e4 = (double)fVar5;
            }
          }
          else {
            dStack_e4 = 0.0;
            piStack_20c = (int *)(**(code **)(*piStack_10c + 0x1c))(piStack_10c);
            thunk_FUN_10002e80(piStack_20c,0);
            if (piStack_20c != (int *)0x0) {
              fVar5 = (float10)(**(code **)(*piStack_20c + 0xc))(piStack_20c);
              dStack_e4 = (double)fVar5;
            }
            if ((_DAT_105d3c50 < *(double *)(param_1 + 0x14)) &&
               (fVar5 = (float10)(**(code **)(*piStack_24 + 0x14))(piStack_24),
               fVar5 < (float10)*(double *)(param_1 + 0x14))) {
              thunk_FUN_10002c60(1);
            }
          }
          if (*(double *)(param_1 + 0x12) <= dStack_e4) {
            pWStack_210 = (LPCWSTR)0x0;
            uStack_234 = DAT_105d3c48;
            uStack_230 = DAT_105d3c4c;
            puVar4 = &uStack_22f;
            for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar4 = 0;
              puVar4 = puVar4 + 1;
            }
            *(undefined2 *)puVar4 = 0;
            *(undefined1 *)((int)puVar4 + 2) = 0;
            if (piStack_20c != (int *)0x0) {
              uStack_238 = 0xffffffff;
              uStack_23c = 0xffffffff;
              pWStack_210 = (LPCWSTR)(**(code **)*piStack_20c)(piStack_20c,&iStack_214);
              if ((pWStack_210 != (LPCWSTR)0x0) && (iStack_214 != 0)) {
                WideCharToMultiByte(0,0,pWStack_210,-1,(LPSTR)&uStack_234,0x20,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
              }
              (**(code **)(*piStack_20c + 8))(piStack_20c,&uStack_238,&uStack_23c);
            }
            iVar1 = (**(code **)(*piStack_24 + 0x18))(piStack_24);
            if (iVar1 == 0xd0) {
              uStack_240 = 0xffffffff;
              uVar2 = (**(code **)(*piStack_24 + 0xc))(piStack_24);
              uStack_248 = 0;
              piVar3 = (int *)(**(code **)(*piStack_24 + 8))(piStack_24);
              if (piVar3 != (int *)0x0) {
                uStack_240 = (**(code **)*piVar3)(piVar3);
                uStack_248 = (**(code **)(*piVar3 + 0xc))(piVar3);
              }
              thunk_FUN_10006c70(1,uStack_240,uVar2,uStack_248);
              puVar4 = (undefined4 *)(**(code **)(*piStack_24 + 0x40))(piStack_24);
              uVar2 = (**(code **)(*piStack_24 + 0x18))(piStack_24,&uStack_234,*puVar4,puVar4[1]);
              uVar2 = (**(code **)*piStack_24)(piStack_24,uVar2);
              thunk_FUN_100033a0(">>>> TrafficAnalizer          DeInit (Disapeared Double) [Id=%d] State=0x%04X (%s) TS=%-I64d\n"
                                 ,uVar2);
            }
            else {
              puVar4 = (undefined4 *)(**(code **)(*piStack_24 + 0x40))(piStack_24);
              uVar2 = (**(code **)(*piStack_24 + 0x18))(piStack_24,&uStack_234,*puVar4,puVar4[1]);
              uVar2 = (**(code **)*piStack_24)(piStack_24,uVar2);
              thunk_FUN_100033a0(">>>> TrafficAnalizer          DeInit (Disapeared)        [Id=%d] State=0x%04X (%s) TS=%-I64d\n"
                                 ,uVar2);
            }
            if (piStack_110 != (int *)0x0) {
              uVar2 = (**(code **)(*piStack_24 + 0x40))(piStack_24);
              (**(code **)(*piStack_110 + 4))(piStack_110,auStack_cc,uVar2);
            }
          }
        }
        if (piStack_10c != (int *)0x0) {
          (**(code **)(*piStack_24 + 0x58))(piStack_24,0);
          (**(code **)(*piStack_10c + 4))(piStack_10c);
        }
      }
    }
    (*(code *)**(undefined4 **)param_1[1])(param_1[1]);
    param_1[1] = 0;
    uStack_8 = 0xffffffff;
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
  ExceptionList = pvStack_10;
  return uStack_14;
}



//==== thunk_FUN_100058b0 @ 1000105f ====

void __fastcall thunk_FUN_100058b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_105d3b04;
  thunk_FUN_10005940();
  return;
}



//==== thunk_FUN_10003e50 @ 10001019 ====

undefined4 * __fastcall thunk_FUN_10003e50(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_105d3698;
  return param_1;
}



//==== thunk_FUN_10004aa0 @ 100010eb ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall thunk_FUN_10004aa0(undefined4 *param_1)

{
  float10 fVar1;
  
  *param_1 = &PTR_LAB_105d3b04;
  if (_DAT_1060bdd0 < _DAT_105d3af8) {
    fVar1 = (float10)thunk_FUN_10005a20();
    _DAT_1060bdd0 = (double)((fVar1 * (float10)_DAT_105d3ae8) / (float10)_DAT_105d3ae8);
  }
  thunk_FUN_100058e0(0);
  thunk_FUN_10005910();
  return param_1;
}



//==== thunk_FUN_1000fe00 @ 100010aa ====

void thunk_FUN_1000fe00(int param_1)

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



//==== thunk_FUN_100058e0 @ 10001406 ====

void __thiscall thunk_FUN_100058e0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



