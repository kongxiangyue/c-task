
#include <stdio.h>

void main()
{
	int i = 3;
	//int s = (++i)+4;  //  ��+1��Ȼ���ٽ��и�ֵ���� 
    int	s = (i++)+4;     //  �Ƚ��и�ֵ���� ��Ȼ����+1 
	
	printf("s=%d i=%d\n", s, i );
	
	
  // unsigned	int c;//64 32 16λ  1-15λ 
   
  printf("=====%d\n", sizeof(int));//���������� 
   
   char c_var='s';
  printf("=====%d\n", sizeof(c_var));//���ڱ��� 
   
   
   
    
   
   
   
 
}

