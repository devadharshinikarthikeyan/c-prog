#include<stdio.h>
void main()
{
    int a; 
    scanf("%d",&a);
    while((a%2)!=0)
    {
        a++;
    }
    
    printf("%d",a);
}
