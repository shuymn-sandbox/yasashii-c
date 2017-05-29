#include <stdio.h>

int main(void)
{
  int num;

  printf("整数を入力してください: ");
  scanf("%d", &num);

  if(num%2 == 0) {
    printf("%dは偶数です．\n", num);
  } else {
    printf("%dは奇数です．\n", num);
  }

  return 0;
}
