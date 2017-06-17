#include <stdio.h>

int main(void)
{
  int num, sum, i;
  
  // 計算結果を正しくするためには0で初期化するのが必須
  sum = 0;
  i = 1;

  printf("テストの点数を入力してください．(0で終了)\n");

  do {
    printf("%d教科目: ", i);
    scanf("%d", &num);

    sum += num;
    i++;
  } while(num!=0);

  // 教科数は変数iから2引く必要がある
  printf("テスト(%d科目)の合計点は%d点です．\n", i-2, sum);

  return 0;
}
