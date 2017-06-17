#include <stdio.h>

int main(void)
{
  double d_num = 3.14;
  int i_num;

  printf("初期値は%fです．\n", d_num);
  printf("まず，int型の変数に代入します．\n");

  i_num = (int)d_num;

  printf("変換後の値は%dです．\n", i_num);

  printf("次に，double型の変数に代入します．\n");

  d_num = (double)i_num;

  printf("変換後の値は%fです．\n", d_num);

  return 0;
}
