#include <stdio.h>

int max(int a,int b)
{
	if(a>b) 
		return a;
	else 
		return b;
} 
void main()
{
    int max(int a,int b);
	int x,y,z;
	printf("input two number:\n");
	scanf("%d%d",&x,&y);
	z = max(x,y);
	printf("maxnumber=%d",z);
}

