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


signed int sub_2AC24‬(int a1)
{
  int v1; // r4@1

  v1 = a1;
  if ( a1 )
  {
    pthread_mutex_lock(&plock);
    if ( !dword_B3FB9E0C )
      dword_B3FB9E0C = v1;
    pthread_mutex_unlock(&plock);
  }
  return 1;
}