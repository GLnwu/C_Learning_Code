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
char * s_gets(char * st,int n);

int main(void)
{
	FILE *fa,*fs;		//fa指向追加的目的文件，fs指向源文件
	int files = 0;		//被追加的个数
	char file_app[SLEN];	//被追加文件的名称
	char file_src[SLEN];	//源文件的名称

	puts("Enter name of destination file:");
	s_gets(file_app,SLEN);
	if((fa = fopen(file_app,"a+")) == NULL)
	{
		fprintf(stderr,"Can't open %s\n",file_app);
		exit(2);
	}
	if(setvbuf(fa,NULL,_IOFBF,BUFSIZE) != 0)
	{
		fputs("Can't create output buffer\n",stderr);
		exit(3);
	}
	puts("Enter name of first source file(empty line to quit):");
	while(s_gets(file_src,SLEN) &&file_src[0] != '\0')
	{
		if(strcmp(file_src,file_app) == 0)
			fputs("Can't append file to itself\n",stderr);	//追加文件和源文件不能相同
		else if((fs = fopen(file_src,"r")) == NULL)		//只读模式打开源文件
			fprintf(stderr,"Can't open %s\n",file_src);	
		else
		{
			if(setvbuf(fs,NULL,_IOFBF,BUFSIZE) != 0)
			{
				fputs("Can't create input buffer\n",stderr);
				continue;
			}
			append(fs,fa);
			if(ferror(fs) != 0)
				fprintf(stderr,"Error in reading file %s.\n",file_src);
			if(ferror(fa) != 0)
				fprintf(stderr,"Error in writing file %s.\n",file_app);
			fclose(fs);
			files++;
			printf("File %s appended.\n",file_src);
			puts("Next file(empty line to quit):");
		}
	}
	printf("Done appending.%d files appended.\n",files);
	rewind(fa);
	printf("%s contents:\n",file_app);
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
char * s_gets(char * st,int n)
{
	char * ret_val;			//将要返回的字符指针
	char * find;

	ret_val = fgets(st,n,stdin);	//fgets return string pointer on success
	if(ret_val)			//如果非空，则证明，从标准输入中没有获得字符串，反之则成功
	{
		find = strchr(st,'\n');
		if(find)		//找到就返回查找到俄指针，否则返回空指针
			*find = '\0';	//在换行符的位置换上一个空字符'\0'
		else
			while(getchar() != '\n')	//有可能在stdin stream里的字符大于n-1，因此导致fgets函数可能读取n-1个以后，还有剩下的字符留在stdin,
				continue;		//因此用getchar函数，将stdin中缓冲的字符都消耗掉
	}
	return ret_val;
	/* fegts函数以后的代码，用来去掉st指针指向的字符串中的换行符 */
}
