#include <stdio.h>

typedef struct Person {
  int age;
  double weight;
  double height;
} Person;

void aging(Person *p);

int main(void)
{
  Person psn;

  printf("年齢を入力してください．\n");
  scanf("%d", &psn.age);
  printf("体重を入力してください．\n");
  scanf("%lf", &psn.weight);
  printf("身長を入力してください．\n");
  scanf("%lf", &psn.height);

  printf("年齢%d 体重%f 身長%f です．\n", psn.age, psn.weight, psn.height);
  aging(&psn);

  return 0;
}

void aging(Person *p)
{
  p->age++;
  printf("1年経過しました．\n");
  printf("年齢%d 体重%f 身長%f です．\n", p->age, p->weight, p->height);
}
