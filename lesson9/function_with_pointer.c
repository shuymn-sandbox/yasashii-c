#include <stdio.h>

// function declaration : 仮引数(parameter)はポインタにする
void swap(int *pX, int *pY);

int main(void)
{
  int num1 = 5;
  int num2 = 10;

  printf("\t1: 変数num1の値は%dです．\n", num1);
  printf("\t1: 変数num2の値は%dです．\n", num2);
  printf("変数num1とnum2の値を交換します．\n");

  // function call : 実引数(argument)はアドレスにする
  // 参照渡し(pass by reference) : 関数が呼び出されるとき，実引数のアドレスが関数に渡されること
  swap(&num1, &num2);

  printf("\t2: 変数num1の値は%dです．\n", num1);
  printf("\t2: 変数num2の値は%dです．\n", num2);

  return 0;
}

void swap(int *pX, int *pY)
{
  int tmp;

  tmp = *pX;
  *pX = *pY;
  *pY = tmp;
}
