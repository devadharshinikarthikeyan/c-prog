#include<stdio.h>
int main()
{
int num,a[220],i;
printf("enter the number");
printf("Enter the integer");
scanf("%d",&num);
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<num;i++)
{
printf("the index is%d\t%d\n",a[i],i);
}
return 0;
}
