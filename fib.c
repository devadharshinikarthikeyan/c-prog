#include<stdio.h>
int main()
{
  
    int i, b[25];

    
    b[0] = 0;

   
    b[1] = 1;

   
    for (i = 2; i < 10; i++) {
        
        b[i] = b[i - 1] + b[i - 2];
    }
    printf("The fibonacci series is as follows ");
    
    for (i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}
