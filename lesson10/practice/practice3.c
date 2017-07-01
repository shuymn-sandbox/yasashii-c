#include <stdio.h>
#include <string.h>

int compare(char str1[], char str2[]);

int main(void)
{
  int res;
  char input_1[100], input_2[100];

  printf("1番目の文字列を入力してください．\n");
  scanf("%s", input_1);

  printf("2番目の文字列を入力してください．\n");
  scanf("%s", input_2);

  res = compare(input_1, input_2);

  if (res == 1)
    printf("2つの文字列は一致しています．\n");
  else if (res == -1)
    printf("2つの文字列は異なります．\n");
  else
    printf("不明なエラー");

  return 0;
}

int compare(char str1[], char str2[])
{
  if (strcmp(str1, str2) == 0)
    return 1;
  else
    return -1;
}
