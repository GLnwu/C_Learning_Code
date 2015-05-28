/* echo_eof.c -- 重复输入，直到文件的结尾 */
#include<stdio.h>
int main(void)
{
	int ch;	//为什么说定义为int比char更通用？

	while((ch = getchar())!=EOF)
		putchar(ch);
	return 0;
}
