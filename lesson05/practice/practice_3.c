#include <stdio.h>

int main(void)
{
  int num, judge;

  printf("0から10までの整数を入力してください: ");
  scanf("%d", &num);

  judge = (num >= 0 && num <= 10) ? 1 : 0;

  switch(judge) {
  case 0:
    printf("間違いです．\n");
    break;
  case 1:
    printf("正解です．\n");
    break;
  }

  return 0;
}
