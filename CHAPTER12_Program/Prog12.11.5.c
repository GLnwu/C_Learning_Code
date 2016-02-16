/*************************************************************************
    > File Name: Prog12.11.5.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年02月16日 星期二 17时31分12秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>	//为rand()函数提供类库
#include "Prog12.11.5.h"


int main(void)
{
	extern int numbers;
	int array[numbers];
	int i;

	srand((unsigned int )time(0));	/* 随机化种子 */
	for(i = 0;i < numbers;i++)
		array[i] = randoutput();
	sort(array);
	for(i = 0;i < numbers;i++)
		printf("%d ",array[i]);	
	printf("\n");

	return 0;
}

