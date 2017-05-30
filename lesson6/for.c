// 入力した数までの合計を求める
#include <stdio.h>

int main(void)
{
  int num, sum, i;

  sum = 0;

  printf("いくつまでの合計を求めますか？: ");
  scanf("%d", &num);

  for(i=1; i<=num; i++) {
    sum += i;
  }

  printf("1から%dまでの合計は%dです．\n", num, sum);

  return 0;
}
