#include <stdio.h>
#include <errno.h>
#include <string.h>


int main ()
{
  FILE *pf;
  int errnum;
  pf = fopen ("unexist.txt", "rb");
  if (pf == NULL)
    {
      errnum = errno;
      printf ("Value of errno: %d\n", errno);
      perror ("Error printed by perror");
      printf ("Error opening file: %s\n", strerror (errnum));
    }
  else
    {
      fclose (pf);
    }
  return 0;
}
