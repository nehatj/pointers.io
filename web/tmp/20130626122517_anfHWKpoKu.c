#include<stdio.h>

struct key
{
  char c;
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
