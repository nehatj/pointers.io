#include<stdio.h>

struct key
{
  char c[5];
  int count;
};
struct stack            /* Structure definition for stack */
{
	int stk[5];
	int top;
};

int
main ()
{
  struct key keyarr;
  keyarr.c = 'A';
  keyarr.count = 10;
  return 0;
}
