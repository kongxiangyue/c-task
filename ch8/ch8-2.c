#include <stdio.h>

void swap(int  *p1,int *p2)
{
    int  temp;
    temp=*p1;  
	*p1=*p2;  
	*p2=temp;    //交换指针指向变量的值
}


void main()
{
	int a,b,c;
	int *pa,*pb,*pc;
	printf("请输入a,b,c:\n");
	scanf("%d %d %d",&a,&b,&c);
	pa=&a;  
	pb=&b; 
	pc=&c;
	
	if (*pa>*pb)
		swap(pa,pb);         //调用交换函数
	if(*pb>*pc)
		swap(pb,pc);
	if (*pa>*pc)
		swap(pa,pc);
		
	printf("swaped:\n");
	printf("a=%d,b=%d,c=%d\n",*pa,*pb,*pc);
}

