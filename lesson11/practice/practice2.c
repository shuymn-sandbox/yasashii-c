#include <stdio.h>

typedef struct Person {
  int age;
  double weight;
  double height;
} Person;

int main(void)
{
  Person psn[2];
  int i;

  for (i=0; i<2; i++) {
    printf("年齢を入力してください．\n");
    scanf("%d", &psn[i].age);

    printf("体重を入力してください．\n");
    scanf("%lf", &psn[i].weight);

    printf("身長を入力してください．\n");
    scanf("%lf", &psn[i].height);
  }

  for (i=0; i<2; i++)
    printf("年齢%d 体重%f 身長%f です．\n", psn[i].age, psn[i].weight, psn[i].height);

  return 0;
}
