#include <stdio.h>

// declaration : parameterにconstをつけると，関数内でargumentの変更ができなくなる
void func(const int *pX);

int main(void)
{
  int num = 5;

  printf("\tmain: 変数numの値は%dです．\n", num);
  printf("func関数を呼び出します．\n");

  func(&num);

  return 0;
}

void func(const int *pX)
{
  // 実引数を変更しようとするとエラーが起こる
  // *pX = 10;
  printf("\tfunc: ポインタpXの値は%dです．\n", *pX);
}
