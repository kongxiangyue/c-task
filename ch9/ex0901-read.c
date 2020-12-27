#include <stdio.h>

void main()
{
	FILE* fp;
	fp = fopen("a.txt", "r");
	char content[5];
	//  π”√fgets 
	int i = 0;
	while(fgets(content,5,fp) != NULL)
	{
		printf("%d==%s\n", i,content);
		i++;
	}
	
	fclose(fp);

}

