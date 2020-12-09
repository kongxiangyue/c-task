#include <stdio.h>

void comp(int a[], int n)
{
	int i = 0;
	for (i = 0; i < n; ++i)
	{
		if (a[i] < 0)
		{
			a[i] = 0;
		}
		printf("c=%d  ", a[i]);
	}

}


void main()
{
	int a[5];
	int i = 0;
	//float ave=0;
	
	printf("input 5 numbers \n");
	for(i = 0; i < 5; ++i)
	{
		scanf("%d", &a[i]);
	}

	for(i = 0; i < 5; ++i)
	{
		printf("%d\n", a[i]);
	}
	comp(a, 5);

}
