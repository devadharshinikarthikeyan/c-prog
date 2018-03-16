#include <stdio.h>

int main(void) {
	int i;
	char a[100];
	scanf("%[^\n]a",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(i==0 )
		{
			if(a[i]>='a' && a[i]<='z')
			{
				a[i]=a[i]-32;
				
			}
		}
	          if(a[i]==' ')
		{
			++i;
			if(a[i]>='a' && a[i]<='z')
			{
				a[i]=a[i]-32;
			}
		}
	}
	printf("%s",a);
	return 0;
}
