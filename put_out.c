/*************************************************************************
    > File Name: put_out.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月11日 星期一 23时03分40秒
 ************************************************************************/

#include<stdio.h>
#define DEF "I am a #defined string."
int main(void)
{
	char str1[80] = "An array was initiallized to me.";
	const char * str2 = "A pointer was initialized to me.";

	puts("I'm an argument to puts()");
	puts(DEF);
	puts(str1);
	puts(str2);
	puts(&str1[5]);
	puts(str2+4);

	return 0;
}
