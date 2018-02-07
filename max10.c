#include <stdio.h>
  int main() {
    int a[10];
    int i;
    int c;
    printf("Enter ten values:");
    
   for (i = 0; i < 10; i++)
   {
    scanf("%d", &a[i]);
    }
    
    c = a[0];
    for (i = 0; i < 10; i++) 
    {
    if (a[i] > c) 
    {
    c = a[i];
    }
    }
    printf("Greatest of ten numbers is %d", c);
    return 0;
  }
