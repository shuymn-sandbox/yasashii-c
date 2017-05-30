#include <stdio.h>

int main(void)
{
  int res;
  int i;

  printf("何番目の処理を飛ばしますか？(1〜10)\n");
  printf("-> ");
  scanf("%d", &res);

  for(i=1; i<=10; i++) {
    // continue : ループ文内の処理を飛ばし，ブロックの先頭位置に戻って次の処理を続ける
    if(i == res) { continue; }

    printf("%2d番目の処理です．\n", i);
  }

  return 0;
}
