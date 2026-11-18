//==== FUN_100a0280 @ 100a0280 ====

undefined4 FUN_100a0280(void)

{
  return 0;
}



//==== FUN_100a0090 @ 100a0090 ====

int __thiscall
FUN_100a0090(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_4;
  
  *param_5 = 0;
  if (*(uint *)(param_1 + 0x1090) < 0x40) {
    local_4 = 0;
    iVar2 = FUN_100c9490(param_2,param_3,param_4,(int *)(param_1 + 0x10a4),&local_4);
    uVar1 = local_4;
    if (-1 < iVar2) {
      if ((*(int *)(param_1 + 0x10a4) == 0) && (iVar2 = FUN_100c9200(param_2 * param_3), iVar2 < 0))
      {
        return iVar2;
      }
      *(int *)(param_1 + 0x1090) = *(int *)(param_1 + 0x1090) + 1;
      *param_5 = uVar1;
      return 0;
    }
  }
  else {
    iVar2 = -0x7ffbffec;
  }
  return iVar2;
}



//==== FUN_100a0130 @ 100a0130 ====

undefined4 __thiscall FUN_100a0130(uint param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)((-(uint)(*(int *)(param_1 + 0x18) != 0) & param_1) + 0x18);
  if (0x3f < *(uint *)(param_1 + 0x1094)) {
    return 0x8004001a;
  }
  iVar3 = thunk_FUN_10003930(iVar2 * 4);
  if (iVar3 == 0) {
    return 0x8004000c;
  }
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar1 = iVar4 * 8;
      iVar4 = iVar4 + 1;
      *(float *)(iVar3 + -4 + iVar4 * 4) = (float)*(double *)(param_2 + iVar1);
    } while (iVar4 < iVar2);
  }
  *(int *)(param_1 + 0xb00 + *(int *)(param_1 + 0x1094) * 8) = iVar3;
  *(undefined4 *)(param_1 + 0xb04 + *(int *)(param_1 + 0x1094) * 8) = param_3;
  *(int *)(param_1 + 0x1094) = *(int *)(param_1 + 0x1094) + 1;
  return 0;
}



//==== FUN_100a0080 @ 100a0080 ====

uint __fastcall FUN_100a0080(uint param_1)

{
  return -(uint)(*(int *)(param_1 + 0x18) != 0) & param_1;
}



//==== FUN_100a01c0 @ 100a01c0 ====

undefined4 __thiscall FUN_100a01c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(uint *)(param_1 + 0x1098) < 0x40) {
    *(undefined4 *)(param_1 + 0xd08 + *(uint *)(param_1 + 0x1098) * 8) = param_2;
    *(undefined4 *)(param_1 + 0xd04 + *(int *)(param_1 + 0x1098) * 8) = param_3;
    *(int *)(param_1 + 0x1098) = *(int *)(param_1 + 0x1098) + 1;
  }
  return 0;
}



