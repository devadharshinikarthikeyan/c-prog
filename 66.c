#include<stdio.h>
int main()
{
  int b,i,f=1;
  scanf("%d",&b);
  for(i=2;i<=b/2;i++)
  {
    if(b%i==0)
    {
   
    	f=0;
    	break;
    }
    
  }
  if(f==1)
  printf("Yes");
  else
  printf("No");
  return 0;

}
