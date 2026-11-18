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



//==== FUN_100a1570 @ 100a1570 ====

undefined4 __thiscall
FUN_100a1570(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_15;
  uint local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10418bbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 4) == 0) {
    ExceptionList = &local_c;
    local_10 = thunk_FUN_10003930(100);
    local_4 = 0;
    if (local_10 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_100ca4d0();
    }
    *(int *)(param_1 + 4) = iVar3;
    if (iVar3 == 0) {
      ExceptionList = local_c;
      return 0x8004000c;
    }
  }
  local_4 = 0xffffffff;
  iVar3 = *param_2;
  iVar5 = 4;
  FUN_100a2020(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  if (iVar3 == 0) {
    iVar5 = 4;
  }
  else {
    FUN_100a1b80(iVar3);
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      local_15 = *(undefined1 *)(iVar5 + (int)param_2);
      iVar5 = iVar5 + 1;
      FUN_100a1e40(*(undefined4 *)(param_1 + 0x10),1,&local_15);
    }
  }
  *param_5 = iVar5;
  if (iVar5 == 0) {
    uVar4 = 0x8004000c;
  }
  else {
    cVar2 = FUN_100ca720((int)param_2 + iVar5,param_5);
    if (cVar2 == '\0') {
      uVar4 = 0x8004000c;
    }
    else {
      iVar5 = *param_5 + iVar5;
      iVar3 = *(int *)(param_1 + 4);
      local_10 = iVar3;
      FUN_100a19f0(*(undefined4 *)(iVar3 + 0x50),*(undefined4 *)(iVar3 + 0x54));
      for (local_14 = 0;
          (iVar1 = *(int *)(param_1 + 0xc), iVar1 != 0 &&
          (local_14 < (uint)(*(int *)(param_1 + 0x10) - iVar1))); local_14 = local_14 + 1) {
        if (*(char *)(iVar1 + local_14) != '\0') {
          FUN_100a1c10(*(undefined4 *)(iVar3 + 0x54),&local_14);
        }
      }
      FUN_100a1a20(param_1 + 8);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar5 + (int)param_2);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar5 + 4 + (int)param_2);
      *(undefined4 *)(param_1 + 0x24) = param_4;
      *(undefined4 *)(param_1 + 0x18) = 1;
      *(undefined4 *)(param_1 + 0x20) = param_3;
      *param_5 = iVar5 + 8;
      uVar4 = 0;
    }
  }
  ExceptionList = local_c;
  return uVar4;
}



//==== FUN_100a1710 @ 100a1710 ====

void __fastcall FUN_100a1710(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    FUN_100ca5d0();
    thunk_FUN_100039f0(iVar1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  return;
}



//==== thunk_FUN_10003930 @ 100010e6 ====

void * thunk_FUN_10003930(size_t param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  
  pvVar1 = _malloc(param_1);
  if (pvVar1 == (void *)0x0) {
    uVar2 = thunk_FUN_100038e0();
    thunk_FUN_100033a0(">>>> ALLOCATION ERROR. Size%-d Available=%-d\n",param_1,uVar2);
  }
  return pvVar1;
}



//==== FUN_100ca4d0 @ 100ca4d0 ====

undefined4 * __fastcall FUN_100ca4d0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_104190a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 0xf) = local_11;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = local_11;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  local_4 = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[6] = 0;
  uVar1 = FUN_103056d0();
  param_1[0x17] = uVar1;
  if (((byte)uVar1 & 0x20) == 0x20) {
    param_1[0x18] = &LAB_100caca0;
  }
  else {
    param_1[0x18] = FUN_100caab0;
  }
  *param_1 = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  ExceptionList = local_c;
  return param_1;
}



//==== FUN_100a2020 @ 100a2020 ====

undefined1 * __thiscall FUN_100a2020(int param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  puVar2 = param_2;
  for (; param_3 != puVar1; param_3 = param_3 + 1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 **)(param_1 + 8) = puVar2;
  return param_2;
}



//==== FUN_100a1b80 @ 100a1b80 ====

void __thiscall FUN_100a1b80(int param_1,uint param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4);
  }
  if (uVar3 < param_2) {
    uVar3 = param_2;
    if ((int)param_2 < 0) {
      uVar3 = 0;
    }
    puVar4 = (undefined1 *)thunk_FUN_10003930(uVar3);
    puVar1 = *(undefined1 **)(param_1 + 8);
    puVar5 = *(undefined1 **)(param_1 + 4);
    if (puVar5 != puVar1) {
      puVar6 = puVar4;
      do {
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = *puVar5;
        }
        puVar6 = puVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (puVar5 != puVar1);
    }
    thunk_FUN_100039f0(*(undefined4 *)(param_1 + 4));
    *(undefined1 **)(param_1 + 0xc) = puVar4 + param_2;
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 == 0) {
      *(undefined1 **)(param_1 + 4) = puVar4;
      *(undefined1 **)(param_1 + 8) = puVar4;
      return;
    }
    *(undefined1 **)(param_1 + 4) = puVar4;
    *(undefined1 **)(param_1 + 8) = puVar4 + (*(int *)(param_1 + 8) - iVar2);
  }
  return;
}



