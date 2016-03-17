/*************************************************************************
    > File Name: Prog_13.11.7.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Thu 17 Mar 2016 11:03:35 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 81
#define MAXLINE 100
char * s_gets(char * st,int n);

int main(int argc,char *argv[])
{
	FILE *fpa,*fpb;
	char file_a[LEN],file_b[LEN];
	char str1[MAXLINE+1],str2[MAXLINE];

	if(argc == 1)
	{
		printf("Please input the first file name:");
		s_gets(file_a,LEN);
		printf("Please input the second file name:");
		s_gets(file_b,LEN);
		
	}
	else if(argc == 3)
	{
		strncpy(file_a,argv[1],LEN - 1);
		strncpy(file_b,argv[2],LEN - 1);
	}

	if((fpa  = fopen(file_a,"r") )== NULL )
	{
		fprintf(stderr,"Error in open %s\n",file_a);
		exit(EXIT_FAILURE);			
	}
	if((fpb  = fopen(file_b,"r") )== NULL )
	{
		fprintf(stderr,"Error in open %s\n",file_b);
		exit(EXIT_FAILURE);			
	}

	if(argc != 1 && argc != 3)
	{
		fprintf(stderr,"Usage :program filea fileb");
		exit(EXIT_FAILURE);
	}
	while(   fgets(str1,MAXLINE,fpa) != NULL && fgets(str2,MAXLINE,fpb) != NULL)	//交替输出文件的每行，直到行数较多的打印完
	{
			fputs(str1,stdout);
			fputs(str2,stdout);
	}		
	while(fgets(str1,MAXLINE,fpa) != NULL)
		fputs(str1,stdout);
	while(fgets(str2,MAXLINE,fpa) != NULL)
		fputs(str2,stdout);	

	if(ferror(fpa) != 0)		//检查是否输出文件内容时出错
	{
		fprintf(stderr,"Error in reading file %s.\n",file_a);
		exit(EXIT_FAILURE);
	}
	if(ferror(fpb) != 0)
	{
		fprintf(stderr,"Error in reading file %s.\n",file_b);
		exit(EXIT_FAILURE);
	}

	return 0;
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
