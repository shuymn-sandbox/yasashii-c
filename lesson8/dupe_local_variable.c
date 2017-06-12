#include <stdio.h>

void func(void)
{
  int a = 0;
  a++;
  printf("func関数内のローカル変数aの値は%dです．\n", a);
}

int main(void)
{
  int a = 1;
  a++;
  printf("main関数内のローカル変数aの値は%dです.\n", a);

  func();

  return 0;
}
