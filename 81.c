#include<stdio.h>
int main()
{
int a[10],b[10],d[10],n,i;
printf("Enter the number of times");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d %d",&a[i],&b[i]);
d[i]=b[i]-a[i];
}
for(i=0;i<n;i++)
printf("\n%d",d[i]);
return 0;
}
