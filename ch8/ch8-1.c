# include "stdio.h"
void main( )
{
	int a, b, *p1, *p2,p;
    printf("������a��b:\n");
    scanf("%d,%d", &a, &b);
    p1=&a; 
	p2=&b;
    if (a<b)                       //��ָ�뽻��a,b
    {	p=*p1; 
		*p1=*p2;
		*p2=p;
	}
    printf ("\na=%d,b=%d\n", a, b);
    printf ("ָ��1max=%d, ָ��2min=%d\n", *p1, *p2);
}

