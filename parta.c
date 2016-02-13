/*************************************************************************
    > File Name: parta.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年02月10日 星期三 23时58分36秒
 ************************************************************************/
// parta.c --- 各种存储类
#include<stdio.h>
void 	report_count();
void 	accumulate(int k);
int 	count;			//文件作用域
int main(void)
{
	int 		value;	//自动变量
	register int	i;	//寄存器变量

	printf("Enter a positive integer (0 to quit):");
	while(scanf("%d",&value) == 1 && value > 0)
	{
		++count;
		for(i = value;i >= 0; i--)
			accumulate(i);
		printf("Enter a positive integer(0 to quit):");
	}
	report_count();
	return 0;
}
void report_count()
{
	printf("Loop executed %d times\n",count);
}
