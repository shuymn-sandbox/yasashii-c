#include <stdio.h>

int main(void)
{
  char str[100];
  int count = 0;
  int i = 0;

  printf("文字列を入力してください．\n");
  scanf("%s", str);

  while(str[i] != '\0') {
    count++;
    i++;
  }

  printf("文字列の長さは%dです．\n", count);

  return 0;
}
