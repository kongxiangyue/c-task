#include <stdio.h>

void comp(int c)
{
	if (c > 0)
		printf("c=%d\n", c);
	else
		printf("c=%d\n", 0);
}


void main()
{
	int a[5], i ;
	
	printf("input 5 numbers\n");
	for(i = 0; i < 5; ++i)
	{
		scanf("%d", &a[i]);
		comp(a[i]);
	}

}
