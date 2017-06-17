#include <stdio.h>

int main(void)
{
  int num = 1;

  // 0 -> TRUE / それ以外 -> FALSE
  while(num) {
    printf("整数を入力してください(0で終了)\n");
    printf("-> ");
    scanf("%d", &num);
    printf("%dが入力されました．\n", num);
  }

  printf("0が入力されたので，繰り返しを終了しました．\n");
  
  return 0;
}
