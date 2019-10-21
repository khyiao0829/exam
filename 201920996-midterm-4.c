#include <stdio.h>

int main(void)
{
  int i,num,j;
  printf("Enter the number : "); //The facterial of 5 is 786408[Inferior 1 (process 29948) exited normally]

  scanf("%d", &num);

  for (i=1;i<num;i++)
    j = j*i; 

  printf("The facterial of %d is %d",num,j);

}
