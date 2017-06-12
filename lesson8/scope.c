#include <stdio.h>

// scope : 変数が利用できる範囲, 変数の名前が通用する範囲
// global variable : どの関数からでも使える
int a = 0;

void func(void)
{
  // local variable : 宣言した関数内だけで使える
  int c = 2;

  printf("func関数では変数aとcが使えます．\n");
  printf("変数aの値は%dです．\n", a);
  // printf("変数bの値は%dです．\n", b);
  printf("変数cの値は%dです．\n", c);
}

int main(void)
{
  int b = 1;

  printf("main関数では変数aとbが使えます．\n");
  printf("変数aの値は%dです．\n", a);
  printf("変数bの値は%dです．\n", b);
  // printf("変数cの値は%dです．\n", c);

  func();

  return 0;
}
