#include <stdio.h>

// global variable : プログラムの開始から終了まで値を保持し続ける
// global variableは自動的に0で初期化される
int a = 0; 

void func(void)
{
  // local variable : 関数が呼び出されるたびに0が格納され，関数が終了すると破棄される
  // local variableは自動的に初期化されない
  int b = 0; 
  // staticをつけたlocal variable : グローバル変数と同じ記憶寿命を持つ(静的寿命をもつローカル変数)
  // static : 記憶クラス指定子(storage class identifier)
  // static local variableは自動的に0で初期化される
  static int c = 0; 

  printf("変数aは%d", a);
  printf("変数bは%d", b);
  printf("変数cは%d\n", c);

  a++;
  b++;
  c++;
}

int main(void)
{
  int i;

  for(i=0; i<5; i++) {
    func();
  }

  return 0;
}
