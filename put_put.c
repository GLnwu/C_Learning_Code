/*************************************************************************
    > File Name: put_put.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月12日 星期二 00时35分50秒
 ************************************************************************/

#include<stdio.h>
void put1(const char *);
int  put2(const char *);

int main(void)
{
	put1("If I'd as much money");
	put1(" as I could spend, ");
	printf("I conut %d characters. \n",put2("I never would cry old chairs to mend."));

	return 0;
}

void put1(const char * string)
{
	while(*string)		/* 等同于*string != '\0' */
		putchar(*string++);

}
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
