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
/*
struct ValZ{
    int i;
    char c;
};

int main()
{
    struct ValZ test;
    test.i = 10;
    test.c = 'A';
    printf("%d %c", test.i, test.c);
    return 0;
}
    */

