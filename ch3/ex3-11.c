#include <stdio.h>

void main() 
{
    float f,g,a,b;
    double d,e,x,y;
    f = 111.111;
    g = 222.222;
    a = 1111.1111;
    b = 2222.2222;
    d = 1234567891.1111;
    e = 2222222222.2222;
    x = 123456789123.111111;
    y = 222222222222.222222;
    
    printf("%f\n", f);
    printf("%f\n", f+g);
    printf("%8.3f\n", f);
    printf("%08.3f\n", f);
    printf("%-08.3f\n", f);
    printf("%0.2f\n", f);
    printf("%2.5f\n\n", f);
    
	
	printf("%f\n", a);
    printf("%f\n", b);
    printf("%f\n", a+b);
    printf("%8.4f\n\n", a);
    
    printf("%lf\n", d);
    printf("%lf\n", d+e);
    printf("%lf\n", x);
    printf("%lf\n", y);
    printf("%lf\n", x+y);
    
    
    
}
