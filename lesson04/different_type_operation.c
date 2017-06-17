// Yasashii C (revision 4) P.104
// Sample10.c 異なる型の演算をする

#include <stdio.h>

int main(void)
{
  int d = 2;
  double pi = 3.14;

  printf("直径が%dcmの円の円周は%fcmです．\n", d, d*pi);
  
  return 0;
}
