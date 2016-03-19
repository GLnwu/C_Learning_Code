/*************************************************************************
    > File Name: append.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年02月28日 星期日 00时04分54秒
 ************************************************************************/
/* append.c -- appends files to a file */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUFSIZE 4096
#define SLEN 81
void append(FILE *source,FILE *dest);

int main(int argc,char * argv[])
{
	FILE *fa,*fs;		//fa指向追加的目的文件，fs指向源文件
	int files = argc - 2;		//被追加的个数
	int i,ch;

	if(argc <= 2)
	{
		fprintf(stderr,"Usage:program argv[i] file_to_be append...\n");
		exit(EXIT_FAILURE);
	}
	if((fa = fopen(argv[1],"a+")) == NULL)
	{
		fprintf(stderr,"Can't open %s\n",argv[1]);
		exit(EXIT_FAILURE);
	}
	if(setvbuf(fa,NULL,_IOFBF,BUFSIZE) != 0)
	{
		fputs("Can't create output buffer\n",stderr);
		exit(EXIT_FAILURE);
	}

	for(i = 2; i < argc;i++)
	{
		if(strcmp(argv[i],argv[1]) == 0)
			fputs("Can't append file to itself\n",stderr);	//追加文件和源文件不能相同
		else if((fs = fopen(argv[i],"r")) == NULL)		//只读模式打开源文件
			fprintf(stderr,"Can't open %s\n",argv[i]);	
		else
		{
			if(setvbuf(fs,NULL,_IOFBF,BUFSIZE) != 0)
			{
				fputs("Can't create input buffer\n",stderr);
				continue;
			}
			append(fs,fa);
			if(ferror(fs) != 0)
				fprintf(stderr,"Error in reading file %s.\n",argv[i]);
			if(ferror(fa) != 0)
				fprintf(stderr,"Error in writing file %s.\n",argv[1]);
			fclose(fs);
			printf("File %s appended.\n",argv[i]);
			puts("Next file(empty line to quit):");
		}
	}
	printf("Done appending.%d files appended.\n",files);
	rewind(fa);
	printf("%s contents:\n",argv[1]);
	while((ch = getc(fa)) != EOF)
		putchar(ch);
	puts("Done displaying.");
	fclose(fa);

	return 0;
}

void append(FILE *source,FILE *dest)
{
	size_t bytes;
	static char temp[BUFSIZE];	//分配一次

	while((bytes = fread(temp,sizeof(char),BUFSIZE,source)) > 0)
		fwrite(temp,sizeof(char),bytes,dest);
}
