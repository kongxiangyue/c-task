#include <stdio.h>
void main()
{ 	int scr[10], i;       //����ɼ�����str
	//int array[] = {1,2};
	//printf("size=%d\n", sizeof(array)/sizeof(int));
	for(i=0;i<10;i++)    //ѭ������ɼ�
	{
		printf("�������%d��Ԫ�ص�ֵ",i+1);
		scanf("%d",&scr[i]); //��������Ԫ�ص�ֵ     		}
    }
    printf("ʮ��ͬѧ�ĳɼ���");
    for(i=0;i<10;i++)          //ѭ������ɼ�
		printf("%-4d",scr[i]);	

}