//==== FUN_100a1e40 @ 100a1e40 ====

void __thiscall FUN_100a1e40(int param_1,undefined1 *param_2,uint param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  puVar5 = *(undefined1 **)(param_1 + 8);
  if (param_3 <= (uint)(*(int *)(param_1 + 0xc) - (int)puVar5)) {
    if ((uint)((int)puVar5 - (int)param_2) < param_3) {
      puVar6 = param_2 + param_3;
      if (param_2 != puVar5) {
        puVar4 = puVar6 + -param_3;
        do {
          if (puVar6 != (undefined1 *)0x0) {
            *puVar6 = *puVar4;
          }
          puVar6 = puVar6 + 1;
          puVar4 = puVar4 + 1;
        } while (puVar4 != puVar5);
      }
      puVar5 = *(undefined1 **)(param_1 + 8);
      for (puVar6 = param_2 + (param_3 - (int)puVar5); puVar6 != (undefined1 *)0x0;
          puVar6 = puVar6 + -1) {
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = *param_4;
        }
        puVar5 = puVar5 + 1;
      }
      puVar5 = *(undefined1 **)(param_1 + 8);
      for (; param_2 != puVar5; param_2 = param_2 + 1) {
        *param_2 = *param_4;
      }
    }
    else {
      if (param_3 == 0) {
        return;
      }
      puVar6 = puVar5;
      for (puVar4 = puVar5 + -param_3; puVar4 != puVar5; puVar4 = puVar4 + 1) {
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = *puVar4;
        }
        puVar6 = puVar6 + 1;
      }
      puVar5 = *(undefined1 **)(param_1 + 8);
      puVar6 = puVar5 + -param_3;
      if (param_2 != puVar6) {
        do {
          puVar4 = puVar6 + -1;
          puVar6 = puVar6 + -1;
          puVar5 = puVar5 + -1;
          *puVar5 = *puVar4;
        } while (puVar6 != param_2);
      }
      puVar5 = param_2 + param_3;
      for (; param_2 != puVar5; param_2 = param_2 + 1) {
        *param_2 = *param_4;
      }
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3;
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  if ((iVar2 == 0) || (uVar7 = (int)puVar5 - iVar2, (uint)((int)puVar5 - iVar2) <= param_3)) {
    uVar7 = param_3;
  }
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)puVar5 - iVar2;
  }
  iVar2 = iVar2 + uVar7;
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  puVar4 = (undefined1 *)thunk_FUN_10003930(iVar3);
  puVar6 = puVar4;
  for (puVar5 = *(undefined1 **)(param_1 + 4); puVar5 != param_2; puVar5 = puVar5 + 1) {
    if (puVar6 != (undefined1 *)0x0) {
      *puVar6 = *puVar5;
    }
    puVar6 = puVar6 + 1;
  }
  if (param_3 != 0) {
    puVar5 = puVar6;
    uVar7 = param_3;
    do {
      if (puVar5 != (undefined1 *)0x0) {
        *puVar5 = *param_4;
      }
      puVar5 = puVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  puVar1 = *(undefined1 **)(param_1 + 8);
  puVar5 = puVar6 + param_3;
  if (param_2 != puVar1) {
    param_2 = param_2 + (int)(puVar5 + (-param_3 - (int)puVar6));
    do {
      if (puVar5 != (undefined1 *)0x0) {
        *puVar5 = *param_2;
      }
      puVar5 = puVar5 + 1;
      param_2 = param_2 + 1;
    } while (param_2 != puVar1);
  }
  thunk_FUN_100039f0(*(undefined4 *)(param_1 + 4));
  *(undefined1 **)(param_1 + 0xc) = puVar4 + iVar2;
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    *(undefined1 **)(param_1 + 4) = puVar4;
    *(undefined1 **)(param_1 + 8) = puVar4 + param_3;
    return;
  }
  *(undefined1 **)(param_1 + 4) = puVar4;
  *(undefined1 **)(param_1 + 8) = puVar4 + param_3 + (*(int *)(param_1 + 8) - iVar2);
  return;
}



//==== FUN_100ca720 @ 100ca720 ====

