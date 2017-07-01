#include <stdio.h>

// 構造体型struct Carの宣言
struct Car {
  int num;
  double gas;
};

int main(void)
{
  // 構造体型の変数(構造体)を宣言
  struct Car car1;

  // memberに値を代入
  car1.num = 1234;
  car1.gas = 25.5;

  printf("車のナンバー%d : ガソリン量は%fです．\n", car1.num, car1.gas);

  return 0;
}
