#include <stdio.h>

int main(void)
{
  int num1, num2;

  printf("2つの整数を入力してください．\n");

  printf("1つ目の整数を入力: ");
  scanf("%d", &num1);

  printf("2つ目の整数を入力: ");
  scanf("%d", &num2);

  if(num1 == num2) {
    printf("2つの数は同じ値です．\n");
  } else if(num1 > num2) {
    printf("%dより%dのほうが大きい値です．\n", num2, num1);
  } else if(num1 < num2) {
    printf("%dより%dのほうが大きい値です．\n", num1, num2);
  }

  return 0;
}
