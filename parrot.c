/*************************************************************************
> File Name: parrot.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com
    > Created Time: 2016年02月18日 星期四 21时25分38秒
 ************************************************************************/
/* parrot.c -- 使用fgets()和fputs()函数 */
#include<stdio.h>
#define MAXLINE 20
int main(void)
{
	char line[MAXLINE];

	while(fegts(line,MAXLINE,stdin) != NULL &&line[0] != '\n')
		fputs(line,stdout);

	return 0;
}
