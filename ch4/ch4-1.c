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
  
  printf("你是否喜欢体育锻炼（Y/N）?\n");
  sports=getchar();

  printf("是否有良好的饮食习惯等条件（Y/N）?");
  diet = getchar();
  
  if (sex=='b'|| sex=='B')
	  myheight=(faheight+moheight)*0.54;
	  
  if (sex=='g'|| sex=='G')
    myheight=(faheight*0.923+moheight)/2.0;
    
  if(sports=='Y'|| sports=='y')
    myheight=myheight*(1+0.023);
    
  if(diet=='Y'||diet=='y')
    myheight=myheight*(1+0.015);
    
  printf("Your future height will be %6.2f (cm)\n",  myheight);
}

