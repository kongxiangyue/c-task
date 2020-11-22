#include <stdio.h>

float avg(float a[5])
{
	float sum = 0;
	int i = 0;
	for (i = 0; i < 5; ++i)
	{
		sum += a[i];
	}
	
	return sum/5;
}


void main()
{
	float a[5];
	int i = 0;
	//float ave=0;
	
	printf("input 5 score \n");
	for(i = 0; i < 5; ++i)
	{
		scanf("%f", &a[i]);
	}
	
	printf("avg = %f\n", avg(a));
	

}
