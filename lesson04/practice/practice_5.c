#include <stdio.h>

int main(void)
{
  int num_1, num_2, num_3, num_4, num_5, sum;
  float avg;

  printf("科目1の点数を入力してください: ");
  scanf("%d", &num_1);

  printf("科目2の点数を入力してください: ");
  scanf("%d", &num_2);

  printf("科目3の点数を入力してください: ");
  scanf("%d", &num_3);

  printf("科目4の点数を入力してください: ");
  scanf("%d", &num_4);

  printf("科目5の点数を入力してください: ");
  scanf("%d", &num_5);

  sum = num_1 + num_2 + num_3 + num_4 + num_5;
  avg = (float)sum / 5;

  printf("5科目の合計点は %d 点です．\n", sum);
  printf("5科目の平均点は %f 点です．\n", avg);

  return 0;
}
