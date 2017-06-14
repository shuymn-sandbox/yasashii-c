#include <stdio.h>

int main(void)
{
  int a, b;
  int *pA; // * : 間接参照演算子

  a = 5;
  b = 10;

  pA = &a; // 変数aのアドレスを代入

  printf("変数aの値は%dです．\n", a);
  printf("ポインタpAの値は%pです．\n", pA);
  printf("*pAの値は%dです．\n", *pA);

  pA = &b; // 変数bのアドレスを代入

  printf("変数bの値は%dです．\n", b);
  printf("ポインタpAの値は%pに変更されました．\n", pA);
  printf("*pAの値は%dです．\n", *pA);

  return 0;
}
