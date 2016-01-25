/*************************************************************************
    > File Name: strcnvt.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月24日 星期日 22时00分43秒
 ************************************************************************/
/* strcnvt.c -- 尝试使用strtol()函数 */
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char number[30];
	char * end;
	long value;

	puts("Enter anumber (empty line to quit):");
	while(gets(number) && number[0] != '\0')
	{
		value = strtol(number,&end,10);
		printf("value: %ld,stopped at %s (%d) \n",value,end,*end);
		value = strtol(number,&end,16);		/* 基于16 */
		printf("value :%ld,stopped at %s (%d) \n",value,end,*end);
		puts("Next number:");
	}
	puts("Bye!\n");

	return 0;
}
