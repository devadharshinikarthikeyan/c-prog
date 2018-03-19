#include<stdio.h>
int main()
{
char a[20],s1[20],s2[20];
int i=0,j=0,k=0;
scanf("%s",a);
while(a[i]!='\0')
{
if(i%2==0)
{
s1[j]=a[i];
j++;
}
else
{
s2[k]=a[i];
k++;
}
i++;
}
printf("%s %s",s1,s2);
}
