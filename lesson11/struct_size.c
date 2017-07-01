#include <stdio.h>

typedef struct Car{
  int num;
  double gas;
}Car;

int main(void)
{
  printf("int型のサイズは%luバイトです．\n", sizeof(int));
  printf("double型サイズは%luバイトです．\n", sizeof(double));
  printf("構造体struct Car型のサイズは%luバイトです．\n", sizeof(Car));
  printf("構造体struct Car型へのポインタのサイズは%luバイトです．\n", sizeof(Car *));

  return 0;
}
