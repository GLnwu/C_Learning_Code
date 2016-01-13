/*************************************************************************
    > File Name: 11.13test.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月12日 星期二 14时39分18秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>	/* 该头文件中包含的字符号窜函数的原型 */
void fit(char *,unsigned int);

int main(void)
{
	char mesg[] = "Hold on to your hats,hacker.";

	puts(mesg);
	fit(mesg,7);
	puts(mesg);
	puts("Let's look at some more of the string. ");
	puts(mesg + 8);

	return 0;
}

void fit(char *string,unsigned int size)
{
	if(strlen(string) > size)
		*(string + size) = '\0';
}
