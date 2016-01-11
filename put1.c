/*************************************************************************
    > File Name: put1.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月12日 星期二 00时11分12秒
 ************************************************************************/

/* put1.c -- 不填家换行符打印一个字符串 */
#include<stdio.h>
void put1(const char * string)	/* 不会改变这个字符串 */
{
	while(*string != '\0')
		putchar(*string++);
}
