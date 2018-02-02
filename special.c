#include <stdio.h>
 
int main()
{
    char    str[100];
    int countSpecialChar;
    int counter;
    countSpecialChar=0;
    printf("Enter a string: ");
    gets(str);
    for(counter=0;str[counter]!=0;counter++)
    {
 
        if(str[counter]<='0' && str[counter]>'9')
         countSpecialChar++;
    }
 
    printf( \nSpecialchar:,countSpecialChar);
 
    return 0;
}
