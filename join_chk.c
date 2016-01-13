/*************************************************************************
    > File Name: join_chk.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月13日 星期三 13时34分33秒
 ************************************************************************/
/* join_chk.c -- 连接两个字符串，并检查第一个字符串的大小 */
#include<stdio.h>
#include<string.h>
#define SIZE 30
#define BUGSIZE 13
int main(void)
{
	char flower[SIZE];
	char addon[] = "s smell like old shoes.";
	char bug[BUGSIZE];
	int available;

	puts("What's is your favorite flower?'");
	gets(flower);
	if((strlen(addon)+strlen(flower)+1) <= SIZE)		//如果addon的长度加上flower的长度小于flower数组的长度减1，则可以将addon的字符串添加到flower数组内。
		strcat(flower,addon);
	puts(flower);
	puts("What is your favorite bug?'");
	gets(bug);
	available = BUGSIZE -strlen(bug)-1;
	strncat(bug,addon,available);				//与上一个注释的代码的功能是相同的，但是strncat可以指定复制到flower字符串的以后的字符串的长度。
	puts(bug);

	return 0;
}

