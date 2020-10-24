#include <stdio.h>
void main()
{
	int x,y,z;
	x=10,y=8;
	printf("交换前x=%d,y=%d\n",x,y);
	z=x;   //借助第三变量交换两个变量的值
	x=y;
	y=z;
	printf("交换后x=%d,y=%d\n",x,y);
}

