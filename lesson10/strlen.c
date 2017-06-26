#include <stdio.h>
#include <string.h>

int main(void)
{
  char str[1000];

  printf("文字列(英数字)を入力してください．\n");
  scanf("%s", str);
// strlen関数: 文字列の\0を含まない文字だけの個数を返す
  // unsigned long 型の変換仕様(%lu)を使えって言われる
  printf("文字列の長さは%dです．\n", strlen(str)); 
  return 0;
}
