/*************************************************************************
    > File Name: Prog12.11.2.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年02月16日 星期二 17时26分59秒
 ************************************************************************/

#include<stdio.h>
static int count = 0;
void test(void);

int main(void)
{
	int i ;

	for(i=0;i < 6;i++)
		test();
	printf("%d\n",count);

	return 0;
}

void test(void)
{
	extern int count;

	++count;
}
