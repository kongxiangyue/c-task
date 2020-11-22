#include <stdio.h>
int age(int n)
{
	int c;
	if(n==1) 
		c=4;
	else 
		c=age(n-1)+1;//µİ¹éµ÷ÓÃ
	return c;
}

void main()
{
	printf("age(5)=%d",age(5));
}

