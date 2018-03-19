#include<stdio.h>
#include<string.h>
int main()
{
    char c[20];
    int i,j,t,b;
    scanf("%s",c);
    b=strlen(c);
    for(i=0;i<b;i++)
    {
        for(j=i;j<b;j++)
        {   if(c[i]>c[j])
            {
            t=c[i];
            c[i]=c[j];
            c[j]=t;
            }
        }
    }
    for(i=0;i<b;i++)
    {
        printf("%c",c[i]);
    }
}
