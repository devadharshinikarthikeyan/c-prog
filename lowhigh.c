#include<stdio.h>
void main()
{
int n,b[1000],i,j,t;
scanf("%d \n",&n);
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n-1;i++)
{
for(j=1;j<n;j++)
{
if(b[i]>b[j])
{
t=b[i];
b[i]=b[j];
b[j]=t;
}
}
}
printf("%d%d",b[0],b[n-1]);
}
