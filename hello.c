/*************************************************************************
    > File Name: hello.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月24日 星期日 17时28分36秒
 ************************************************************************/
/* hello.c -- 把命令行参数转换为数字 */
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	int i,times;

	if(argc < 2||(times = atoi(argv[1])) < 2)
		printf("Usage:%s positive-number\n",argv[0]);
	else
		for(i = 0;i < times;i++)
			puts("Hello,good looking!");

	return 0;
}
