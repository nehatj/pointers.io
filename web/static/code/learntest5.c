#include<stdio.h>
int main()
{
int var = 1;
//if condition
if (var == 1)
{
printf("You got it right!\n");
}
//if-else condition
if(var==2)
{
printf("You got it right!\n");
}
else
{
printf("Oops!This is not my value\n");
}
//conditional operator ?:
printf( "Value of var is %d\n", (var == 1) ? 1: 0);
return 0;
}
