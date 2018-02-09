#include "stdio.h"

int main() 
{
  int n,b,sum=0;
  printf("\n enter the number");
  scanf("%d",&b);
  while(b>0)
  {
    n=b%10;
    b=b/10;
    sum=sum+n;
  }
  printf("\n sum of digits is %d",sum);
  return 0;
}
