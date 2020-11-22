#include <stdio.h>
void main()
{
	int a,b;
	printf("input two number:\n");
	scanf("%d%d",&a,&b);
	
	if(a>b) 
		printf("maxnumber=%d",a);
	else 
		printf("maxnumber=%d",b);
} 

