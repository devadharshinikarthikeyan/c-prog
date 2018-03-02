#include <stdio.h>
 
int main(void) {
int b,i,f=0;
scanf("%d",&b);
for(i=2;i<=b/2;i++)
{
	if(b%i==0){
		f=1;
		break;
	}
}
if(f==1)
printf("Composite");
else
printf("No");
	return 0;
}
