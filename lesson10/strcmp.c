#include <stdio.h>
#include <string.h>

int main(void)
{
  char str1[100];
  char str2[100];

  printf("1番目の文字列を入力してください．\n");
  scanf("%s", str1);

  printf("2番目の文字列を入力してください．\n");
  scanf("%s", str2);

  // strcmp関数は与えられた2つの文字列を比較して一致してたら0(TRUE)を返す
  if (strcmp(str1, str2) == 0) 
    printf("2つの文字列は同じです．\n");
  else
    printf("2つの文字列は異なります．\n");

  return 0;
}
