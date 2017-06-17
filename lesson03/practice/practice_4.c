#include <stdio.h>

int main(void)
{
  float height, weight;

  printf("身長(cm)を入力してください．\n");
  scanf("%f", &height);

  printf("体重(kg)を入力してください．\n");
  scanf("%f", &weight);

  printf("身長は%f(cm)です．\n", height);
  printf("体重は%f(kg)です．\n", weight);

  return 0;
}
