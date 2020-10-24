/****求圆的面积****/

#define  PI 3.14 //声明常量  宏定义
#include <stdio.h>

void main()
{
	int r;//圆半径r//声明  int i;
	float s;//圆面积s 定义  int i=0;
	r=2;
	s=PI*r*r;
	
	//printf("这是一个字符串");
	printf("当r=%d, s=%.2f", r,s);// 格式化字符串，第二个参数
	
 
}

