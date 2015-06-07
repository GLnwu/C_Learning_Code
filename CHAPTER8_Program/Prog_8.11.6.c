#include<stdio.h>
#include<ctype.h>
char get_first(void);
int main(void)
{
	printf("%c\n",get_first());
	return 0;
}
	
char get_first(void)
/* 获取第一个非空白字符，忽略其他 */
{
	int ch;

	while(isblank(ch = getchar()))
		continue;
	while(getchar()!='\n')
		continue;
	return ch;
}
