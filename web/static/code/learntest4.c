#include <stdio.h>
int main ()
{
  int a = 4;
  int b = 2;
  int sum, sub, divide;
  sum = a + b;//sums up a and b
  printf ("The sum of a=%d and b=%d is %d\n", a, b, sum);
  sub = a - b;//subtracted a-b
  printf ("The difference of a=%d and b=%d is %d\n", a, b, sub);
  divide = a / b;//a/b
  printf ("The a=%d divided by b=%d is %d\n", a, b, divide);
  return 0;
}
