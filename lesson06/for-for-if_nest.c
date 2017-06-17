#include <stdio.h>

int main(void)
{
  int i, j, ch;

  ch = 0;

  for(i=0; i<5; i++) {
    for(j=0; j<5; j++) {
      // *を出力したら，次は-を出力する
      if(ch == 0) {
        printf("*");
        ch = 1;
      } else {
        printf("-");
        ch = 0;
      }
    }
    // 内側のforループが終わったら改行する
    printf("\n");
  }

  return 0;
}
