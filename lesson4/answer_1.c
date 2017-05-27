#include <stdio.h>

int main(void)
{
  int ans1, ans4;
  double ans2, ans3, ans5;

  ans1 = 0 - 4;
  ans2 = 3.14 * 2;
  ans3 = 5.0 / 3.0;
  ans4 = 30 % 7;
  ans5 = (7 + 32) / (double)5;

  printf("0 - 4 = %d\n", ans1);
  printf("3.14 * 2 = %f\n", ans2);
  printf("5/3 = %f\n", ans3);
  printf("30/7 の余り = %d\n", ans4);
  printf("(7+32) / 5 = %f\n", ans5);

  return 0;
}
