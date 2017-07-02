#include <stdio.h>
// 列挙型(enumerated type)の宣言
typedef enum Week{SUN, MON, TUE, WED, THU, FRI, SAT} Week; // Weekという名前をつける

int main(void)
{
  Week w; // 列挙型の変数を宣言
  w = SUN; // 識別子の値を格納

  // 読みやすいコードが記述できる
  switch(w) {
    case SUN: printf("日曜です．\n"); break;
    case MON: printf("月曜です．\n"); break;
    case TUE: printf("火曜です．\n"); break;
    case WED: printf("水曜です．\n"); break;
    case THU: printf("木曜です．\n"); break;
    case FRI: printf("金曜です．\n"); break;
    case SAT: printf("土曜です．\n"); break;
    default: printf("何曜日だかわかりません．\n"); break;
  }

  return 0;
}
