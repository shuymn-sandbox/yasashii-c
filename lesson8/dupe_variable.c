#include <stdio.h>

int a = 0;

void func(void)
{
  int a = 1;
  a++;

  printf("func関数内でインクリメントした変数aの値は%dです．\n", a);
}

int main(void)
{
  a++;

  printf("main関数内でインクリメントした変数aの値は%dです．\n", a);

  func();

  return 0;
}
