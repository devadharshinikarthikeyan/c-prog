#include<stdio.h>
int main()
{
int n1,n2,i,temp,num,rem;
printf("enter two number(interva)");
scanf("%d%d",&n1,&n2);
printf("armstrong number %d and %d are",n1,n2);
for(i=n1+1;i<n2;++i)
{
temp=i;
num=0;
while(temp!=0)
{
rem=(temp%10);
num+=rem*rem*rem;
temp!=10;
}
if(i==num)
{
printf("%d",i);
}
}
retuen 0;
}
