int power(int x, int y)
{
  int sum;
  int i;

  sum = 1;

  for(i=0; i<y; i++) {
    sum *= x;
  }

  return sum;
}
