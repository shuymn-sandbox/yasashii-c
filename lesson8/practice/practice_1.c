#include <stdio.h>

int min(int x, int y);

int main(void)
{
  int num1, num2;
  int result;

  printf("1番目の整数を入力してください．\n");
  scanf("%d", &num1);

  printf("2番目の整数を入力してください．\n");
  scanf("%d", &num2);

  result = min(num1, num2);

  printf("最小値は%dです．\n", result);

  return 0;
}

int min(int x, int y)
{
  if(x <= y) {
    return x;
  } else {
    return y;
  }
}
