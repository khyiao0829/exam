#include <stdio.h>

int main (void)
{
  int i=1;
  int *p = &i;

  for(int j=0; j<1000; j++)
  {
    printf("%d", i);
   ( *p)++;
    if(i%10==0)
      printf("\n");
  }
  return 0;
}
