/**
 * Author: sp00f
 * 本人聲明： 該項目僅用於學習和交流目的，不能用於其他目的，否則後果自負；
 * 另外該項目所有權僅屬於我個人，你可以下載或者fork該項目，但不能用於其他目的（如發表文章、出書、投稿等），否則必究。
 * 你可以吐槽我，不过还是希望尊重我的辛苦成果，有不对的地方，可以指出，大家互相探讨
 * 对于逆向我也是个小学生，水平有限，还请大佬们一笑而过
 * 出于时间考虑，我分析完之后，没有对调试过程返回来看，但应该大致描述清楚了
 * 如果纰漏，请见谅
 *
*/


int sub_1511C(_JNIEnv *a1, int a2, int a3)
{
  int v4; // lr@0
  _JNIEnv *v5; // r11@1
  int v6; // r1@1
  int v7; // r4@1
  int v8; // r2@1
  int *v9; // r2@1
  _BYTE *v10; // r0@1
  int v11; // t1@1
  int v12; // r0@1
  int v13; // r1@1
  int v14; // r2@1
  int v15; // [sp-20h] [bp-38h]@1
  int v16; // [sp-1Ch] [bp-34h]@1
  _JNIEnv *v17; // [sp-14h] [bp-2Ch]@1
  int v18; // [sp-10h] [bp-28h]@1
  int v19; // [sp-Ch] [bp-24h]@1
  int v20; // [sp+4h] [bp-14h]@1
  _BYTE savedregs[24]; // [sp+18h] [bp+0h]@4

  v5 = a1;
  v17 = a1;
  v18 = a2;
  v19 = v4;
  dyna_arg(a1, a2, a3);
  v7 = v6;
  v15 = v6;
  v16 = v4;
  v9 = *(int **)(dyna_arg(v17, v6, v8) - 1276911288);
  v10 = *(_BYTE **)((char *)&v17[4 * v7 - 319227820] - 2);
  v20 = *v9;
  v11 = *v10;
  // 解密出"android/content/Context"
  goto_dcrypto_entry(v10 + 1, (char *)&v15 - (((_WORD)v11 + 8) & 0x1F8), v11 + 1);
  ((void (__fastcall *)(_JNIEnv *, char *))v5->functions->FindClass)(v5, (char *)&v15 - (((_WORD)v11 + 8) & 0x1F8));
  v12 = ((int (__fastcall *)(_JNIEnv *))goto_check_exception)(v5);
  if ( !v12 )
  {
    dyna_arg(0, v13, v14);
    dyna_pc(3);
    JUMPOUT(2);
  }
  *(_DWORD *)&savedregs[4] = v12;
  *(_DWORD *)&savedregs[8] = v13;
  *(_DWORD *)&savedregs[12] = v4;
  dyna_arg(v12, v13, v14);
  return **(_DWORD **)(*(_DWORD *)&savedregs[4] - 1276911362) - v20;
}