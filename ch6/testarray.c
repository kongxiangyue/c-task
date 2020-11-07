#include <stdio.h>

void main() 
{
	int array[] = {19,81,56,34,12,100,48};
	int len = sizeof(array)/sizeof(int);
	//char mys[] = "hello";
	char mys[5] = {'h','e','l','l','0'};
	
	printf("s=%d\n", sizeof(mys)/sizeof(char));
	
	int i,j ;
	int temp; 
	for(i = 0; i < len; i++ )
	{
		for(j = i+1; j < len; j++)
		{
			 if(array[j] > array[i]) 
			 {
			 	temp = array[j];
			 	array[j] = array[i];
			 	array[i] = temp;
			 }
		}
	}
	
	for(i = 0; i < len; i++)
	{
		printf("%d\n", array[i]);
	}
	
	
}
