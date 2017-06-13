#include <stdio.h>

int main(void)
{
  char str[100];
  int i = 0;
  
  printf("文字列を入力してください．\n");
  scanf("%s", str);

  while(str[i] != '\0') {
    if(str[i] == 'a') {
      str[i] = 'b';
    }

    i++;
  }

  printf("%sに置き換えました．\n", str);

  return 0;
}
