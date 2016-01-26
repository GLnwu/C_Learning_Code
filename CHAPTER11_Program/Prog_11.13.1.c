/*************************************************************************
    > File Name: Prog_11.13.1.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月25日 星期一 22时56分43秒
 ************************************************************************/
/* 一个读取函数，从输入读取n个字符，包括空格符、制表符和换行符，把结果存储在一个数组中，这个数组的地址通过参数来传递 */
#include<stdio.h>
#define N 10
void input(char []);

int main(void)
{
	char 	a[N];

	input(a);
	puts(a);
	printf("%s",a);

	return 0;
}

void input(char str[])
{
	int i;

	for(i = 0;i < 2; i++)
		str[i] = getchar();
}
