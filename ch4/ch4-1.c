#include   <stdio.h>
void main( )
{
  char  sex;                 /*�����Ա�*/
  char  sports;               /*�Ƿ�ϲ�������˶�*/
  char  diet;                 /*�Ƿ������õ���ʳϰ��*/
  float  myheight=0;            /*�������*/
  float  faheight;             /*�������*/
  float   moheight;            /*ĸ�����*/
  printf("�����к�(b)  ����Ů����g��?");
  scanf("%c",  &sex);
  printf("��������ְֵ���ߣ�cm��:");
  scanf("%f",  &faheight);
  printf("����������������(cm):");
  scanf("%f",  &moheight);
  
  printf("���Ƿ�ϲ������������Y/N��?\n");
  sports=getchar();

  printf("�Ƿ������õ���ʳϰ�ߵ�������Y/N��?");
  diet = getchar();
  
  if (sex=='b'|| sex=='B')
	  myheight=(faheight+moheight)*0.54;
	  
  if (sex=='g'|| sex=='G')
    myheight=(faheight*0.923+moheight)/2.0;
    
  if(sports=='Y'|| sports=='y')
    myheight=myheight*(1+0.023);
    
  if(diet=='Y'||diet=='y')
    myheight=myheight*(1+0.015);
    
  printf("Your future height will be %6.2f (cm)\n",  myheight);
}

