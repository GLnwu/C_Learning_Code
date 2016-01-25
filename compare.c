/*************************************************************************
    > File Name: compare.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月25日 星期一 22时07分30秒
 ************************************************************************/
/* compare.c -- 这个程序可以满足要求 */
/* 改进版，使用ctype.h头文件函数，使得不论输入的是大写还是消息都算输入正确 */
#include<stdio.h>
#include<string.h>	/* 声明strcmp()函数 */
#include<ctype.h>
#define	ANSWER	"grant"
#define MAX 40
void ToLower(char * str);

int main(void)
{
	char	try[MAX];

	puts("Who is buried in Grant's tomb?");
	fgets(try,MAX,stdin);
	ToLower(try);
	while(!strstr(try,ANSWER)){
		puts("That's wrong.Try again.");
		fgets(try,MAX,stdin);
	}
	puts("That's right!'");

	return 0;
}

void ToLower(char *str)
{
	while(*str)
	{
		*str = tolower(*str);
		str++;
	}
}
