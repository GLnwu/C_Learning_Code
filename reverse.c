/*************************************************************************
    > File Name: reverse.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年02月19日 星期五 23时44分11秒
 ************************************************************************/
/* reverse.c -- 反序显示一个文件 */
#include<stdio.h>
#include<stdlib.h>
#define CNTL_Z '\032'	/* DOS文本文件中的文件结尾标记 */
#define SLEN 50
int main(void)
{
	char file[SLEN];
	char ch;
	FILE *fp;
	long count ,last;

	puts("Enter the name of the file to be processed:");
	gets(file);
	if((fp = fopen(file,"rb")) == NULL)
	{				/* 只读和二进制模式 */
		printf("reverse can't open %s\n",file);
		exit(1);
	}
	fseek(fp,0L,SEEK_END);		/* 定位到文件结尾处 */
	last = ftell(fp);		/* 二进制模式下，计算从文件开始到文件当前位置的字节数 */
	for(count = 1L;count <= last;count++)
	{
		fseek(fp,-count,SEEK_END);	/* 改变文件位置指示器内容 */
		ch = getc(fp);
	/* 针对DOS，在UNXI下也可工作 */
		if(ch != CNTL_Z && ch != '\r')
				putchar(ch);
	/* 针对Macintosh	     */
	/* if(ch == '\r')
	 * 	putchar('\n');
	 * else
	 * 	putchar(ch);		*/
	}
	putchar('\n');
	fclose(fp);

	return 0;
}

