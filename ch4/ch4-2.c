#include <stdio.h>
void main()
{
  int  y,leap;
  printf("������һ����ݣ�");
  scanf("%d",&y);
 if((y%4==0)&&(y%100!=0)||(y%400==0))  //��������������
	leap=1;
  else
    leap=0;
  if(leap==1)
    printf("%d����һ������",y);
  else
  	printf("%d�겻��һ������",y);
}

