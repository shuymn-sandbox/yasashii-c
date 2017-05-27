#include <stdio.h>

int main(void)
{
  int i_num = 160;
  double d_num;

  printf("身長は%dcmです．\n", i_num);
  printf("double型の変数に代入します．\n");

  d_num = i_num;

  printf("身長は%fcmです．\n", d_num);

  return 0;
}
