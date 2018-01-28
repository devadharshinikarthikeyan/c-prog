#include<stdio.h>
void main()
{
  char a[25],b[25];
  int i=0,j=0;
  printf("\nEnter First String:");
  gets(a);
  printf("\nEnter Second String:");
  gets(b);
  while(a[i]!='\0')
  i++;
  while(b[j]!='\0')
  {
    a[i]=b[j];
    j++;
    i++;
  }
  a[i]='\0';
  printf("\nConcatenated String is %s",a);
}
