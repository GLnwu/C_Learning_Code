/*************************************************************************
    > File Name: count.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年02月18日 星期四 16时52分18秒
 ************************************************************************/
/* count.c -- 使用标准 I/O */
#include<stdio.h>
#define MAX 225
#include<stdlib.h>	//ANSI C的exit()原型
int main(int argc,char * argv[])
{
	int ch;		//读取时存储每个字符的位置
	char file[MAX];
	FILE *fp;	//文件指针
	long count = 0;

//	if(argc != 2)
//	{
//		printf("Usage:%s filename\n",argv[0]);
//		exit(EXIT_FAILURE);
//	}
//	if((fp = fopen(argv[1],"r")) == NULL)
//	{
//		printf("Can't open %s\n",argv[1]);
//		exit(EXIT_FAILURE);
//	}

	puts("Please Enter a file name:");
	scanf("%s",file);
	if((fp = fopen(file,"r")) == NULL)
	{
		fprintf(stderr,"Can't open %s\n",file);
		exit(EXIT_FAILURE);
	}	
	while((ch = getc(fp)) != EOF)
	{
		putc(ch,stdout);	//相当于putchar(ch)
		count++;
	}
	if(fclose(fp) != 0)
	{
		printf("Error in closing file %s\n",argv[1]);
		exit(EXIT_FAILURE);
	}
	printf("File %s has %ld chararcters\n",argv[1],count);

	return 0;
}
