#include <stdio.h>
 int main()
{
int a,hour,min,sec;
    printf("input number in total seconds\n");
    scanf("%d", &input a);
    while(input a > 3600){
    hour = input a /3600;
    min = input a % 60;
    sec = min % 60;
    printf("%dhours %dminutes and %dseconds\n",hour,min,sec);
    }   
    min = input a % 60;
    sec = input a % 60;
    printf("%dminutes and %dseconds\n",min,sec);
    return 0;
}
