#include   <stdio.h> 
void main( )
{
	int  n,i=1,scr,sum=0,ave;
 	printf("��������ί��������");
 	scanf("%d",&n);
 	while(i<=n)                  //ѭ�������ֲ����
	 {
	 	printf("��Ϊ�����Ӵ�֣�0-100֮��");
		scanf("%d",&scr);
		sum+=scr; 
		i++; 
	}
	ave=sum/n;
	printf("�������ܳɼ�����ί���ƽ���֣�%d",ave);
} 

