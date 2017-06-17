#include <stdio.h>

int main(void)
{
  int score[5];
  int count = 0;
  int i, j;

  printf("テストの点数を入力してください．\n");
  
  for(i=0; i<5; i++) {
    scanf("%d", &score[i]);

    if(score[i] >= 70) {
      count++;
    }
  }

  for(j=0; j<5; j++) {
    printf("%d番目の人の点数は%dです．\n", j+1, score[j]);
  }

  printf("70点以上の学生は%d人です．\n", count);

  return 0;
}
