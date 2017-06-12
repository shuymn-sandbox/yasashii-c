#include <stdio.h>

int main (void)
{
  char str[] = "Hello";
  int i;

  printf("Hello\n");

  // 文字列が必ず \0 で終わることを利用する
  for(i=0; str[i]!='\0'; i++) {
    printf("%c*", str[i]);
  }

  printf("\n");

  return 0;
}
