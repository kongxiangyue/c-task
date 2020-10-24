#include <stdio.h>
void main()
{
    char a;
    printf("请输入一个小写字母: ");
    a=getchar();//通过键盘输入一个小写字母
    printf("该字母对应的大写字母是：%c \n", a-32);
 }


