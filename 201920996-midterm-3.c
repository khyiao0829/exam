#include <stdio.h>

void swap(int *p1,int *p2)
{
  int temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}
int main (void)
{
    int a = 10; b = 20;
    int *pa = &a;
    int *pb = &b;

    swap(&a,&b)

    printf("a= %d, b= %d", a,b);

    return 0;
}
