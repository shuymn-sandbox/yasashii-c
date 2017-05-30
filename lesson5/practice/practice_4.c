#include <stdio.h>

int main(void)
{
  char ch;

  printf("A〜Cまでの文字を入力してください: ");
  ch = getchar();

// if(ch == 'A' || ch == 'B' || ch == 'C') {
  if(ch >= 65 && ch <= 67) {
    printf("正解です．\n");
  } else {
    printf("間違いです．\n");
  }

  return 0;
}
