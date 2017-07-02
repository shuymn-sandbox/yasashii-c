#include <stdio.h>

// 構造体型struct Personを宣言
typedef struct Person {
  int age;
  double weight;
  double height;
} Person;

int main(void)
{
  Person psn1, psn2;

  for (int i=0; i<2; i++) {
    printf("年齢を入力してください．\n");
    switch (i) {
      case 0: scanf("%d", &psn1.age); break;
      case 1: scanf("%d", &psn2.age); break;
    }

    printf("体重を入力してください．\n");
    switch (i) {
      case 0: scanf("%lf", &psn1.weight); break;
      case 1: scanf("%lf", &psn2.weight); break;
    }
    printf("身長を入力してください．\n");
    switch (i) {
      case 0: scanf("%lf", &psn1.height); break;
      case 1: scanf("%lf", &psn2.height); break;
    }
  }

  printf("年齢%d : 体重%f : 身長%f です．\n", psn1.age, psn1.weight, psn1.height);
  printf("年齢%d : 体重%f : 身長%f です．\n", psn2.age, psn2.weight, psn2.height);

  return 0;
}
