#include <stdio.h>

void add(int *pA, int *pB, int num);

int main(void)
{
  int x1, x2, a;

  printf("2科目分の点数を入力してください．\n");
  scanf("%d", &x1);
  scanf("%d", &x2);

  printf("加算する点数を入力してください．\n");
  scanf("%d", &a);

  add(&x1, &x2, a);

  printf("%d点加算しましたので\n", a);
  printf("科目1は%d点となりました．\n", x1);
  printf("科目2は%d点となりました．\n", x2);

  return 0;
}

void add(int *pA, int *pB, int num)
{
  *pA += num;
  *pB += num;
}
