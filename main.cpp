//skidded and gay calamari
//imperious gon fin be mad lmaoo
///gay comments btw
HANDLE main()//lol gay ass
{
  v0 = GetModuleHandleA(0) + 3072164;
  v1 = GetModuleHandleA(0);
  v2 = ((int (__stdcall *)(int *))(v1 + 3072080))(&dword_100348C8);//omg hes using type defs!
  ((void (__thiscall *)(int))v0)(v2);
  dword_10034870 = dword_100348C8 + 12;
  v3 = *(int ***)(dword_100348C8 + 56);
  v4 = v3[1];
  v5 = *v3;
  if ( *v3 != v4 )
  {
    while ( 2 )//?
    {
      v6 = (_BYTE *)(*(int (**)(void))(*(_DWORD *)*v5 + 16))();
      v7 = "ScriptContext";//lmao skid ass nigga
      v8 = 9;
      while ( *(_DWORD *)v6 == *(_DWORD *)v7 )
      {
        v6 += 4;
        v7 += 4;
        v9 = v8 < 4;
        v8 -= 4;
        if ( v9 )
        {
          if ( *v6 == *v7 )
          {
            v10 = *v5;
            goto LABEL_8;
          }
          break;
        }
      }
      v5 += 2;
      if ( v5 != v4 )
        continue;
      break;
    }
  }
  v10 = v31;
LABEL_8:
  v11 = *(_DWORD *)(v10 + 188);
  dword_10034874 = v10;
  dword_10034868 = dword_100348AC(v10 + 188 + v11);
  v12 = sub_100070A0();
  v13 = &off_1002ED54;
  dword_1003486C = v12;
  v31 = (int)&off_1002ED54;
  do
  {
    sub_10004E40(0);
    v14 = (const char *)*(v13 - 1);
    v30 = (void *)v14;
    if ( v14 )
    {
      v15 = strlen(v14);
      if ( *(_DWORD *)(*(_DWORD *)(v12 + 16) + 68) >= *(_DWORD *)(*(_DWORD *)(v12 + 16) + 64) )
        sub_10010FF0(v12);
      v16 = *(int **)(v12 + 8);
      v17 = sub_1001DC00(v15);
      v13 = (int (__cdecl **)(int))v31;
      *v16 = v17;
      v16[2] = 4;
    }
    else
    {
      *(_DWORD *)(*(_DWORD *)(v12 + 8) + 8) = 0;//assuming its lua state
    }
    *(_DWORD *)(v12 + 8) += 16;
    v18 = *(_WORD *)(v12 + 52) + 1;
    *(_WORD *)(v12 + 52) = v18;
    if ( v18 >= 0xC8u )
    {
      if ( v18 == 200 )
        sub_1000E9F0(v12, "C stack overflow", v29);//bro did not embed lua
      if ( v18 >= 0xE1u )
        sub_1000EBC0(v12, 5);
    }
    if ( !sub_1000F130(0) )
      sub_10025060(v12, 1);
    v19 = *(_DWORD *)(v12 + 16);
    --*(_WORD *)(v12 + 52);
    if ( *(_DWORD *)(v19 + 68) >= *(_DWORD *)(v19 + 64) )
      sub_10010FF0(v12);
    v20 = v13[2];
    v13 += 2;
    v31 = (int)v13;
  }
  while ( v20 );
  v21 = 0;
  v31 = -858993460;
  v22 = GetModuleHandleA(0);
  v32 = -858993460;
  ///gay callcheck
  for ( i = 0; i < 2147483645; ++i )//whats he checking?
  {
    if ( v21 == 1000 )
      break;
    if ( *(_DWORD *)v22 == v31 && *((_DWORD *)v22 + 1) == v32 )
    {
      v30 = v22;
      if ( dword_100348BC == dword_100348C0 )
      {
        sub_10002850(dword_100348BC, &v30);
      }
      else
      {
        *(_DWORD *)dword_100348BC = v22;
        dword_100348BC += 4;
      }
      ++v21;
    }
    v22 = (HMODULE)((char *)v22 + 1);
  }
  AddVectoredExceptionHandler(1u, Handler);//skidded callcheck real
  v28 = (int)"game";//gay getglobal
  *(_DWORD *)(*(_DWORD *)(dword_10034868 + 116) + 24) = 7;
  //shit ass luac nigga
  dword_100348B0(v28);
  dword_100348B0("GetService");
  dword_100348A4(dword_10034868, -2);
  dword_100348A8(dword_10034868, "RunService");
  dword_100348A0(dword_10034868, 2, 1, 0);
  dword_100348B0("RenderStepped");
  dword_100348B0("Connect");//calamari stop playing with me :Sob:
  dword_100348A4(dword_10034868, -2);
  dword_100348B4(dword_10034868, sub_10028990, 0, 1, 0);
  dword_100348A0(dword_10034868, 2, 0, 0);
  *(_DWORD *)(dword_10034868 + 16) -= 32;///decrementing the top?
  execute(
    &v25,//get objects but shit
    "function GetObjects(assetId) local obj = game:GetService(\"InsertService\"):LoadLocalAsset(assetId) return { obj }; end",
    0x75u);

  sub_10002530(
    &v25,//gay watermark
    "game.StarterGui:SetCore('SendNotification', {Duration = 10; Title='Club Dark'; Text='Injected'; Icon = 'rbxassetid://2935928760'})",
    0x82u);
  sub_10028590(v25, v26);
  return CreateThread(0, 0, StartAddress, 0, 0, 0);//make pipe because no life
}
