#include <stdio.h>
float sum(float score1,float score2)  //求和
{
  return score1+score2;
}

float avg(float score1,float score2) //求平均值
{
  return (score1+score2)/2;
}


void main()
{
	float score1,score2;
 	float sum1=0,avg1=0;
	printf("请输入第一门课学生成绩");
	scanf("%f",&score1);
	printf("请输入第一门课学生成绩");
	scanf("%f",&score2);
	sum1=sum(score1,score2); //调用函数
	avg1=avg(score1,score2);  //调用函数
	printf("该学生总分为%5.2f，平均分为%5.2f\n",sum1,avg1);
}

