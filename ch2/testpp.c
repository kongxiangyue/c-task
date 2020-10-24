
#include <stdio.h>

void main()
{
	int i = 3;
	//int s = (++i)+4;  //  先+1，然后再进行赋值运算 
    int	s = (i++)+4;     //  先进行赋值运算 ，然后再+1 
	
	printf("s=%d i=%d\n", s, i );
	
	
  // unsigned	int c;//64 32 16位  1-15位 
   
  printf("=====%d\n", sizeof(int));//对数据类型 
   
   char c_var='s';
  printf("=====%d\n", sizeof(c_var));//对于变量 
   
   
   
    
   
   
   
 
}

