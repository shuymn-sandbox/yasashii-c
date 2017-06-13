#include <stdio.h>
#include "practice_5.h"

int main(void)
{
  int num1, num2;
  int result;

  do {
    printf("1番目の整数を入力してください．(1〜5)\n");
    scanf("%d", &num1);
  } while(num1 < 1 || num1 > 5);

  do {
    printf("2番目の整数を入力してください．(1〜5)\n");
    scanf("%d", &num2);
  } while(num2 < 1 || num2 > 5);

  result = power(num1, num2);

  printf("%dの%d乗は%dです．\n", num1, num2, result);

  return 0;
}
