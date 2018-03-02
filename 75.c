#include <stdio.h>
#include<string.h>
int main(void) {
	char b[20];
	int i,n;
	scanf("%s",b);
	n=strlen(b);
	for(i=0;i<n;i++)
	{
		if(i==n/2){
			b[i]='*';
			break;
		}
 
	}
	printf("%s",b);
	return 0;
}
