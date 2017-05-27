// 一部未完成
#include <stdio.h>

int main(void)
{
  float height, weight;
  char str[] = "\0";

  printf("身長と体重を入力してください．\n");

  printf("身長(cm):");
  scanf("%f", &height);
  printf("体重(kg):");
  scanf("%f", &weight);

  float bmi = weight/((height/100)*(height/100));

  if(bmi < 18.5) { char str[] = "やせ"; }
  else if(bmi < 25) { char str[] = "標準"; }
  else if(bmi < 30) { char str[] = "肥満1型"; }
  else if(bmi < 35) { char str[] = "肥満2型"; }
  else if(bmi < 40) { char str[] = "肥満3型"; }
  else { char str[] = "肥満4型"; }

  printf("身長は%fcm:体重は%fkg:BMIは%f", height, weight, bmi);
  printf("(%s)です．\n", str);

  return 0;
}
