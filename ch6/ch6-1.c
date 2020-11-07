#include <stdio.h>
void main()
{ 	int scr[10], i;       //定义成绩数组str
	//int array[] = {1,2};
	//printf("size=%d\n", sizeof(array)/sizeof(int));
	for(i=0;i<10;i++)    //循环输入成绩
	{
		printf("请输入第%d个元素的值",i+1);
		scanf("%d",&scr[i]); //输入数组元素的值     		}
    }
    printf("十名同学的成绩：");
    for(i=0;i<10;i++)          //循环输出成绩
		printf("%-4d",scr[i]);	

}

