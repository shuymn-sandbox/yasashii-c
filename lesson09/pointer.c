#include <stdio.h>

int main(void)
{
  int a;
  int *pA; // ポインタの宣言

  a = 5;
  pA = &a; // 変数aのアドレスをpAに格納

  printf("変数aの値は%dです．\n", a);
  printf("変数aのアドレスは%pです．\n", &a);
  printf("ポインタpAの値は%pです．\n", pA);
  printf("ポインタpAのアドレスは%pです．\n", &pA);

  return 0;
}
