#include <stdio.h>
fib(int n)
{
  int f;
  if (n==1||n==2)
      f=1;
  else
      f=fib(n-1)+fib(n-2);
  return f;
  
}


main()
{

	int i,s=0;
	for (i=1;i<=12;i++)
    	s=s+fib(i);
	printf(¡°n=12,s=%d¡±,s);
}

