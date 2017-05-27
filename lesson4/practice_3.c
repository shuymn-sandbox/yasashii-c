#include <stdio.h>

int main(void)
{
  int height, base;
  float sum;

  printf("三角形の高さを入力してください: ");
  scanf("%d", &height);

  printf("三角形の底辺を入力してください: ");
  scanf("%d", &base);

  // (底辺 * 高さ)/2
  sum = ((float)base * (float)height) / 2;

  printf("三角形の面積は %f です．\n", sum);

  return 0;
}
