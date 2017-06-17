#include <stdio.h>

int main(void)
{
  int res;
  char ans;

  printf("何番目を選びますか？\n");
  printf("整数を入力してください: ");

  scanf("%d", &res);

  // 条件演算子
  // 条件 ? TRUEのとき式1 : FALSEのとき式2;
  ans = (res==1) ? 'A' : 'B';

  printf("%cコースを選択しました．\n", ans);

  return 0;
}
