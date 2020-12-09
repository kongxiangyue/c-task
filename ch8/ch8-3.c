# include  <stdio.h>
void main( )
{
	char a[20], b[20], *p1, *p2;
	int i;
	
	printf("ÇëÊäÈë×Ö·û´®£º\n");
 	gets(a);
 	
	for(p1=a,p2=b; *p1!='\0'; p1++, p2++)  
	{
		if(*p1>='a'&&*p1<='z')
   		{ 
		   *p1=*p1-32; 
		   *p2=*p1;
		}
   		else 
     		*p2=*p1;
	}
   	
	*p2='\0';
	
	printf("·Å´ó¾µ£º");
	
	puts(b);
	
}

