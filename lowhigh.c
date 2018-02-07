#include<stdio.h>
void main()
{
int n,a[1000],i,j,t;
scanf("%d \n",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("%d%d",a[0],a[n-1]);
}
