#include <stdio.h>


void main() {
	int x,a;
	x = (a=3,6*3);
	printf("%d,%d\n",a,x);
	x=a=3, 6*a;
	printf("%d, %d\n", a,x);
}

