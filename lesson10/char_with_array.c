#include <stdio.h>

int main(void)
{
  char str[3][20] = { "Hello", "Goodbye", "Thankyou" };
  int i;

  for (i=0; i<3; i++) 
    printf("文字列は%sです．\n", str[i]);

  return 0;
}
