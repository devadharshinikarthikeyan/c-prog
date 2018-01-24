#include<stdio.h>
void main()
{
char tmp[16];
scanf("%d", tmp);
int d = 0;
int j=0;
while(j<strlen(tmp) && d == 0)
{
  if(tmp[j] > 57 && tmp[j] < 48)
    d = 0;
  else
    d = 1;
  j++;
}
