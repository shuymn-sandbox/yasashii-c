#include <stdio.h>
#define SQUARE(x) (x*x)

int main(void)
{
  int num, result;

  printf("整数を入力してください．\n");
  scanf("%d", &num);

  result = SQUARE(num);

  printf("%dの2乗は%dです．\n", num, result);

  return 0;
}
