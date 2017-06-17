#include <stdio.h>

// function definition
// x <- 仮引数 parameter
void buy(int x)
{
  printf("%d万円の車を買いました．\n", x);
}

// function call
int main(void)
{
  // 20, 50 <- 実引数 argument
  buy(20);
  buy(50);

  return 0;
}
