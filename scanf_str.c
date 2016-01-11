/*************************************************************************
    > File Name: scanf_str.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月11日 星期一 22时48分55秒
 ************************************************************************/

#include<stdio.h>
int main(void)
{
	char name1[11],name2[11];
	int count;

	printf("Please enter 2 names.\n");
	count = scanf("%5s %10s",name1,name2);
	printf("I read the %d names %s and %s.\n",count,name1,name2);

	return 0;
}
