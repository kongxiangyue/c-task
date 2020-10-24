/********三位数逆序输出********/
#include <stdio.h>
void main()
{
	int n,a1,a2,a3;
	printf("请输入三位整数：");
	scanf("%d",&n);
	a1=n/100;    //求百位
	a2=n/10%10;  //求十位
	a3=n%10;     //求各位	
	printf("%d%d%d\n",a3,a2,a1);  //逆序输出
}

