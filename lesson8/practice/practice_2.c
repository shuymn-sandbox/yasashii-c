#include <stdio.h>

int square(int x);

int main(void)
{
  int num, result;

  printf("整数を入力してください．\n");
  scanf("%d", &num);

  result = square(num);

  printf("%dの2乗は%dです．\n", num, result);

  return 0;
}

int square(int x)
{
  return x*x;
}
