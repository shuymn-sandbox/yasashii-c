#include <stdio.h>

int main(void)
{
  int test[5] = {80,60,55,22,75};

  printf("test[0]の値は%dです．\n", test[0]);
  printf("test[0]のアドレスは%pです．\n", &test[0]);
  printf("test[1]の値は%dです．\n", test[1]);
  printf("test[1]のアドレスは%pです．\n", &test[1]);
  // 配列名 だけを記述すると，配列の先頭要素のアドレスを表す
  printf("testの値は%pです．\n", test);
  printf("*testの値は%dです．\n", *test);

  return 0;
}
