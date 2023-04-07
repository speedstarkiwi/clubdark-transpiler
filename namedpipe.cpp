//bro did not hesitate to skid the pipe
//gay ass comments as always
HANDLE pipe(int a1, int a2, LPVOID lpThreadParameter)
{
  LOBYTE(v19) = 0;
  sub_10002530(&v19, &unk_1002E5CA, 0);//whats he calling now
  v29 = 0;
  strcpy(v23, "\\\\.\\pipe\\zxc");//goofy ahh pipe
  result = CreateNamedPipeA(v23, 3u, 0, 1u, 0xF423Fu, 0xF423Fu, 0, 0);//gay as buffer
  v6 = result;
  v16 = (int)result;
  while ( v6 != (void *)-1 )
  {
    if ( ConnectNamedPipe(v6, 0) )
    {
      while ( ReadFile(v6, &v21, 0xF423Eu, &v18, 0) )//skidded
      {
        if ( v18 >= 0xF423F )
        {
          sub_1002B2C0();
          JUMPOUT(0x10028D84);
        }
        *(&v21 + v18) = 0;
        LOBYTE(v29) = 2;
        v7 = &v21 + strlen(&v21) + 1 - v22;
        if ( 0x7FFFFFFF - (int)v20 < v7 )
          sub_10001590();
        v8 = &v19;
        if ( HIDWORD(v20) >= 0x10 )
          v8 = (__int128 *)v19;
        sub_1002AB10(&v14, v16, (int)v8, (int)v8, v20, (int)&v21, v7);
        v4 |= 1u;
        v17 = v4;
        if ( HIDWORD(v20) >= 0x10 )
        {
          v9 = (void *)v19;
          if ( (unsigned int)(HIDWORD(v20) + 1) >= 0x1000 )
          {
            v9 = *(void **)(v19 - 4);
            if ( (unsigned int)(v19 - (_DWORD)v9 - 4) > 0x1F )
              invalid_parameter_noinfo_noreturn();
          }
          sub_1002B16E(v9);
        }
        v19 = v14;
        v20 = v15;
        v29 = 0;
      }
      sub_10002460(&v19);
      sub_10028590(v11, v12);
      sub_10002530(&v19, &unk_1002E5CA, 0);
    }
    result = (HANDLE)DisconnectNamedPipe(v6);
  }
  if ( HIDWORD(v20) >= 0x10 )
  {
    v10 = (void *)v19;
    if ( (unsigned int)(HIDWORD(v20) + 1) >= 0x1000 )
    {
      v10 = *(void **)(v19 - 4);
      if ( (unsigned int)(v19 - (_DWORD)v10 - 4) > 0x1F )
        invalid_parameter_noinfo_noreturn();
    }
    result = (HANDLE)sub_1002B16E(v10);
  }
  return result;//bro is not  using bool
}
