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
  
  printf("���Ƿ�ϲ������������Y/N��?");
  fflush(stdin);
  sports=getchar();
  //scanf("%c",  &sports);

  printf("�Ƿ������õ���ʳϰ�ߵ�������Y/N��?");
  fflush(stdin);
  diet = getchar();
  //scanf("%c", &diet);
  
  if (sex=='b'|| sex=='B')
	  myheight=(faheight+moheight)*0.54;
	  
  if (sex=='g'|| sex=='G')
  	myheight=(faheight*0.923+moheight)/2.0;
    
    
  if(sports=='Y'|| sports=='y')
  {
  	myheight=myheight*(1+0.023);
  	printf("sports\n");
  }
    
    
  if(diet=='Y'||diet=='y')
  {
  	myheight=myheight*(1+0.015);
  	printf("diet\n");
  }
    
    
  printf("Your future height will be %6.2f (cm)\n",  myheight);
}

//https://blog.csdn.net/monkeyzh123/article/details/50578301
/*

 scanf("%c",&c);��䲻���������� �ַ�,ʲôԭ���أ�������printf("c=%d/n",c);��C��int��ʾ����������printf("c=%d/n",c);��һ�䣬���� scanf()��������C������ʲô������� c=10 ,ASCIIֵΪ10��ʲô�����м�/n.
���ˣ�����ÿ����һ��"Enter"��������̻�������ȥһ�����س���(/r),һ��������"(/n), ������/r��scanf()����������ˣ�������ô��Ϊ��^_^������/n��scanf()���������󡱵ظ�����c.
����취������������scanf()����֮��Ӹ� fflush(stdin);��
���м� getch(); getchar(); Ҳ���ԣ�����Ҫ�Ӿ���scanf()�����Ǹ�������Ͳ������ˣ������Լ�ȥ�����ɡ�
���Ǽ�fflush(stdin);����ʲô��������С�
������: fflush 
�� ��: ���һ���� 
�� ��: int fflush(FILE *stream); 


*/

