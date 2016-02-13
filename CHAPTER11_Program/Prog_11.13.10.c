/*************************************************************************
    > File Name: Prog_11.13.10.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年02月10日 星期三 00时55分42秒
 ************************************************************************/

#include<stdio.h>

void menu(void);			/* 菜单显示函数 */

void print(const char * []);		/* 输出初始字符串列表 */
void print_asc(const char * []);	/* 按ASCII顺序输出字符串 */
void print_len(const char * []);	/* 按长度递增顺序输出字符串 */
void print_firword(const char *[]);	/* 按字符串中第一个单词的长度输出字符串 */

int main(void)
{
	char *str[10];
	menu();
	return 0;
}

void menu(void)
{
	printf("\n\n\n\n\n\n");
	printf("\t\t\t\t\t|------------------------------------ Menu ------------------------------------|\n");
	printf("\t\t\t\t\t|           		   1、输出初始字符串列表                               |\n");
	printf("\t\t\t\t\t|           		   2、按ASCII顺序输出字符串列表                        |\n");
	printf("\t\t\t\t\t|           		   3、按长度递增顺序输出字符串                         |\n");
	printf("\t\t\t\t\t|           		   4、按字符串中第一个单词的长度输出字符串             |\n");
	printf("\t\t\t\t\t|           		   5、退出			                       |\n");
	printf("\t\t\t\t\t|------------------------------------------------------------------------------|\n");
	printf("input:")
	printf("\n\n\n\n\n\n");
}

void print(char * str[])
{
	while(str[i] != NULL);
		printf("%d : %s",i+1,str[i]);
}
