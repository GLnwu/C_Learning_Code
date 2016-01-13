/*************************************************************************
    > File Name: copy2.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月13日 星期三 23时55分16秒
 ************************************************************************/
/* copy2.c -- strcpy()示例程序 */
#include<stdio.h>
#include<string.h>	/* 声明 strcpy() 函数 */
#define WORDS "beast"
#define SIZE 40

int main(void)
{
	char *orig = WORDS;
	char copy[SIZE] = "Be the best that you can be.";
	char * ps;

	puts(orig);
	puts(copy);
	ps = strcpy(copy + 7,orig);
	puts(copy);
	puts(ps);

	return 0;
}

