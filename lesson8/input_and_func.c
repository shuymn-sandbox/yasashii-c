#include <stdio.h>

// definition
// parameter と argument の名前は一緒である必要はない
void buy(int x)
{
  printf("%d万円の車を買いました．\n", x);
}

// call
// num の中身が x に渡される(値渡し pass by value)
int main(void)
{
  int num;

  printf("1台目はいくらの車を買いますか？(単位:万円)\n");
  scanf("%d", &num);

  buy(num);

  printf("2台目はいくらの車を買いますか？(単位:万円)\n");
  scanf("%d", &num);

  buy(num);

  return 0;
}
