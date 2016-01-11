/*************************************************************************
    > File Name: put2.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月12日 星期二 00时32分32秒
 ************************************************************************/

#include<stdio.h>
int put2(const char * string)
{
	int count = 0;
	while(*string)
	{
		putchar(*string++);
		count++;
	}
	putchar('\n');

	return (count);
}
