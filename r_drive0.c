/*************************************************************************
    > File Name: r_drive0.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年02月12日 星期五 23时29分39秒
 ************************************************************************/
/* r_drive0.c -- 测试rand0()函数 */
/* 与rand0.c一起编译		*/
#include<stdio.h>
extern int rand0(void);

int main(void)
{
	int count;

	for(count = 0;count < 5;count ++)
		printf("%hd\n",rand0());

	return 0;
}
