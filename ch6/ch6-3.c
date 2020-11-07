#include <stdio.h>
void main()
{ 
	int i,j,p,q,s,a[10];
    printf(" 输入10 个学生成绩:\n");
    for(i=0;i<10;i++)        //循环输入成绩
      scanf("%d",&a[i]);
      
    for(i=0;i<10;i++)       //外循环
    { 
		p=i;
		q=a[i];
        for(j=i+1;j<10;j++) //内循环逐个与外循环确定的数组元素比较
        {
        	if(q<a[j]) 
			{
				p=j;
				q=a[j]; 
			} //比外循环的元素大就交换
        	if(i!=p)            
        	{
				s=a[i ];
          		a[i]=a[p];
          		a[p]=s; 
			}
		}
        
    }
	printf("成绩排序为：");
	
   	for(i=0;i<10;i++)       //循环输出成绩
       printf("%-4d",a[i]);\
    
	printf("\n");
}

        


