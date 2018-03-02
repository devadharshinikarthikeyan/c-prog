#include <stdio.h>

int main(void) {
	int a,b,c,i,d=0;
	printf("Enter the number");
	scanf("%d",&a);
	printf("Enter the limits");
	scanf("%d%d",&b,&c);
	for(i=b;i<=c;i++)
	{
		if(a==i)
		{
			d=1;
			break;
		}
	}
	if(d==1)
	printf("\nYes");
	else
	printf("\nNo");
	return 0;
}
