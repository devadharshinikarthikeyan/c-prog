#include<stdio.h>
int main()
{
	int c,d,r=0;
	scanf("%d",&c);
	while(c!=0)
	{
		d=c%10;
		r=r*10+d;
		c=c/10;
	}
	c=r;
	while(c!=0)
	{
		d=c%10;
		printf("%d ",d);
		c=c/10;
	}
}
