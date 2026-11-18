//==== ___sbh_alloc_new_region @ 1002058a ====

/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2008 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_1004355c == DAT_1004356c) {
    pvVar1 = HeapReAlloc(DAT_10041974,0,DAT_10043560,(DAT_1004356c + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_1004356c = DAT_1004356c + 0x10;
    DAT_10043560 = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_1004355c * 0x14 + (int)DAT_10043560);
  pvVar1 = HeapAlloc(DAT_10041974,8,0x41c4);
  puVar2[4] = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      puVar2[2] = 0xffffffff;
      *puVar2 = 0;
      puVar2[1] = 0;
      DAT_1004355c = DAT_1004355c + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
      return puVar2;
    }
    HeapFree(DAT_10041974,0,(LPVOID)puVar2[4]);
  }
  return (undefined4 *)0x0;
}



//==== _TestDefaultCountry @ 100265a7 ====

/* Library Function - Single Match
    _TestDefaultCountry
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl _TestDefaultCountry(short param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == *(short *)((int)&DAT_10035b50 + uVar1)) {
      return 0;
    }
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x14);
  return 1;
}



//==== _CountryEnumProc@4 @ 1002661a ====

/* Library Function - Single Match
    _CountryEnumProc@4
   
   Library: Visual Studio 2008 Release */

void _CountryEnumProc_4(char *param_1)

{
  int *piVar1;
  _ptiddata p_Var2;
  LCID Locale;
  int iVar3;
  undefined4 extraout_ECX;
  CHAR local_80 [120];
  undefined4 local_8;
  
  local_8 = DAT_100403ac ^ (uint)(local_80 + 0x7c);
  p_Var2 = __getptd();
  Locale = _LcidFromHexString(extraout_ECX,param_1);
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevCountry != 0) & 0xfffff005) +
                                0x1002,local_80,0x78);
  if (iVar3 == 0) {
    (p_Var2->_setloc_data).iLocState = 0;
  }
  else {
    iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchCountry,local_80);
    if ((iVar3 == 0) && (iVar3 = _TestDefaultCountry((short)Locale), iVar3 != 0)) {
      piVar1 = &(p_Var2->_setloc_data).iLocState;
      *piVar1 = *piVar1 | 4;
      *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
      (p_Var2->_setloc_data)._cachecp = Locale;
    }
  }
  __security_check_cookie(local_8 ^ (uint)(local_80 + 0x7c));
  return;
}



//==== _LangCountryEnumProc@4 @ 10026726 ====

/* Library Function - Single Match
    _LangCountryEnumProc@4
   
   Library: Visual Studio 2008 Release */

void _LangCountryEnumProc_4(char *param_1)

