#include <stdio.h>
void main()
{ 
	int i,j,p,q,s,a[10];
    printf(" ����10 ��ѧ���ɼ�:\n");
    for(i=0;i<10;i++)        //ѭ������ɼ�
      scanf("%d",&a[i]);
      
    for(i=0;i<10;i++)       //��ѭ��
    { 
		p=i;
		q=a[i];
        for(j=i+1;j<10;j++) //��ѭ���������ѭ��ȷ��������Ԫ�رȽ�
        {
        	if(q<a[j]) 
			{
				p=j;
				q=a[j]; 
			} //����ѭ����Ԫ�ش�ͽ���
        	if(i!=p)            
        	{
				s=a[i ];
          		a[i]=a[p];
          		a[p]=s; 
			}
		}
        
    }
	printf("�ɼ�����Ϊ��");
	
   	for(i=0;i<10;i++)       //ѭ������ɼ�
       printf("%-4d",a[i]);\
    
	printf("\n");
}

        


