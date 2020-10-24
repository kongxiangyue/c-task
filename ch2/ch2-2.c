#include <stdio.h>
void main()
{
	char word, password;
	printf("请输入a~n的一个字母：");
	
	scanf("%c",&word);   //输入字符
	
	password=word+1;
	printf("加密后的字母为%c\n",password);
}

