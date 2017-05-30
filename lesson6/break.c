#include <stdio.h>

int main(void)
{
  int res, i;

  printf("何番目でループを中止しますか？(1〜10)\n");
  printf("-> ");
  scanf("%d", &res);

  for(i=1; i<=10; i++) {
    printf("%2d番目の処理です．\n", i);
    if(i == res) { break; }
  }

  return 0;
}
