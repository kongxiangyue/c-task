#include <stdio.h>
#include <string.h>


typedef struct student
{
	int No;
	int age;
}tStudent;


int add1(int a)
{
	return a+1;
}

int main(int argc, char *argv[])
{
	int array[2][3] = {{19,22,16},{89,45,3}};
	int* ptr = array;
	
	int i ;
	for (i = 0; i < 6; i++ )
	{
		//ptr[i] = 8;
		printf("%d\n", ptr[i]);
	}
	
	int (*p) (int);
	p = &add1;
	printf("add1=%d", p(2));
	
	
	
	char s[] ="dfsadfsfsfweyhrfwlsjdfkljsafyh";
	printf("\n%s\n", s);
	
	printf("%d\n", sizeof(s)/sizeof(char));
	printf("%d\n", strlen(s));
	
	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
		//printf("%s\n", env[i]);
	}	
	
	
	tStudent stu1;
	tStudent stu2 = {12,22};
	printf("\n%d,%d\n", stu2.No, stu2.age);
	
	char str[]="ab\n\012\\\"";
	printf("%d\n",strlen(str)); 
	printf("%s", str);
	
	int aa[6];
	
	for (i = 0; i < 6; i++)
	{
		aa[i] = 9*(i-2+4*(i>3))%5;
		printf("%2d  ", aa[i]);
	}
	
	
	return 0;
}
