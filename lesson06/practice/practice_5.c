#include <stdio.h>

int main(void)
{
  int num, sum, i;

  sum = 0;

  do {
    printf("2以上の整数を入力してください: ");
    scanf("%d", &num);
  } while(num<2);

  for(i=1; i<=num; i++) {
    sum += (num%i == 0) ? 1 : 0;
  }

  if(sum==2) {
    printf("%dは素数です．\n", num);
  } else {
    printf("%dは素数ではありません．\n", num);
  }

  return 0;
}
