/********��λ���������********/
#include <stdio.h>
void main()
{
	int n,a1,a2,a3;
	printf("��������λ������");
	scanf("%d",&n);
	a1=n/100;    //���λ
	a2=n/10%10;  //��ʮλ
	a3=n%10;     //���λ	
	printf("%d%d%d\n",a3,a2,a1);  //�������
}

