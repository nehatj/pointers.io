#include<stdio.h>
#include<string.h>
int main ()
{
  int length;
  char str1[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
  char str2[6] = { 'W', 'o', 'r', 'l', 'd', '\0' };
  char str3[6];
  printf ("str1=%s,str2=%s\n", str1, str2);

  length = strlen (str1);
  printf ("Length of str1=%d\n", length);

  strcpy (str3, str1);
  printf ("str3=%s\n", str3);

  if (strcmp (str1, str3) == 0)
    printf ("string str1 and str3 matches\n");
  else
    printf ("string str1 and str3 doesnot match\n");

  return 0;
}
