#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
  int i;
  char str[100];

  printf("文字列を入力してください．(英字)\n");
  scanf("%s", str);

  printf("大文字にすると");
  for (i=0; i < strlen(str); i++) {
    printf("%c", toupper(str[i]));
  }
  printf("です．\n");

  printf("小文字にすると");
  for (i=0; i < strlen(str); i++) {
    printf("%c", tolower(str[i]));
  }
  printf("です．\n");

  return 0;
}
