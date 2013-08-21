#include <stdio.h>

int main ()
{

  unsigned int bit1 = 125;	/* 125 = 0111  1101 */
  unsigned int bit2 = 66;	/* 66 =  0100  0010 */
  int res = 0;

  res = bit1 & bit2;		/* 64 = 0100 0000 */
  printf ("bit1 & bit2 = %d\n", res);

  res = bit1 | bit2;		/* 127 = 0111 1111 */
  printf ("bit1 | bit2 = %d\n", res);

  res = bit1 ^ bit2;		/* 63 = 0011 1111 */
  printf ("bit1 ^ bit2 = %d\n", res);

  res = ~bit1;					    /*-126 = 1000 0001 */
  printf ("~bit1 = %d\n", res);

  res = bit1 << 1;		/* 250 = 1111 1010 */
  printf ("bit1 << 1 = %d\n", res);

  res = bit1 >> 1;		/* 62 = 0011 1110 */
  printf ("bit1 >> 1 = %d\n", res);
  return 0;
}
