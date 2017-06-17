// Yasashii C (revision 4) P.108
// Sample11.c 同じ型の演算をする

#include <stdio.h>

int main(void)
{
  int num1, num2;
  double div;

  num1 = 5;
  num2 = 4;

  // div = num1 / num2;
  div = (double)num1/(double)num2;

  printf("%d/%dは%fです．\n", num1, num2, div);

  return 0;
}
