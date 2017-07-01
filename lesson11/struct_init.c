#include <stdio.h>

typedef struct Car {
  int num;
  double gas;
} Car;

int main(void)
{
  // 構造体の初期化
  Car car1 = {1234, 25.5};

  printf("車のナンバーは%d : ガソリン量は%fです．\n", car1.num, car1.gas);

  return 0;
}
