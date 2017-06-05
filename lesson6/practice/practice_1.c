#include <stdio.h>

int main(void)
{
  int num;

  printf("1〜10までの偶数を出力します．\n");

  for(num=2; num<=10; num+=2) {
    printf("%d\n", num);
  }

  return 0;
}
