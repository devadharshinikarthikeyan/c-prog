#include<stdio.h>
int main()
{
int num,r sum=0,temp;
printf("enter the number");
scanf("%d",&num);
temp=num;
while(num)
{
r=num%10;
num=num/10;
sum=sum*10+r;
}
if(temp==sum)
printf("palindrome",temp);
else
printf("not a palindrome",temp);
}
