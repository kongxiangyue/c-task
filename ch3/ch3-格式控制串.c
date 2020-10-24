#include<stdio.h>
void main()
{
    int a=88,b=89;
    printf("%d  %d\n",a,b);
    printf("%d,%d\n",a,b);
    printf("%c,%c\n",a,b);
    printf("a=%d,b=%d\n",a,b);
    
    
    int i =123456;
    printf("%8d\n%7d\n%-9dabc\n%5d\n", i ,i,i,i );
    
    int k = 0x123;
    printf("%04x\n", k );
    
    float f= 123.456;
    printf ("f=%4.2f\n", f);
    
    
    scanf("%d,%d", &i, &k);
    
    printf("%d---%d", i ,k);
    
    
  
}


