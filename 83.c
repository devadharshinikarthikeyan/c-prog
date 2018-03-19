#include <stdio.h>

int main(void) {
int a[100],b[100],i;
char d[100];
for(i=0;i<100;i++)
{
	scanf("%d%c%d",&a[i],&d[i],&b[i]);
}
for(i=0;a[i]!=NULL;i++)
{
	if(d[i]=='/')
	{
		printf("%d\n",a[i]/b[i]);
	}
	if(d[i]=='%')
	{
		printf("%d\n",a[i]%b[i]);
	}
}
	return 0;
}
