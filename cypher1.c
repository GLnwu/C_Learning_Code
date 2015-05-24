/* cypher1.c -- 改变输入，只保留其中的空格 */
#include <stdio.h>
#define SPACE ' '		/* SPACE相当于 "引号－空格－引号" */
int main(void)
{
	char ch;

	ch = getchar();			/* 读入一个字符 */
	while(ch != '\n')		/* 当一行未结束时 */
	{
		if(ch == SPACE)		/* 空格不变*/
			putchar(ch);
		else
			putchar(ch+1);	/* 改变其他字符 */
		ch = getchar();		/* 获取下一个字符 */
	}
	putchar(ch);
	return 0;
}
