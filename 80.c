#include <stdio.h>

int main(void) {
int b,d;
scanf("%d",&b);
while(b!=0)
{
	d=a%10;
	if(d%2!=0){
	printf("%d ",d);
	}
	b=b/10;
}
	return 0;
}
