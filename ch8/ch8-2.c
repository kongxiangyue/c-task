#include <stdio.h>

void swap(int  *p1,int *p2)
{
    int  temp;
    temp=*p1;  
	*p1=*p2;  
	*p2=temp;    //����ָ��ָ�������ֵ
}


void main()
{
	int a,b,c;
	int *pa,*pb,*pc;
	printf("������a,b,c:\n");
	scanf("%d %d %d",&a,&b,&c);
	pa=&a;  
	pb=&b; 
	pc=&c;
	
	if (*pa>*pb)
		swap(pa,pb);         //���ý�������
	if(*pb>*pc)
		swap(pb,pc);
	if (*pa>*pc)
		swap(pa,pc);
		
	printf("swaped:\n");
	printf("a=%d,b=%d,c=%d\n",*pa,*pb,*pc);
}

