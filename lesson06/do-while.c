#include <stdio.h>

int main(void)
{
  int i = 1;

  // do-while文を使うと，最低1回はループ本体を実行する
  do {
    printf("%d番目の繰り返しです．\n", i);
    i++;
  } while(i <= 5);

  printf("繰り返しが終わりました．\n");

  return 0;
}
