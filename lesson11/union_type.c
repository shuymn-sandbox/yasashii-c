#include <stdio.h>

// 共用体型(union type)を宣言
// 共用体型のメンバは，同時に値を記憶することができず，全体で1つしか値を記憶できない
// 限られたメモリを節約するために使う
typedef union Year{
  int ad;
  int gengo;
}Year; // 名前

int main(void)
{
  Year myyear; // 共用体型の変数を宣言
  int a, g;

  printf("西暦を入力してください．\n");
  scanf("%d", &a);
  myyear.ad = a; // myyearのメンバadに値を格納
  printf("西暦は%dです．\n", myyear.ad);
  printf("元号は%dです．\n", myyear.gengo); // メンバgengoも同じ値になる

  printf("元号を入力してください．\n");
  scanf("%d", &g);
  myyear.gengo = g;
  printf("元号は%dです．\n", myyear.gengo);
  printf("西暦は%dです．\n", myyear.ad);

  return 0;
}
