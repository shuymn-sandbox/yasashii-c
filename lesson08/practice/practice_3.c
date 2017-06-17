#include <stdio.h>

int power(int x, int y);

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

int power(int x, int y)
{
  int sum;
  int i;

  // 初期化は初期化でまとめておいたほうがメンテナンス性が高い(？)
  sum = 1;

  for(i=0; i<y; i++) {
    sum *= x;
  }

  return sum;
}
