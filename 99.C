#include <stdio.h>
 
int main(void) {
	int a,b,c,e;
	scanf("%d%d%d",&a,&b,&c);
	e=(a*b)%c;
	printf("%d",e);
	return 0;
}
