#include <stdio.h>
void main()
{
	int x,y,z;
	x=10,y=8;
	printf("����ǰx=%d,y=%d\n",x,y);
	z=x;   //��������������������������ֵ
	x=y;
	y=z;
	printf("������x=%d,y=%d\n",x,y);
}

