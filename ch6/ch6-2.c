#include <stdio.h>
void main()
{
	int scr[10], i,sum=0,max,min;//定义成绩数组str，总分，最大值最小值
	float ave;
	for(i=0;i<10;i++)          //循环输入成绩并求和
	{
	  printf("请输入第%d个元素的值",i+1);
	  scanf("%d",&scr[i]); //输入数组元素的值
	  sum=sum+scr[i];      //数组元素求和
	}
	ave=sum/10.0;           //求平均值
	
	for(i=0;i<10;i++)
    {
		printf("%-4d",scr[i]);
	}
	printf("\n");
	printf("数组元素的和是%d,平均值是%.2f\n",sum,ave);
	
	max=min=scr[0];
	for(i=1;i<10;i++)
	{
	  if(scr[i]>max) 
	  	max = scr[i];  //求最大值
	  	
	  if(scr[i]<min) 
	  	min = scr[i];  //求最小值
	}
	printf("最大值是%d，最小值是%d\n",max,min);
}

	

