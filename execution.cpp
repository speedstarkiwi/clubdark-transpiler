//assuming its execute bcuz axon
//gay ass comments
char  runlua@<al>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, __int128 a5, __int64 a6)
{
  if ( (unsigned int)(0x7FFFFFFF - a6) < 0x62 )
    sub_10001590();
  v8 = &a5;
  v36 = a6;
  if ( HIDWORD(a6) >= 0x10 )
    v8 = (__int128 *)a5;
  sub_1002AB10(//as queued
    v53,
    (int)v44,
    a6,
    (int)"spawn(function() script = Instance.new('LocalScript') script.Disabled = true script.Parent = nil\r\n",
    0x62u,
    (int)v8,//combine
    v36);
  LOBYTE(v59) = 3;
  v36 = 6;
  v35 = "\r\nend)";//lmao
  if ( v55 - v54 < 6 )
  {
    LOBYTE(v46) = 0;
    v11 = (_DWORD *)sub_10002AF0(v53, 6, v46, (int)v35, v36);
  }
  else
  {
    v9 = v53;
    if ( v55 >= 0x10 )
      v9 = (_DWORD *)v53[0];
    v10 = (char *)v9 + v54;
    v54 += 6;
    memmove(v10, v35, v36);
    v10[6] = 0;
    v11 = v53;
    v7 = v46;
  }
  v12 = *(_OWORD *)v11;
  v13 = *((_QWORD *)v11 + 2);
  v11[4] = 0;
  v11[5] = 15;
  *(_BYTE *)v11 = 0;
  v43 = v13;
  v42 = v12;
  if ( HIDWORD(a6) >= 0x10 )
  {
    v14 = (void *)a5;
    v15 = HIDWORD(a6) + 1;
    if ( (unsigned int)(HIDWORD(a6) + 1) >= 0x1000 )
    {
      v14 = *(void **)(a5 - 4);
      v15 = HIDWORD(a6) + 36;
      if ( (unsigned int)(a5 - (_DWORD)v14 - 4) > 0x1F )
LABEL_16:
        invalid_parameter_noinfo_noreturn();
    }
    v36 = v15;
    sub_1002B16E(v14);
    v12 = v42;
    v13 = v43;
  }
  LOBYTE(v59) = 2;
  a6 = v13;
  a5 = v12;
  if ( v55 >= 0x10 )
  {
    v16 = (void *)v53[0];
    v17 = v55 + 1;
    if ( v55 + 1 >= 0x1000 )
    {
      v16 = *(void **)(v53[0] - 4);
      v17 = v55 + 36;
      if ( (unsigned int)(v53[0] - (_DWORD)v16 - 4) > 0x1F )
        goto LABEL_16;
    }
    v36 = v17;
    sub_1002B16E(v16);
  }
  //lua?
  sub_10004F50("string");
  sub_10004F50("dump");
  if ( sub_10006F30(a6, "@aaa") )//bros buffer is not ok
  {
    printf("GAY EQRROR!");
  }
  v44 = (int *)v34;
  sub_10002460(&a5);
  LOBYTE(v59) = 5;
  sub_100070A0();
  LOBYTE(v59) = 2;
  v18 = sub_10004620();
  LOBYTE(v59) = 6;
  v36 = *(_DWORD *)(v18 + 16);
  v44 = &v33;
  sub_10002460(&a5);
  LOBYTE(v59) = 7;
  sub_100070A0();
  LOBYTE(v59) = 6;
  v19 = (_DWORD *)sub_10004620();
  LOBYTE(v59) = 8;
  if ( v19[5] >= 0x10u )
    v19 = (_DWORD *)*v19;
  dword_1003489C(
    v7,
    "tyo",
    v19,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    DWORD1(v42),
    DWORD2(v42),
    HIDWORD(v42),
    v43,
    HIDWORD(v43),
    v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53[0],
    v53[1],
    v53[2],
    v53[3],
    v54);
  LOBYTE(v59) = 6;
  if ( v55 >= 0x10 )
  {
    v20 = (void *)v53[0];
    v21 = (struct _EXCEPTION_REGISTRATION_RECORD *)(v55 + 1);
    if ( v55 + 1 >= 0x1000 )
    {
      v20 = *(void **)(v53[0] - 4);
      v21 = (struct _EXCEPTION_REGISTRATION_RECORD *)(v55 + 36);
      if ( (unsigned int)(v53[0] - (_DWORD)v20 - 4) > 0x1F )
LABEL_28:
        invalid_parameter_noinfo_noreturn();
    }
    v57 = v21;
    sub_1002B16E(v20);
  }
  LOBYTE(v59) = 2;
  v54 = 0;
  v55 = 15;
  LOBYTE(v53[0]) = 0;
  if ( HIDWORD(v42) >= 0x10 )
  {
    v22 = v40;
    v23 = HIDWORD(v42) + 1;
    if ( (unsigned int)(HIDWORD(v42) + 1) >= 0x1000 )
    {
      v22 = (_BYTE *)*((_DWORD *)v40 - 1);
      v23 = HIDWORD(v42) + 36;
      if ( (unsigned int)(v40 - v22 - 4) > 0x1F )
        goto LABEL_28;
    }
    v57 = (struct _EXCEPTION_REGISTRATION_RECORD *)v23;
    sub_1002B16E(v22);
  }
  sub_10005350(0, 0);
  sub_10026830(v24, "Hello okay\n", (char)v56);
  dword_10034898(v7);
  sub_10026830(v25, "Hello okay\n", (char)v58);
  if ( v52 >= 0x10 )
  {
    v26 = v47;
    v27 = (struct _EXCEPTION_REGISTRATION_RECORD *)(v52 + 1);
    if ( v52 + 1 >= 0x1000 )
    {
      v26 = (_BYTE *)*((_DWORD *)v47 - 1);
      v27 = (struct _EXCEPTION_REGISTRATION_RECORD *)(v52 + 36);
      if ( (unsigned int)(v47 - v26 - 4) > 0x1F )
LABEL_37:
        invalid_parameter_noinfo_noreturn();
    }
    v57 = v27;
    sub_1002B16E(v26);
  }
  v51 = 0;
  v52 = 15;
  LOBYTE(v47) = 0;
  if ( HIDWORD(a6) >= 0x10 )
  {
    v28 = (void *)a5;
    v29 = HIDWORD(a6) + 1;
    if ( (unsigned int)(HIDWORD(a6) + 1) >= 0x1000 )
    {
      v28 = *(void **)(a5 - 4);
      v29 = HIDWORD(a6) + 36;
      if ( (unsigned int)(a5 - (_DWORD)v28 - 4) > 0x1F )
        goto LABEL_37;
    }
    v57 = (struct _EXCEPTION_REGISTRATION_RECORD *)v29;
    sub_1002B16E(v28);
  }
  return 1;
}