undefined4 __thiscall FUN_100ca720(int param_1,uint *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_18;
  int local_c;
  
  piVar3 = param_3;
  FUN_100ca570();
  *param_3 = 0;
  uVar10 = *param_2;
  *param_3 = 4;
  *(uint *)(param_1 + 0x28) = param_2[1];
  *param_3 = *param_3 + 4;
  if (uVar10 == 0) {
    return 0;
  }
  puVar5 = (undefined4 *)thunk_FUN_10003930(uVar10 * 4);
  if (puVar5 == (undefined4 *)0x0) {
    FUN_100ca570();
    return 0;
  }
  puVar6 = puVar5;
  for (uVar7 = uVar10 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  iVar8 = 0;
  if (0 < (int)uVar10) {
    do {
      puVar5[iVar8] = *(undefined4 *)((int)param_2 + *param_3);
      iVar8 = iVar8 + 1;
      *param_3 = *param_3 + 4;
    } while (iVar8 < (int)uVar10);
  }
  cVar4 = FUN_100ca610(puVar5,uVar10);
  if (cVar4 == '\0') {
    FUN_100ca570();
    return 0;
  }
  puVar6 = *(undefined4 **)(param_1 + 4);
  for (iVar8 = (*(uint *)(param_1 + 0x1c) & 0x1fffffff) << 1; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  puVar6 = *(undefined4 **)(param_1 + 0xc);
  for (iVar8 = (*(uint *)(param_1 + 0x20) & 0x7ffffff) << 3; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  puVar6 = *(undefined4 **)(param_1 + 0x14);
  for (iVar8 = (*(uint *)(param_1 + 0x20) & 0x1fffffff) << 1; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  param_3 = *(int **)(param_1 + 4);
  local_18 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x38) = 0;
  local_c = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x24) + local_c * 4);
      iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 4 + local_c * 4);
      iVar8 = ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) * 4 + 4;
      uVar10 = 0;
      if (0 < iVar2) {
        do {
          uVar7 = uVar10 & 0x80000003;
          if ((int)uVar7 < 0) {
            uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
          }
          if (0 < iVar1) {
            puVar6 = (undefined4 *)
                     ((int)param_3 +
                     (uVar7 + ((int)(uVar10 + ((int)uVar10 >> 0x1f & 3U)) >> 2) * iVar1 * 4) * 4);
            iVar9 = iVar1;
            do {
              *puVar6 = *(undefined4 *)(*piVar3 + (int)param_2);
              puVar6 = puVar6 + 4;
              iVar9 = iVar9 + -1;
              *piVar3 = *piVar3 + 4;
            } while (iVar9 != 0);
          }
          *(undefined4 *)(local_18 + uVar10 * 4) = *(undefined4 *)((int)param_2 + *piVar3);
          uVar10 = uVar10 + 1;
          *piVar3 = *piVar3 + 4;
        } while ((int)uVar10 < iVar2);
      }
      param_3 = (int *)((int)param_3 + iVar8 * iVar1 * 4);
      local_18 = local_18 + iVar8 * 4;
      local_c = local_c + 1;
      *(int *)(param_1 + 0x38) =
           *(int *)(param_1 + 0x38) + ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) * 4 + 4;
    } while (local_c < *(int *)(param_1 + 0x2c));
  }
  thunk_FUN_100039f0(puVar5);
  return 1;
}



//==== FUN_100a19f0 @ 100a19f0 ====

void __thiscall FUN_100a19f0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (; param_3 != puVar1; param_3 = param_3 + 1) {
    *param_2 = *param_3;
    param_2 = param_2 + 1;
  }
  *(undefined4 **)(param_1 + 8) = param_2;
  return;
}



//==== FUN_100a1c10 @ 100a1c10 ====

