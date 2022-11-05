#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fp;
	fp = fopen("test.txt","w");
	if(fp == NULL)
	{
		printf("file open failed!\n");
		exit(1);
	}
	printf("file open success!\n");

	return 0;
}
