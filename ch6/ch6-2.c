#include <stdio.h>
void main()
{
	int scr[10], i,sum=0,max,min;//����ɼ�����str���ܷ֣����ֵ��Сֵ
	float ave;
	for(i=0;i<10;i++)          //ѭ������ɼ������
	{
	  printf("�������%d��Ԫ�ص�ֵ",i+1);
	  scanf("%d",&scr[i]); //��������Ԫ�ص�ֵ
	  sum=sum+scr[i];      //����Ԫ�����
	}
	ave=sum/10.0;           //��ƽ��ֵ
	
	for(i=0;i<10;i++)
    {
		printf("%-4d",scr[i]);
	}
	printf("\n");
	printf("����Ԫ�صĺ���%d,ƽ��ֵ��%.2f\n",sum,ave);
	
	max=min=scr[0];
	for(i=1;i<10;i++)
	{
	  if(scr[i]>max) 
	  	max = scr[i];  //�����ֵ
	  	
	  if(scr[i]<min) 
	  	min = scr[i];  //����Сֵ
	}
	printf("���ֵ��%d����Сֵ��%d\n",max,min);
}

	

