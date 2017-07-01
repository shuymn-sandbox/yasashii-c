#include <stdio.h>
#include <string.h>

int length(char str[]);

int main(void)
{
  int num;
  char input[100];

  printf("文字列を入力してください．\n");
  scanf("%s", input);

  num = length(input);

  printf("文字列の長さは%dです．\n", num);

  return 0;
}

int length(char str[])
{
  return strlen(str);
}
