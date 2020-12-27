#include <stdio.h>

void main()
{
	FILE* fp;
	fp = fopen("a2.txt", "wb");
	int buffer[10]= {1,2,3};
	
	fwrite((void*)buffer, 4, 10, fp);
	
	//printf("%c", buffer[0]);
	
	
	fclose(fp);

}

