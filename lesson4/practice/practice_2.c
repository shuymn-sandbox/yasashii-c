#include <stdio.h>

int main(void)
{
  int side, sum;

  printf("正方形の辺の長さを入力してください: ");
  scanf("%d", &side);

  // printfの第二引数にside*sideでもいい
  sum = side * side;

  printf("1辺の長さが%dの正方形の面積は %d です．\n", side, sum);

  return 0;
}
