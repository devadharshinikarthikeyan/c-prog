#include <stdio.h>

int main(void) {
int a,d;
scanf("%d",&a);
while(a!=0)
{
	d=a%10;
	if(d%2!=0){
	printf("%d ",d);
	}
	a=a/10;
}
	return 0;
}
