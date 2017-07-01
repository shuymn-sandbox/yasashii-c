#include <stdio.h>
#include <string.h>

int search(char str[]);

int main(void)
{
  int num;
  char input[100];

  printf("文字列を入力してください．\n");
  scanf("%s", input);

  num = search(input);

  printf("%sの中にaは%d個あります．\n", input, num);

  return 0;
}

int search(char str[])
{
  int count = 0;
  int i;

  for (i=0; i < strlen(str); i++) {
    if (str[i] == 'a')
      count++;
  }

  return count;
}
