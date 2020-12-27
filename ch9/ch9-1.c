#include <stdio.h>

typedef struct birthday/*出生日期的定义*/
{
		int year; 
		int month;
		int day;
} tBirthday;

void main()
{
	
	
	struct worker /*职工信息的定义*/
	{ 
		char name[20]; 
 		char sex;
 		tBirthday  date; 
 		char pno[19];  
 		char addr[80]; 
		char tel[12];
	} zg = {
		"tom",
		'm',
		{
			1990,
			10,
			1
		},
		"123",
		"golden street",
		"186 0000 000"
	};
    
    
	printf("var---\n%s\n%c\n%d-%d-%d\n%s\n%s\n%s\n"
	, zg.name
	, zg.sex
	, zg.date.year
	, zg.date.month
	, zg.date.day
	, zg.pno
	, zg.addr
	, zg.tel
	);
	
	struct worker* pzg = &zg;
	printf("\n\npointer---\n%s\n%c\n%d-%d-%d\n%s\n%s\n%s\n"
	, pzg->name
	, pzg->sex
	, pzg->date.year
	, pzg->date.month
	, pzg->date.day
	, pzg->pno
	, pzg->addr
	, pzg->tel
	);
	

}

