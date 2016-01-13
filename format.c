/*************************************************************************
    > File Name: format.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月14日 星期四 00时51分56秒
 ************************************************************************/
/* format.c -- 格式化一个字符串 */
#include<stdio.h>
#define MAX 20

int main(void)
{
	char first[MAX];
	char last[MAX];
	char formal[2*MAX + 10];
	double prize;

	puts("Enter your first name: ");
	gets(first);
	puts("Enter your last name:");
	gets(last);
	puts("Enter your prize money: ");
	scanf("%lf",&prize);
	sprintf(formal,"%s,%-19s:$ %6.2f\n",last,first,prize);
	puts(formal);

	return 0;
}
