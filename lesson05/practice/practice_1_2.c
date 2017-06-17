// 未完成
#include <stdio.h>

int main(void)
{
  int num;
  char ch[100];

  printf("整数を入してください: ");
  scanf("%d", &num);

  ch[100] = (num%2 == 0) ? "偶" : "奇";

  printf("%dは%c%c数です．\n", num, ch[0], ch[1]);

  return 0;
}
