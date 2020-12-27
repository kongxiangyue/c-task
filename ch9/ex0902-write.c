#include <stdio.h>

void main()
{
	FILE* fp;
	fp = fopen("a1.txt", "w");
	char content[] = "Hello Gupt";
	char ch = 'A';
	
	fputc(ch, fp);
	fputc('\n', fp);
	fputs(content, fp);
	
	fclose(fp);

}

