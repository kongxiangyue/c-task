#include <stdio.h>
void main()
{
	int month,age;
	float price=200,money;
	printf("�����������·ݣ�");
	scanf("%d",&month);   //�����·�
	printf("�������ο����䣺");
    scanf("%d",&age);   //�����ο͵�����
	if(month>=5&&month<=10)   //������������
		if(age>=65) money=0;   //������65��������
	else 
		if(age<14) money=price/2;   //������14��������
		else money=price;
	else 
		if(age>=65) money=0;
	else 
		if(age<14) money=price*0.8/2;
	else 
		money=price*0.8;
	printf("���ο�Ӧ������Ʊ�۸�Ϊ%.2fԪ",money);
}


