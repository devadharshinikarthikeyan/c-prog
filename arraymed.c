#include<stdio.h>
int main()
{
int i,j,temp,n,b[10];
printf("Enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
for(j]i+1;j<n;j++)
{
if(b[i]>b[j])
{
temp=b[i];
b[i]=b[j];
b[j]=temp;
}
}
}
for(j=0;j<n;j++)
{
printf("%d",b[j]);
}
printf("\nTo find the median:");
n=(n-1)/2;
printf("%d",b[n]);
}
