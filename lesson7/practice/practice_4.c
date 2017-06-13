#include <stdio.h>

int main(void)
{
  char str[100];
  int count = 0;
  int i = 0;

  printf("文字列を入力してください．\n");
  scanf("%s", str);

  while(str[i] != '\0') {
    if(str[i] == 'a') {
      count++;
    }

    i++;
  }

  printf("%sの中にaは%d個あります．\n", str, count);

  return 0;
}
