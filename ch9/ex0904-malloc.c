#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main()
{
   char *str;
 
   /* ������ڴ���� */
   str = (char *) malloc(15);
   //memset(str, 0, 15);
   strcpy(str, "runoob");
   
   printf("String = %s,  Address = %p\n", str, str);

 
   free(str);
 
   return(0);
}

