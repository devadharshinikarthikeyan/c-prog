#include <stdio.h>

int main(void) {
int a,b,d;
scanf("%d%d",&a,&b);
d=a*b;
if(d/a==b)
printf("Yes");
else
printf("No");
	return 0;
}
