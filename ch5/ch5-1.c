#include   <stdio.h> 
void main( )
{
	int  n,i=1,scr,sum=0,ave;
 	printf("请输入评委的人数：");
 	scanf("%d",&n);
 	while(i<=n)                  //循环输入打分并求和
	 {
	 	printf("请为参赛队打分：0-100之间");
		scanf("%d",&scr);
		sum+=scr; 
		i++; 
	}
	ave=sum/n;
	printf("参赛队总成绩是评委打分平均分：%d",ave);
} 

