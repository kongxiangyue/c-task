#include <stdio.h>
void main()
{
	int month,age;
	float price=200,money;
	printf("请输入游览月份：");
	scanf("%d",&month);   //输入月份
	printf("请输入游客年龄：");
    scanf("%d",&age);   //输入游客的年龄
	if(month>=5&&month<=10)   //是旅游旺季吗？
		if(age>=65) money=0;   //年龄是65岁以上吗？
	else 
		if(age<14) money=price/2;   //年龄在14岁以下吗？
		else money=price;
	else 
		if(age>=65) money=0;
	else 
		if(age<14) money=price*0.8/2;
	else 
		money=price*0.8;
	printf("该游客应购买门票价格为%.2f元",money);
}


