#include <stdio.h>

int main(void)
{
  double d_num = 160.5;
  int i_num;

  printf("身長は%fcmです．\n", d_num);
  printf("int型の変数に代入します．\n");

  i_num = d_num;

  printf("身長は%dcmです．\n", i_num);

  return 0;
}
