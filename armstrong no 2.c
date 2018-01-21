#include<stdio.h>
void main()
{
int num,rem,result=0;
scanf("%d",&rem);
while(num!=0)
{
rem=num%10;
result=result+rem*rem*rem;
num=num/10;
}
if(result==num)
printf("armstrong no");
else
printf("not armstrong no");
}
