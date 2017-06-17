#include <stdio.h>

int main(void)
{
  int a;
  int *pA;

  a = 5;
  pA = &a;

  printf("変数aの値は%dです．\n", a);

  // *pA -> 変数a に値を代入することになる
  // ポインタpAが指している変数aに値を代入する
  *pA = 50; 

  printf("*pAに50を代入しました．\n");
  printf("変数aの値は%dです．\n", a);

  return 0;
}
