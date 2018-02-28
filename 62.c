#include<stdio.h>
int main()
{
char a[20];
int i;
printf("Enter the string:");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='0'||a[i]=='1')
printf("YES");
}
}
