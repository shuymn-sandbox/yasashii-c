#include <stdio.h>

double avg1(int t[]); // 配列を仮引数として使う
double avg2(int *pT); // ポインタを仮引数として使う
double avg3(int *pT);

int main(void)
{
  int num = 1;
  int test[5] = {80,60,55,22,75};
  int i;
  double ans;

  do {
    printf("どの方法で計算しますか？(1〜3): ");
    scanf("%d", &num);
  } while (num < 1 || num > 3);

  if (num == 1)
    ans = avg1(test); // 配列名(配列の戦闘要素のアドレス)を実引数として渡す 
  else if (num == 2)
    ans = avg2(test);
  else
    ans = avg3(test);

  printf("5人の平均点は%lf点です．\n", ans);

  return 0;
}

double avg1(int t[])
{
  int i;
  double sum;

  sum = 0.0;

  for (i=0; i<5; i++)
    sum += t[i];

  return sum / 5;
}

double avg2(int *pT)
{
  int i;
  double sum;

  sum = 0.0;

  for (i=0; i<5; i++)
    sum += *(pT+i); // ポインタ演算をする

  return sum / 5;
}

double avg3(int *pT)
{
  int i;
  double sum;

  for (i=0; i<5; i++)
    sum += pT[i];

  return sum / 5;
}
