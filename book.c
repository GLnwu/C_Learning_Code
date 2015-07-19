/*************************************************************************
    > File Name: book.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2015年07月19日 星期日 16时04分15秒
 ************************************************************************/

/* book.c -- 仅包含一本书 */
#include<stdio.h>
#define MAXTITL 41	/*  书名的最大长度+1 */
#define MAXAUTL	31	/* 作者名的最大长度+1 */
struct book{		/* 结构模板，标记为book */
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};	/* 结构模板结束 */
int main(void)
{
	struct book library;	/* 把librarry声明为book类型的变量 */
	printf("Please enter the book title.\n");
	gets(library.title);	/* 访问title部分 */
	printf("Now enter the author:\n");
	gets(library.author);
	printf("Now enter the value.\n");
	scanf("%f",&library.value);
	printf("%s by %s: $%.2f\n",library.title,library.author,library.value);
	printf("%s:\"%s\"($%.2f)\n",library.author,library.title,library.value);
	printf("Done.\n");

	return 0;
}


