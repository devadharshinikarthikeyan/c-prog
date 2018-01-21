#include<stdio.h>
void main()
{
int n,f=1,i;
printf("enter the number");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
f=f*i;
}
printf("factorial %d",f);
}
