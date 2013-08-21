#include<stdio.h>
union key
{
char c;
int count;
};
int main()
{
union key keyarr;
keyarr.c='A';
keyarr.count=10;
return 0;
}
