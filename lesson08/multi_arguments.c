#include <stdio.h>

void buy(int x, int y)
{
  printf("%d兆円と%d兆円の車を買いました．\n", x, y);
}

int main(void)
{
  int num1, num2;

  printf("いくらの車を買いますか？(単位:兆円)\n");
  scanf("%d", &num1);

  printf("いくらの車を買いますか？(単位:兆円)\n");
  scanf("%d", &num2);

  // 仮引数(parameter)と実引数(argument)の数は一緒にしなければならない
  buy(num1, num2);

  return 0;
}
