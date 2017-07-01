#include <stdio.h>

int max(int x, int y);

int main(void)
{
  int num1, num2, ans;
  // 関数ポインタを宣言．*演算子より()演算子のほうが優先度が高いからポインタ名の部分も()でくくる必要がある
  int (*pM)(int x, int y); 

  pM = max; // 関数maxのアドレスを関数ポインタpMに代入

  printf("1番目の数値を入力してください．\n");
  scanf("%d", &num1);

  printf("2番目の数値を入力してください．\n");
  scanf("%d", &num2);

  ans = (*pM)(num1, num2); // ポインタを使って関数を呼び出す

  printf("最大値は%dです．\n", ans);

  return 0;
}

int max(int x, int y)
{
  if (x > y)
    return x;
  else
    return y;
}
