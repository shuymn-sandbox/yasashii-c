#include <stdio.h>

int main(void)
{
  int score[5];
  int max;
  int i, j;

  printf("テストの点数を入力してください．\n");

  for(i=0; i<5; i++) {
    scanf("%d", &score[i]);

    if(i == 0) {
      max = score[0];
    } else if(max < score[i]) {
      max = score[i];
    }
  }

  for(j=0; j<5; j++) {
    printf("%d番目の人の点数は%dです．\n", j+1, score[j]);
  }

  printf("最高点は%d点です．\n", max);

  return 0;
}
