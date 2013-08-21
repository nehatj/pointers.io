#include<stdio.h>

struct key
{
  char c[5];
  int count;
};

int
main ()
{
  struct key keyarr;
  keyarr.c = 'A';
  keyarr.count = 10;
  return 0;
}
