/*************************************************************************
    > File Name: nogo.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月13日 星期三 14时24分16秒
 ************************************************************************/
/* nogo.c -- 这个程序能满足要求吗？ */
#include<stdio.h>
#define ANSWER "Grant"
int main(void)
{
	char try[40];

	puts("Who is buried in Grant's tomb?");
	gets(try);
	while(try != ANSWER)
	{
		puts("No,that's wrong.Try again.");
		gets(try);
	}
	puts("That's right!");

	return 0;
}
