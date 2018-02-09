#include<stdio.h>

void main()
{
    int a,b;
    printf("enter the numbers ");
    scanf("%d%d",&a,&b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("swapped numbers are  %d%d",a,b);
}
