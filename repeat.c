/*************************************************************************
    > File Name: repeat.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月24日 星期日 00时21分25秒
 ************************************************************************/
/* repeat.c -- 带有参数的main() 函数 */
#include<stdio.h>
int main(int argc,char * argv[])
{
	int count;

	printf("The command line has %d arguments:\n",argc-1);
	for(count = 0;count < argc;count++)
		printf("%d:%s\n",count,argv[count]);
	printf("\n");

	return 0;
}

