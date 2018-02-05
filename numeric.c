#include<stdio.h>
int main()
{
char s[400];
int i,count;
printf("\n Enter the string");
scanf("%a",&s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]>='0'&&s[i]<='7')
{
count++;
}
}
printf("\n The numeric value is %d",count);
}
return 0;
}
