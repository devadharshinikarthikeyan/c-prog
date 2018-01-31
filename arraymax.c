#include <stdio.h>
int main()
{    
    int array[100], max, size, c, location = 1;
    
   printf("Enter the number of elements in array\n");
    scanf("%d", &size);
    
    printf("Enter %d integers\n", size);
    
    for (c = 0; c < size; c++)
scanf("%d", &array[c]);
    
    max = array[0];
    
    for (c = 1; c < size; c++)
    {
        if (array[c] > max)
        {
        max  = array[c];
        location = c+1;
        }
    }
    
    printf("Maximum element is present at location %d and it's value is %d.\n", location, max);
    return 0;    
}
