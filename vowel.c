#include<stdio.h>
void main()
{
char a,b,c;
scanf("%C",&a);
b=(a=='a'||a=='e'||a=='i'||a=='o'||a=='u');
c=(a=='A'||a=='E'||a=='I'||a=='O'||a=='U');
if(b||c)
{
printf("letter is vowel");
}
else
{
printf("letter is not vowel");
}}
