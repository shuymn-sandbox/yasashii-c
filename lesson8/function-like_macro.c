#include <stdio.h>
#define MAX(x, y) (x > y ? x : y)

int main(void)
{
  int num1, num2, ans;

  printf("1番目の整数を入力してください．\n");
  scanf("%d", &num1);

  printf("2番目の整数を入力してください．\n");
  scanf("%d", &num2);

  // 関数形式マクロ(function-like macro)は，呼び出し部分に埋め込まれる
  // 使うときは，単純な短い処理をする時に使うべき(ファイルサイズが多くなる)
  // 関数形式マクロに渡す数値の型をしっかり把握しておかないと正しい計算結果が得られないことがある
  ans = MAX(num1, num2);

  printf("最大値は%dです．\n", ans);

  return 0;
}