{
  int *piVar1;
  _ptiddata p_Var2;
  LCID Locale;
  int iVar3;
  size_t sVar4;
  undefined4 extraout_ECX;
  uint extraout_EDX;
  _setloc_struct *this;
  CHAR local_80 [120];
  undefined4 local_8;
  
  local_8 = DAT_100403ac ^ (uint)(local_80 + 0x7c);
  p_Var2 = __getptd();
  this = &p_Var2->_setloc_data;
  Locale = _LcidFromHexString(extraout_ECX,param_1);
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevCountry != 0) & 0xfffff005) +
                                0x1002,local_80,0x78);
  if (iVar3 == 0) {
LAB_10026779:
    (p_Var2->_setloc_data).iLocState = 0;
    goto LAB_100268e7;
  }
  iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchCountry,local_80);
  if (iVar3 == 0) {
    iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002
                                  ) + 0x1001,local_80,0x78);
    if (iVar3 == 0) goto LAB_10026779;
    iVar3 = __stricmp((char *)this->pchLanguage,local_80);
    if (iVar3 == 0) {
      piVar1 = &(p_Var2->_setloc_data).iLocState;
      *piVar1 = *piVar1 | 0x304;
      (p_Var2->_setloc_data)._cachecp = Locale;
LAB_10026829:
      *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
    }
    else if (((p_Var2->_setloc_data).iLocState & 2) == 0) {
      sVar4 = (p_Var2->_setloc_data).iPrimaryLen;
      if ((sVar4 == 0) || (iVar3 = __strnicmp((char *)this->pchLanguage,local_80,sVar4), iVar3 != 0)
         ) {
        if ((((p_Var2->_setloc_data).iLocState & 1U) == 0) &&
           (iVar3 = _TestDefaultCountry((short)Locale), iVar3 != 0)) {
          (p_Var2->_setloc_data).iLocState = extraout_EDX | 1;
          goto LAB_10026829;
        }
      }
      else {
        piVar1 = &(p_Var2->_setloc_data).iLocState;
        *piVar1 = *piVar1 | 2;
        *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
        sVar4 = _strlen((char *)this->pchLanguage);
        if (sVar4 == (p_Var2->_setloc_data).iPrimaryLen) {
          (p_Var2->_setloc_data)._cachecp = Locale;
        }
      }
    }
  }
  if (((p_Var2->_setloc_data).iLocState & 0x300U) == 0x300) goto LAB_100268e7;
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002)
                                + 0x1001,local_80,0x78);
  if (iVar3 == 0) goto LAB_10026779;
  iVar3 = __stricmp((char *)this->pchLanguage,local_80);
  if (iVar3 == 0) {
    piVar1 = &(p_Var2->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x200;
    if ((p_Var2->_setloc_data).bAbbrevLanguage == 0) {
      if (((p_Var2->_setloc_data).iPrimaryLen != 0) &&
         (sVar4 = _strlen((char *)this->pchLanguage), sVar4 == (p_Var2->_setloc_data).iPrimaryLen))
      {
        iVar3 = 1;
        goto LAB_100268bf;
      }
      goto LAB_100268cd;
    }
    (p_Var2->_setloc_data).iLocState = (p_Var2->_setloc_data).iLocState | 0x100;
  }
  else {
    if ((((p_Var2->_setloc_data).bAbbrevLanguage != 0) || ((p_Var2->_setloc_data).iPrimaryLen == 0))
       || (iVar3 = __stricmp((char *)this->pchLanguage,local_80), iVar3 != 0)) goto LAB_100268e7;
    iVar3 = 0;
LAB_100268bf:
    iVar3 = _TestDefaultLanguage(this,Locale,iVar3);
    if (iVar3 == 0) goto LAB_100268e7;
LAB_100268cd:
    piVar1 = &(p_Var2->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x100;
  }
  if ((p_Var2->_setloc_data)._cachecp == 0) {
    (p_Var2->_setloc_data)._cachecp = Locale;
  }
LAB_100268e7:
  __security_check_cookie(local_8 ^ (uint)(local_80 + 0x7c));
  return;
}



//==== _GetLcidFromLangCountry @ 100269b9 ====

/* Library Function - Single Match
    _GetLcidFromLangCountry
   
   Library: Visual Studio 2008 Release */

void _GetLcidFromLangCountry(void)

{
  uint uVar1;
  size_t sVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  char *_Str;
  
  _Str = (char *)*unaff_ESI;
  sVar2 = _strlen(_Str);
  unaff_ESI[4] = (uint)(sVar2 == 3);
  sVar2 = _strlen((char *)unaff_ESI[1]);
  unaff_ESI[6] = 0;
  unaff_ESI[5] = (uint)(sVar2 == 3);
  if (unaff_ESI[4] == 0) {
    iVar3 = _GetPrimaryLen(_Str,(char *)*unaff_ESI);
  }
  else {
    iVar3 = 2;
  }
  unaff_ESI[3] = iVar3;
  EnumSystemLocalesA(_LangCountryEnumProc_4,1);
  uVar1 = unaff_ESI[2];
  if ((((uVar1 & 0x100) == 0) || ((uVar1 & 0x200) == 0)) || ((uVar1 & 7) == 0)) {
    unaff_ESI[2] = 0;
  }
  return;
}



