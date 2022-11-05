#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fp;
	unsigned char result;
	fp = fopen("test.txt","a");
	if(fp == NULL)
	{
		printf("file open failed!\n");
		exit(1);
	}
	printf("file open success!\n");
	result = fputs("my name is shambhu kumar\n",fp);
	if(result == EOF)
	{	
		printf("write failed in test.txt\n");
	}
	else
	{	
		printf("write success in test.txt\n");
	}
	result = fclose(fp);

	if(result == EOF)
	{	
		printf("file close failed\n");
	}
	else
	{	
		printf("file close success\n");
	}
	return 0;
}
