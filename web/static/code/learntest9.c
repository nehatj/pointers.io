#include <stdio.h>
int sumup (int, int);
int main ()
{
  int a = 4;
  int b = 2;
  int sum = sumup (a, b);
  printf ("The sum of a=%d and b=%d is %d\n", a, b, sum);
  return 0;
}

int
sumup (int x, int y)
{
  int sum, sub, divide;
  sum = x + y;			//sums up a and b
  return sum;
}
