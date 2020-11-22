#include <stdio.h>
int global = 0;
void func();

void main()
{
	int i ;

	for(i = 0; i < 5; ++i)
	{
		func();
	}
	++global;
	printf ("in main: global=%d,i=%d\n", global,i);
	

}

void func() 
{
	int i = 0;
	++global;
	
	
	printf ("global=%d,i=%d\n", global,i);
	
}
