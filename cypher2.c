//cypher2.c -- 改变输出,只保留非字母字符 */
#include<stdio.h>
#include<ctype.h>	//为isapha()提供原型
int main(void)
{
	char ch;

	while((ch = getchar()) != '\n')
	{
		if(isalpha(ch))		//如果是字母
			putchar(ch+1);	//否则改变它
		else
			putchar(ch);
	}
	putchar(ch);			//打印换行符
	return 0;
}
