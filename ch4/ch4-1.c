#include   <stdio.h>
void main( )
{
  char  sex;                 /*孩子性别*/
  char  sports;               /*是否喜欢体育运动*/
  char  diet;                 /*是否有良好的饮食习惯*/
  float  myheight=0;            /*孩子身高*/
  float  faheight;             /*父亲身高*/
  float   moheight;            /*母亲身高*/
  printf("你是男孩(b)  还是女孩（g）?");
  scanf("%c",  &sex);
  printf("你输入你爸爸的身高（cm）:");
  scanf("%f",  &faheight);
  printf("你输入你妈妈的身高(cm):");
  scanf("%f",  &moheight);
  
  printf("你是否喜欢体育锻炼（Y/N）?");
  fflush(stdin);
  sports=getchar();
  //scanf("%c",  &sports);

  printf("是否有良好的饮食习惯等条件（Y/N）?");
  fflush(stdin);
  diet = getchar();
  //scanf("%c", &diet);
  
  if (sex=='b'|| sex=='B')
	  myheight=(faheight+moheight)*0.54;
	  
  if (sex=='g'|| sex=='G')
  	myheight=(faheight*0.923+moheight)/2.0;
    
    
  if(sports=='Y'|| sports=='y')
  {
  	myheight=myheight*(1+0.023);
  	printf("sports\n");
  }
    
    
  if(diet=='Y'||diet=='y')
  {
  	myheight=myheight*(1+0.015);
  	printf("diet\n");
  }
    
    
  printf("Your future height will be %6.2f (cm)\n",  myheight);
}

//https://blog.csdn.net/monkeyzh123/article/details/50578301
/*

 scanf("%c",&c);这句不能正常接收 字符,什么原因呢？我们用printf("c=%d/n",c);将C用int表示出来，启用printf("c=%d/n",c);这一句，看看 scanf()函数赋给C到底是什么，结果是 c=10 ,ASCII值为10是什么？换行即/n.
对了，我们每击打一下"Enter"键，向键盘缓冲区发去一个“回车”(/r),一个“换行"(/n), 在这里/r被scanf()函数处理掉了（姑且这么认为吧^_^），而/n被scanf()函数“错误”地赋给了c.
解决办法：可以在两个scanf()函数之后加个 fflush(stdin);，
还有加 getch(); getchar(); 也可以，但是要视具体scanf()语句加那个，这里就不分析了，读者自己去摸索吧。
但是加fflush(stdin);不管什么情况都可行。
函数名: fflush 
功 能: 清除一个流 
用 法: int fflush(FILE *stream); 


*/

