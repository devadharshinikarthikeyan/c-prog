#include <stdio.h>

int main()
{
int x[100],a,b,v,avg,t;
printf("\n enter the number of elements");
scanf("%d",&v);
printf("\n enter the array");
for(a=0;a<=v;a++)
{
	scanf("%d",&x[a]);
}
for(a=0;a<=v;a++)
{
	for(b=a+1;b<=v;b++)
	{
	if(x[a]<x[b])
	{
		t=x[a];
		x[a]=x[b];
		x[a]=x[b];
	}
}
}
for(a=0;a<=v;a++)
{
avg=x[(v-1)/2];
}
printf("\n average value is %d",avg);
return 0;
}
