/*************************************************************************
    > File Name: Prog_13.11.2.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sun 13 Mar 2016 06:45:36 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	FILE *fp_src;
	FILE *fp_copy;
	char temp[BUFSIZ];	//暂时存储由源文件读取的内容
	size_t bytes;

	if(argc != 3)
	{
		fprintf(stderr,"Usage:%s filename filename\n",argv[0]);
		exit(EXIT_FAILURE);
	}
	if(strcmp(argv[1],argv[2]) == 0	)
	{
		fprintf(stderr,"The destination file name shall not same as the name of the source file");
		exit(EXIT_FAILURE);
	}
	if((fp_src = fopen(argv[1],"rb")) == NULL)
	{
		fprintf(stderr,"Can't open %s\n",argv[1]);
		exit(EXIT_FAILURE);
	}
	if((fp_copy = fopen(argv[2],"wxb")) == NULL)
	{
		fprintf(stderr,"Can't open %s\n",argv[2]);
		exit(EXIT_FAILURE);
	}
	while((bytes = fread(temp,sizeof(char),BUFSIZ,fp_src)) > 0)
		fwrite(temp,sizeof(char),bytes,fp_copy);
	printf("Done copying.%s is copied as %s",argv[1],argv[2]);
	if(fclose(fp_src) != 0)	
	{
		fprintf(stderr,"Error in closing %s",argv[1]);
		exit(EXIT_FAILURE);
	}
	if(fclose(fp_copy) != 0)	
	{
		fprintf(stderr,"Error in closing %s",argv[2]);
		exit(EXIT_FAILURE);
	}

	return 0;
}
