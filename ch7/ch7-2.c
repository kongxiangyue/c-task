#include <stdio.h>
float sum(float score1,float score2)  //���
{
  return score1+score2;
}

float avg(float score1,float score2) //��ƽ��ֵ
{
  return (score1+score2)/2;
}


void main()
{
	float score1,score2;
 	float sum1=0,avg1=0;
	printf("�������һ�ſ�ѧ���ɼ�");
	scanf("%f",&score1);
	printf("�������һ�ſ�ѧ���ɼ�");
	scanf("%f",&score2);
	sum1=sum(score1,score2); //���ú���
	avg1=avg(score1,score2);  //���ú���
	printf("��ѧ���ܷ�Ϊ%5.2f��ƽ����Ϊ%5.2f\n",sum1,avg1);
}

