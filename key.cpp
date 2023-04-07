///just added a key system to calamari im feeling good
// write access to const memory has been detected, the output may be wrong!
char keysystem()
{
  flOldProtect = 0;
  v67 = 0;
  v68 = 15;
  LOBYTE(v66[0]) = 0;
  sub_10002530(v66, "KcP8PS1S", 8u);//he uses the same keys ig
  v102 = 0;
  v70 = 0;
  v71 = 15;
  v69[0] = 0;
  sub_10002530(v69, "TTjzHh", 6u);
  LOBYTE(v102) = 1;
  v73 = 0;
  v74 = 15;
  v72[0] = 0;
  sub_10002530(v72, "o3YIs", 5u);
  LOBYTE(v102) = 2;
  v76 = 0;
  v77 = 15;
  v75[0] = 0;
  sub_10002530(v75, "Sz2Cs", 5u);
  LOBYTE(v102) = 3;
  v79 = 0;
  v80 = 15;
  v78[0] = 0;
  sub_10002530(v78, "ILkAl", 5u);
  LOBYTE(v102) = 4;
  v82 = 0;
  v83 = 15;
  v81[0] = 0;
  sub_10002530(v81, "6KjhIOL", 7u);
  LOBYTE(v102) = 5;
  v85 = 0;
  v86 = 15;
  v84[0] = 0;
  sub_10002530(v84, "ILbZ", 4u);
  LOBYTE(v102) = 6;
  v88 = 0;
  v89 = 15;
  v87[0] = 0;
  sub_10002530(v87, "bPvBLy", 6u);
  LOBYTE(v102) = 7;
  v91 = 0;
  v92 = 15;
  v90[0] = 0;
  sub_10002530(v90, "YRtuk0", 6u);
  LOBYTE(v102) = 8;
  v94 = 0;
  v95 = 15;
  v93[0] = 0;
  sub_10002530(v93, "iqtH4Say", 8u);
  LOBYTE(v102) = 9;
  v97 = 0;
  v98 = 15;
  v96[0] = 0;
  sub_10002530(v96, "rjwcA", 5u);
  LOBYTE(v102) = 10;
  v100 = 0;
  v101 = 15;
  v99[0] = 0;
  sub_10002530(v99, "rTNt", 4u);
  v102 = 12;
  memset(v65, 0, sizeof(v65));
  v0 = 15;
  v61 = 0;
  v62 = 15;
  LOBYTE(Src) = 0;
  Time = time64(0);//gay ass time system bro canhnot do anything properly
  v1 = gmtime64(&Time);
  v2 = *(__m128i *)&v1->tm_mon;
  v3 = *(__m128i *)&v1->tm_sec;
  v44 = v1->tm_isdst;
  v4 = _mm_cvtsi128_si32(v2);
  v5 = _mm_cvtsi128_si32(_mm_srli_si128(v3, 12));
  flOldProtect = _mm_cvtsi128_si32(_mm_srli_si128(v3, 8));
  v63 = 0;
  v49 = 100 * (flOldProtect + 100 * (v5 + 100 * v4));
  v52 = _mm_cvtsi128_si32(_mm_srli_si128(v3, 4));
  v53 = 1410065408 * _mm_cvtsi128_si32(_mm_srli_si128(v2, 4));
  v6 = _mm_cvtsi128_si32(v3);
  v50 = v6 + v53 + 100 * (v49 + v52);
  v51 = v6;
  if ( v4 == 1 )
  {
    v7 = v5 + 1 <= 28;
  }
  else
  {
    if ( (v4 == 5 || v4 == 3 || v4 == 8 || v4 == 10) && v5 + 1 > 30 )
      goto LABEL_15;
    if ( v4 == 5 || v4 == 3 || v4 == 8 || v4 == 10 )
      goto LABEL_14;
    v7 = v5 + 1 <= 31;
  }
  if ( v7 )
  {
LABEL_14:
    v8 = v51 + v53 + 100 * (v49 + 10000 + v52);
    goto LABEL_17;
  }
LABEL_15:
  v9 = v53;
  v8 = v51 + v53 + 100 * (v52 + 100 * (flOldProtect + 10100 + 10000 * v4));
  v53 = v8;
  if ( v4 + 1 <= 11 )
    goto LABEL_18;
  v8 = v9 + 100 * (v52 + 100 * flOldProtect) + v51 + 1411065408;
LABEL_17:
  v53 = v8;
LABEL_18:
  if ( (unsigned __int8)sub_10027580() != 1 )
  {
    memset(v56, 0, sizeof(v56));
    v56[0] = (int)&unk_10030860;
    std::ios::ios(&v56[28]);
    LOBYTE(v102) = 14;
    flOldProtect = 1;
    std::istream::istream(v56, &v56[4], 0, 0);
    v102 = 15;
    *(int *)((char *)v56 + *(_DWORD *)(v56[0] + 4)) = (int)&std::ifstream::`vftable';
    *(int *)((char *)&v55[43] + *(_DWORD *)(v56[0] + 4)) = *(_DWORD *)(v56[0] + 4) - 112;
    v49 = (DWORD)&v56[4];
    std::streambuf::streambuf(&v56[4]);
    LOBYTE(v102) = 16;
    v56[4] = (int)&std::filebuf::`vftable';
    LOBYTE(v56[22]) = 0;
    BYTE1(v56[19]) = 0;
    std::streambuf::_Init(&v56[4]);
    v56[23] = 0;
    v56[20] = dword_10034908;
    v56[21] = dword_1003490C;
    v56[18] = 0;
    LOBYTE(v102) = 17;
    if ( !sub_1002A410(dword_1003490C, 1, dword_1003490C) )
      std::ios::setstate((char *)v56 + *(_DWORD *)(v56[0] + 4), 2, 0);
    LOBYTE(v102) = 18;
    std::istream::operator>>(v56, &v63);
    if ( v63 >= v50 && v63 <= v8 )
    {
      if ( !sub_1002A3B0(&v56[4]) )
        std::ios::setstate((char *)v56 + *(_DWORD *)(v56[0] + 4), 2, 0);
      v54 = 1;
LABEL_61:
      sub_100284D0(v56);
      goto LABEL_62;
    }
    v57[4] = 0;
    v58 = 15;
    LOBYTE(v57[0]) = 0;
    sub_10002530(v57, "https://direct-link.net/22769/", 0x1Eu);//open link
    LOBYTE(v102) = 19;
    v11 = time64(0);
    srand(v11);
    flOldProtect = 0;
    VirtualProtect(FreeConsole, 1u, 0x40u, &flOldProtect);
    FreeConsole = (BOOL (__stdcall *)())194;
    AllocConsole();
    v12 = _acrt_iob_func(1u);
    freopen("CONOUT$", "w", v12);
    v13 = _acrt_iob_func(0);
    freopen("CONIN$", "r", v13);
    v14 = GetConsoleWindow();
    SetWindowLongA(v14, -16, 13238400);
    v15 = GetConsoleWindow();
    SetWindowPos(v15, HWND_MESSAGE|0x2, 0, 0, 0, 0, 0x63u);
    SetConsoleTitleA("hi");
    sub_10026830(v16, "24 hours key do all the tasks to get the key!\n", v41);
    do
    {
      v17 = rand() % 12;//why he so happy
      ++v65[v17];
    }
    while ( v65[v17] > 1 );
    v47[4] = 0;
    v48 = 15;
    LOBYTE(v47[0]) = 0;
    sub_10002530(v47, "start ", 6u);//cm,d
    LOBYTE(v102) = 20;
    v18 = sub_1002A8C0(v43, v47, v57);
    LOBYTE(v102) = 21;
    v19 = sub_1002A8C0(Block, v18, &v66[3 * v17]);
    LOBYTE(v102) = 22;
    if ( *(_DWORD *)(v19 + 20) >= 0x10u )
      v19 = *(_DWORD *)v19;
    system((const char *)v19);
    LOBYTE(v102) = 21;
    if ( v46 >= 0x10 )
    {
      v20 = Block[0];
      v21 = v46 + 1;
      if ( v46 + 1 >= 0x1000 )
      {
        v20 = (void *)*((_DWORD *)Block[0] - 1);
        v21 = v46 + 36;
        if ( (unsigned int)(Block[0] - v20 - 4) > 0x1F )
          goto LABEL_44;
      }
      v40 = v21;
      sub_1002B16E(v20);
    }
    LOBYTE(v102) = 20;
    Block[4] = 0;
    v46 = 15;
    LOBYTE(Block[0]) = 0;
    if ( v44 < 0x10 )
      goto LABEL_41;
    v22 = v43[0];
    v23 = v44 + 1;
    if ( v44 + 1 < 0x1000
      || (v22 = (void *)*((_DWORD *)v43[0] - 1), v23 = v44 + 36, (unsigned int)(v43[0] - v22 - 4) <= 0x1F) )
    {
      v40 = v23;
      sub_1002B16E(v22);
LABEL_41:
      LOBYTE(v102) = 19;
      v43[4] = 0;
      v44 = 15;
      LOBYTE(v43[0]) = 0;
      if ( v48 >= 0x10 )
      {
        v24 = v47[0];
        v25 = v48 + 1;
        if ( v48 + 1 >= 0x1000 )
        {
          v24 = (void *)*((_DWORD *)v47[0] - 1);
          v25 = v48 + 36;
          if ( (unsigned int)(v47[0] - v24 - 4) > 0x1F )
            goto LABEL_44;
        }
        v40 = v25;
        sub_1002B16E(v24);
      }
      sub_1002A680(v41, v42);
      sub_1002A680(v41, v42);
      v26 = std::ios::widen(std::cin + *(_DWORD *)(std::cin + 4), 10);
      sub_1002AC10(v26);
      if ( !v61 )
      {
        v27 = std::ios::widen(std::cin + *(_DWORD *)(std::cin + 4), 10);
        sub_1002AC10(v27);
      }
      sub_10002460(&Src);
      if ( (unsigned __int8)sub_10027630(v35, v36, v37, v38, v39, v40) )
      {
        std::ostream::operator<<(std::cout, 1);
        sub_1002A680(v41, v42);
      }
      else
      {
        sub_10026830(v28, "Wrong keys\n", v41);//(s)
      }
      v39 = 0;
      v40 = 15;
      LOBYTE(v35) = 0;
      sub_10002530(&v35, "`", 1u);
      if ( (unsigned __int8)sub_10027630(v35, v36, v37, v38, v39, v40) )
      {
        memset(v55, 0, sizeof(v55));
        sub_10029EF0(v29, v38, v39, v40);
        LOBYTE(v102) = 23;
        std::ostream::operator<<(v55, v53);
        if ( !sub_1002A3B0(&v55[1]) )
          std::ios::setstate((char *)v55 + *(_DWORD *)(v55[0] + 4), 2, 0);
        sub_10028410(v41, v42);
        v54 = 1;
      }
      else
      {
        v54 = 0;
      }
      LOBYTE(v102) = 18;
      if ( v58 >= 0x10 )
      {
        v30 = v57[0];
        v31 = v58 + 1;
        if ( v58 + 1 >= 0x1000 )
        {
          v30 = (void *)*((_DWORD *)v57[0] - 1);
          v31 = v58 + 36;
          if ( (unsigned int)(v57[0] - v30 - 4) > 0x1F )
LABEL_65:
            invalid_parameter_noinfo_noreturn();
        }
        v40 = v31;
        sub_1002B16E(v30);
      }
      v0 = v62;
      goto LABEL_61;
    }
LABEL_44:
    invalid_parameter_noinfo_noreturn();
  }
  memset(v55, 0, sizeof(v55));
  sub_10029EF0(v10, v38, v39, v40);
  LOBYTE(v102) = 13;
  std::ostream::operator<<(v55, v8);
  if ( !sub_1002A3B0(&v55[1]) )
    std::ios::setstate((char *)v55 + *(_DWORD *)(v55[0] + 4), 2, 0);
  sub_10028410(v41, v42);
  v54 = 1;
LABEL_62:
  LOBYTE(v102) = 11;
  if ( v0 >= 0x10 )
  {
    v32 = Src;
    v33 = v0 + 1;
    if ( v0 + 1 >= 0x1000 )
    {
      v32 = (_BYTE *)*((_DWORD *)Src - 1);
      v33 = v0 + 36;
      if ( (unsigned int)((_BYTE *)Src - v32 - 4) > 0x1F )
        goto LABEL_65;
    }
    v40 = v33;
    sub_1002B16E(v32);
  }
  v102 = -1;
  sub_1002B5D2(v66, 24, 12, &loc_10002410);
  return v54;
}
