# include "stdio.h"
void main( )
{
	int a, b, *p1, *p2,p;
    printf("请输入a和b:\n");
    scanf("%d,%d", &a, &b);
    p1=&a; 
	p2=&b;
    if (a<b)                       //用指针交换a,b
    {	p=*p1; 
		*p1=*p2;
		*p2=p;
	}
    printf ("\na=%d,b=%d\n", a, b);
    printf ("指针1max=%d, 指针2min=%d\n", *p1, *p2);
}

