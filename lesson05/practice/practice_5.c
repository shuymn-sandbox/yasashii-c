#include <stdio.h>

int main(void)
{
  int num, judge;

  printf("成績(1〜5)を入力してください: ");
  scanf("%d", &num);

  if(num >= 1 && num <= 5) {
    printf("成績は%dです．", num);

    switch(num) {
      case 1:
        printf("もっとがんばりましょう．\n");
        break;
      case 2:
        printf("もう少しがんばりましょう．\n");
        break;
      case 3:
        printf("さらに上をめざしましょう．\n");
        break;
      case 4:
        printf("たいへんよくできました．\n");
        break;
      case 5:
        printf("たいへん優秀です．\n");
        break;
    }
  } else {
    printf("1〜5の整数を入力してください．\n");
  }

  return 0;
}
