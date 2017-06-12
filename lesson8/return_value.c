#include <stdio.h>

// definition
// 戻り値(return value)がない場合は void型を指定する
int buy(int x, int y)
{
  int z;

  printf("%d万円と%d万円の車を買いました．\n", x, y);

  z = x + y;

  return z;
}

// call
int main(void)
{
  int num1, num2, sum;

  printf("いくらの車を買いますか？\n");
  scanf("%d", &num1);

  printf("いくらの車を買いますか？\n");
  scanf("%d", &num2);

  // 戻り値(return value)は必ずしも使わなければならないわけではない
  sum = buy(num1, num2);

  printf("合計で%d万円です．\n", sum);

  return 0;
}
