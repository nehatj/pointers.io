#include<stdio.h>
typedef unsigned int size_t;

typedef struct key
{
  char c;
  int count;
} keys;

int main ()
{
  size_t a = 10;
  printf ("%d", a);
  keys keyarr;
  keyarr.c = 'A';
  keyarr.count = 10;
  return 0;
}
