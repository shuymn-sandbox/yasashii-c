#include <stdio.h>

typedef struct Car{
  int num;
  double gas;
}Car;

void show(Car *pC); // 構造体へのポインタを引数に持つ関数

int main(void)
{
  Car car1 = {0, 0.0};

  printf("ナンバーを入力してください．\n");
  scanf("%d", &car1.num);

  printf("ガソリン量を入力してください．\n");
  scanf("%lf", &car1.gas);

  show(&car1); // 構造体car1のアドレスを渡す

  return 0;
}

void show(Car *pC)
{
  // アロー演算子から，ポインタからメンバにアクセスする
  printf("車のナンバーは%d : ガソリン量は%fです．\n", pC->num, pC->gas);
}
