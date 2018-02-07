#include <stdio.h>
int main()
{
	int b[10],n,i;
	printf("enter the number");
	scanf("%d",&n);
	printf("enter the number");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	if(n=>0&&n<=9)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
