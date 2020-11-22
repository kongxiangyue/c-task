#include <stdio.h>
void func();

void main()
{
	int i ;

	for(i = 0; i < 5; ++i)
	{
		func();
	}
	

}

void func() 
{
	static int j = 0;
	++j;
	
	printf ("j=%d\n", j);
	
}
