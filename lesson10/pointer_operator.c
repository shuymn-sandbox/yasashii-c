#include <stdio.h>

int main(void)
{
  int test[5] = {80,60,55,22,75};

  printf("testの値は%pです．\n", test);
  printf("*testの値は%dです．\n", *test);
  // 先頭要素の次の要素の アドレス をあらわす
  printf("test+1の値は%pです．\n", test+1);
  // 戦闘要素の次の要素の 値 をあらわす
  printf("*(test+1)の値は%dです．\n", *(test+1));

  return 0;
}
