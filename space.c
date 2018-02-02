#include <stdio.h>

 int main()
 {
   int i,count=0;
   char b[100];
   gets(b);
   for(i=0 ; b[i]!='\0' ; i++)
     {
     	if(b[i]==' ')
     	{
             count++;
     	}
     }
   printf("%d\n",count);
 return 0;
 }
