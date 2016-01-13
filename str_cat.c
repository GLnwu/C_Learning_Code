/*************************************************************************
    > File Name: str_cat.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月12日 星期二 15时26分43秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>	/* 声明 strcat()函数 */
#define SIZE 80
int main(void)
{
	char flower[SIZE];
	char addon[] = "s smell like old shoes.";

	puts("What is your favorite flower?");
	gets(flower);
	strcat(flower,addon);
	puts(flower);
	puts(addon);

	return 0;
}