int __thiscall FUN_100a1c10(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 4);
  iVar7 = (int)param_2 - iVar3 >> 2;
  if (*(int *)(param_1 + 0xc) - iVar2 >> 2 != 0) {
    if (iVar2 - (int)param_2 >> 2 == 0) {
      FUN_100a1de0(param_2,iVar2,param_2 + 1);
      FUN_100a1e10(*(int *)(param_1 + 8),1 - (*(int *)(param_1 + 8) - (int)param_2 >> 2),param_3);
      puVar6 = *(undefined4 **)(param_1 + 8);
      for (; param_2 != puVar6; param_2 = param_2 + 1) {
        *param_2 = *param_3;
      }
    }
    else {
      FUN_100a1de0(iVar2 + -4,iVar2,iVar2);
      puVar6 = *(undefined4 **)(param_1 + 8);
      for (puVar1 = puVar6; param_2 != puVar1 + -1; puVar1 = puVar1 + -1) {
        puVar6 = puVar6 + -1;
        *puVar6 = puVar1[-2];
      }
      puVar6 = param_2 + 1;
      if (param_2 != puVar6) {
        do {
          *param_2 = *param_3;
          param_2 = param_2 + 1;
        } while (param_2 != puVar6);
      }
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
    return *(int *)(param_1 + 4) + iVar7 * 4;
  }
  if ((iVar3 == 0) || (uVar5 = iVar2 - iVar3 >> 2, uVar5 < 2)) {
    uVar5 = 1;
  }
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 - iVar3 >> 2;
  }
  iVar2 = iVar2 + uVar5;
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  iVar4 = thunk_FUN_10003930(iVar3 * 4);
  puVar6 = *(undefined4 **)(param_1 + 4);
  iVar3 = iVar4;
  if (puVar6 != param_2) {
    do {
      FUN_100a2050(iVar3,puVar6);
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + 4;
    } while (puVar6 != param_2);
  }
  FUN_100a2050(iVar3,param_3);
  FUN_100a1de0(param_2,*(undefined4 *)(param_1 + 8),iVar3 + 4);
  FUN_100a1dd0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  thunk_FUN_100039f0(*(undefined4 *)(param_1 + 4));
  *(int *)(param_1 + 0xc) = iVar4 + iVar2 * 4;
  iVar2 = FUN_100a1db0();
  *(int *)(param_1 + 4) = iVar4;
  *(int *)(param_1 + 8) = iVar4 + 4 + iVar2 * 4;
  return iVar4 + iVar7 * 4;
}



//==== FUN_100a1a20 @ 100a1a20 ====

int __thiscall FUN_100a1a20(int param_1,int param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  if (param_1 != param_2) {
    puVar1 = *(undefined1 **)(param_2 + 4);
    if (puVar1 == (undefined1 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(param_2 + 8) - (int)puVar1;
    }
    puVar5 = *(undefined1 **)(param_1 + 4);
    if (puVar5 == (undefined1 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(param_1 + 8) - (int)puVar5;
    }
    if (uVar6 <= uVar2) {
      puVar4 = *(undefined1 **)(param_2 + 8);
      for (; puVar1 != puVar4; puVar1 = puVar1 + 1) {
        *puVar5 = *puVar1;
        puVar5 = puVar5 + 1;
      }
      if (*(int *)(param_2 + 4) == 0) {
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
        return param_1;
      }
      *(int *)(param_1 + 8) =
           *(int *)(param_1 + 4) + (*(int *)(param_2 + 8) - *(int *)(param_2 + 4));
      return param_1;
    }
    if (puVar1 == (undefined1 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(param_2 + 8) - (int)puVar1;
    }
    if (puVar5 == (undefined1 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(param_1 + 0xc) - (int)puVar5;
    }
    if (uVar6 <= uVar2) {
      if (puVar5 == (undefined1 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 8) - (int)puVar5;
      }
      puVar4 = puVar1 + iVar3;
      for (; puVar1 != puVar4; puVar1 = puVar1 + 1) {
        *puVar5 = *puVar1;
        puVar5 = puVar5 + 1;
      }
      puVar1 = *(undefined1 **)(param_2 + 8);
      puVar5 = *(undefined1 **)(param_1 + 8);
      for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = *puVar4;
        }
        puVar5 = puVar5 + 1;
      }
      if (*(int *)(param_2 + 4) == 0) {
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
        return param_1;
      }
      *(int *)(param_1 + 8) =
           *(int *)(param_1 + 4) + (*(int *)(param_2 + 8) - *(int *)(param_2 + 4));
      return param_1;
    }
    thunk_FUN_100039f0(puVar5);
    if (*(int *)(param_2 + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4);
    }
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    puVar4 = (undefined1 *)thunk_FUN_10003930(iVar3);
    *(undefined1 **)(param_1 + 4) = puVar4;
    puVar1 = *(undefined1 **)(param_2 + 8);
    for (puVar5 = *(undefined1 **)(param_2 + 4); puVar5 != puVar1; puVar5 = puVar5 + 1) {
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = *puVar5;
      }
      puVar4 = puVar4 + 1;
    }
    *(undefined1 **)(param_1 + 8) = puVar4;
    *(undefined1 **)(param_1 + 0xc) = puVar4;
  }
  return param_1;
}



//==== FUN_100ca5d0 @ 100ca5d0 ====

void __fastcall FUN_100ca5d0(int param_1)

{
  FUN_100ca570();
  thunk_FUN_100039f0(*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  thunk_FUN_100039f0(*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



//==== thunk_FUN_100039f0 @ 10001271 ====

void thunk_FUN_100039f0(undefined4 param_1)

{
  FUN_10208b22(param_1);
  return;
}



