#include <stdio.h>

int main(void)
{
  int input_num, invert_num;
  
  printf("整数を入力してください: ");
  scanf("%d", &input_num);

  invert_num = input_num - (2 * input_num);

  printf("正負を反転すると %d です．\n", invert_num);

  return 0;
}
