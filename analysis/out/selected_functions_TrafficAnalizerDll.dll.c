//==== getBinaryInfo @ 10001037 ====

/* WARNING: Removing unreachable block (ram,0x10001bbb) */
/* long __stdcall getBinaryInfo(unsigned char const *,unsigned long,struct sBinaryInfo *,unsigned
   long *) */

long getBinaryInfo(uchar *param_1,ulong param_2,sBinaryInfo *param_3,ulong *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined *puStack_8c;
  int iStack_1c;
  uint *puStack_10;
  ulong uStack_8;
  
                    /* 0x1037  2  ?getBinaryInfo@@YGJPBEKPAUsBinaryInfo@@PAK@Z */
  if ((param_4 == (ulong *)0x0) || (*param_4 != 0)) {
    if ((param_3 == (sBinaryInfo *)0x0) || ((param_1 == (uchar *)0x0 || (param_2 < 0x20)))) {
      lVar5 = -0x7ffbfffd;
    }
    else {
      *(undefined4 *)param_3 = 0;
      *(undefined4 *)(param_3 + 4) = 0;
      *(undefined4 *)(param_3 + 0xc) = 0;
      *(undefined4 *)(param_3 + 8) = 0xffffffff;
      uStack_8 = 1;
      if ((*(int *)param_1 == 0x3252504c) && (*(int *)(param_1 + 8) == 1)) {
        bVar3 = param_1[0x20];
        bVar1 = param_1[0x21];
        bVar2 = param_1[0x22];
        puStack_10 = (uint *)(param_1 + 0x23);
        if ((10 < bVar3) && (((bVar3 < 0x21 && (bVar1 < 9)) && (bVar2 != 0)))) {
          if (((bVar3 == 0xd) || ((bVar3 == 0xc && (4 < bVar1)))) && (*(int *)(param_1 + 0x14) != 0)
             ) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          for (iStack_1c = 0; iStack_1c < (int)(uint)bVar2; iStack_1c = iStack_1c + 1) {
            uVar7 = *puStack_10;
            uVar8 = puStack_10[1];
            puStack_10 = puStack_10 + 2;
            iVar6 = (uint)bVar3 * 10 + (uint)bVar1;
            if ((100 < uVar7) || (1000 < uVar8)) break;
            if (bVar4) {
              if (iStack_1c == 0) {
                *(undefined4 *)(param_3 + 8) = 1000;
                *(undefined4 *)(param_3 + 0xc) = 0;
                *(int *)(param_3 + 4) = iVar6;
                *(undefined4 *)param_3 = 1;
                thunk_FUN_100033a0(">>>> BinaryInfo(LPlates) %d (%d.FONT). Includes: ",
                                   *(undefined4 *)param_3,*(undefined4 *)(param_3 + 4));
                uStack_8 = 1;
                puStack_8c = &DAT_105d30bc;
              }
              else {
                puStack_8c = &DAT_105d30b8;
              }
              thunk_FUN_100033a0("%s%d.%d",puStack_8c,uVar7,uVar8);
            }
            else {
              *(uint *)(param_3 + iStack_1c * 0x10 + 8) = uVar7;
              *(uint *)(param_3 + iStack_1c * 0x10 + 0xc) = uVar8;
              *(int *)(param_3 + iStack_1c * 0x10 + 4) = iVar6;
              *(undefined4 *)(param_3 + iStack_1c * 0x10) = 1;
              thunk_FUN_100033a0(">>>> BinaryInfo(LPlates) %d (%d.%d.%d)\n",
                                 *(undefined4 *)(param_3 + iStack_1c * 0x10),
                                 *(undefined4 *)(param_3 + iStack_1c * 0x10 + 4),
                                 *(undefined4 *)(param_3 + iStack_1c * 0x10 + 8),
                                 *(undefined4 *)(param_3 + iStack_1c * 0x10 + 0xc));
              if (iStack_1c != 0) {
                uStack_8 = uStack_8 + 1;
              }
            }
            if ((param_4 == (ulong *)0x0) || (*param_4 <= uStack_8)) break;
          }
          if (bVar4) {
            thunk_FUN_100033a0(&DAT_105d3078);
          }
          if (param_4 != (ulong *)0x0) {
            *param_4 = uStack_8;
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
          *(undefined4 *)param_3 = 2;
          *(uint *)(param_3 + 4) = (uint)bVar3;
          thunk_FUN_100033a0(">>>> BinaryInfo(AdaBoost) %d (%d)\n",*(undefined4 *)param_3,
                             *(undefined4 *)(param_3 + 4));
          if (param_4 != (ulong *)0x0) {
            *param_4 = 1;
          }
          return 0;
        }
      }
      thunk_FUN_100033a0(">>>> BinaryInfo(UNKNOWN) %d (%d.%d.%d)\n",*(undefined4 *)param_3,
                         *(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8),
                         *(undefined4 *)(param_3 + 0xc));
      if (param_4 != (ulong *)0x0) {
        *param_4 = 1;
      }
      lVar5 = 1;
    }
  }
  else {
    *param_4 = 0;
    lVar5 = 0;
  }
  return lVar5;
}



