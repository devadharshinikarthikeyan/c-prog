#include <stdio.h>

int main(void) {
int b,i;
scanf("%d",&b);
for(i=1;i<=b;i++)
{
	if(b%i==0)
	printf("%d ",i);
	
}
	return 0;
}
