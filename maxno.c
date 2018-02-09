#include <stdio.h>
  int main() {
    int b[10];
    int i;
    int c;
    printf("Enter ten values:");
    
   for (i = 0; i < 10; i++)
   {
    scanf("%d", &b[i]);
    }
    
    c = b[0];
    for (i = 0; i < 10; i++) 
    {
    if (b[i] > c) 
    {
    c = b[i];
    }
    }
    printf("Greatest of ten numbers is %d", c);
    return 0;
  }
© 2018 GitHub, Inc.
