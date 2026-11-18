//==== FUN_100183a0 @ 100183a0 ====

undefined4 FUN_100183a0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_100178b0(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  DAT_10041684 = param_1;
  if ((param_2 == 1) && (FUN_100181f0(0x10033e0c,(LPCWSTR)0x0), DAT_10041678 != '\0')) {
    return 0;
  }
  return 1;
}



//==== FUN_100178b0 @ 100178b0 ====

void FUN_100178b0(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    DAT_10041674 = param_1;
  }
  return;
}



//==== FUN_100181f0 @ 100181f0 ====

BOOL __cdecl FUN_100181f0(int param_1,LPCWSTR param_2)

{
  int *piVar1;
  uint uVar2;
  LPCWSTR pWVar3;
  BOOL BVar4;
  int iVar5;
  BOOL BVar6;
  LPCWSTR pWVar7;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1002f980;
  local_c = ExceptionList;
  uVar2 = DAT_100403ac ^ (uint)(local_10 + -0x18);
  ExceptionList = &local_c;
  pWVar3 = param_2;
  if (param_2 == (LPCWSTR)0x0) {
    pWVar3 = (LPCWSTR)FUN_1001b78b();
  }
  BVar4 = HeapQueryInformation(pWVar3,HeapCompatibilityInformation,local_10,4,(PSIZE_T)0x0);
  FUN_10018140(&local_18,(short *)&DAT_10033e08);
  local_4 = 0;
  if (param_1 != 0) {
    FUN_100180e0(&local_18,L" %s ",(char)param_1);
  }
  iVar5 = (**(code **)(DAT_100416f8 + 0xc))(uVar2);
  pWVar7 = (LPCWSTR)(iVar5 + 0x10);
  local_4 = CONCAT31(local_4._1_3_,1);
  param_2 = pWVar7;
  if (BVar4 == 0) {
    GetLastError();
    FUN_100180c0(&param_2,L"Failed to retrieve %sheap (0x%p) features with LastError %d.\n",
                 (char)local_18);
    pWVar7 = param_2;
    OutputDebugStringW(param_2);
  }
  uStack_14 = 2;
  BVar4 = HeapSetInformation(pWVar3,HeapCompatibilityInformation,&uStack_14,4);
  if (BVar4 == 0) {
    GetLastError();
    FUN_100180c0(&param_2,L"Enabling Low Fragmentation Heap failed (%sHeap 0x%p). Error %d\n",
                 (char)local_18);
    pWVar7 = param_2;
    OutputDebugStringW(param_2);
  }
  BVar6 = HeapQueryInformation(pWVar3,HeapCompatibilityInformation,local_10,4,(PSIZE_T)0x0);
  if (BVar6 == 0) {
    GetLastError();
    FUN_100180c0(&param_2,L"Failed to retrieve %sheap (0x%p) features with LastError %d.\n",
                 (char)local_18);
    pWVar7 = param_2;
    OutputDebugStringW(param_2);
  }
  local_4 = local_4 & 0xffffff00;
  pWVar3 = pWVar7 + -2;
  LOCK();
  iVar5 = *(int *)pWVar3;
  *(int *)pWVar3 = *(int *)pWVar3 + -1;
  UNLOCK();
  if (iVar5 + -1 < 1) {
    (**(code **)(**(int **)(pWVar7 + -8) + 4))(pWVar7 + -8);
  }
  local_4 = 0xffffffff;
  piVar1 = (int *)(local_18 + -4);
  LOCK();
  iVar5 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar5 + -1 < 1) {
    (**(code **)(**(int **)(local_18 + -0x10) + 4))((undefined4 *)(local_18 + -0x10));
  }
  ExceptionList = local_c;
  return BVar4;
}



//==== FUN_1001b78b @ 1001b78b ====

undefined4 FUN_1001b78b(void)

{
  return DAT_10041974;
}



// FAILED HeapQueryInformation @ EXTERNAL:00000017 : Exception while decompiling EXTERNAL:00000017: Cannot marshal address space: EXTERNAL

//==== FUN_10018140 @ 10018140 ====

int * __thiscall FUN_10018140(void *this,short *param_1)

{
  short sVar1;
  int iVar2;
  HMODULE pHVar3;
  short *psVar4;
  undefined1 auStack_e [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1002f948;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = (**(code **)(DAT_100416f8 + 0xc))(DAT_100403ac ^ (uint)(auStack_e + -10));
  *(int *)this = iVar2 + 0x10;
  uStack_4 = 0;
  if (param_1 == (short *)0x0) {
    iVar2 = 0;
  }
  else {
    if (((uint)param_1 & 0xffff0000) == 0) {
      pHVar3 = FUN_100179c0((uint)param_1 & 0xffff,0);
      if (pHVar3 == (HMODULE)0x0) {
        ExceptionList = local_c;
        return this;
      }
      FUN_10017e30(this,pHVar3,(uint)param_1 & 0xffff);
      ExceptionList = local_c;
      return this;
    }
    psVar4 = param_1;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar1 != 0);
    iVar2 = (int)psVar4 - (int)(param_1 + 1) >> 1;
  }
  FUN_10017f00(this,param_1,iVar2);
  ExceptionList = local_c;
  return this;
}



//==== FUN_100180e0 @ 100180e0 ====

void __cdecl FUN_100180e0(void *param_1,wchar_t *param_2,char param_3)

{
  FUN_10017fb0(param_1,param_2,&param_3);
  return;
}



// FAILED GetLastError @ EXTERNAL:0000001b : Exception while decompiling EXTERNAL:0000001b: Cannot marshal address space: EXTERNAL

// FAILED OutputDebugStringW @ EXTERNAL:00000016 : Exception while decompiling EXTERNAL:00000016: Cannot marshal address space: EXTERNAL

//==== FUN_100180c0 @ 100180c0 ====

void __cdecl FUN_100180c0(void *param_1,wchar_t *param_2,char param_3)

{
  FUN_10018040(param_1,param_2,&param_3);
  return;
}



// FAILED HeapSetInformation @ EXTERNAL:00000015 : Exception while decompiling EXTERNAL:00000015: Cannot marshal address space: EXTERNAL

