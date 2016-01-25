/*************************************************************************
    > File Name: mod_str.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月24日 星期日 00时04分01秒
 ************************************************************************/
/* mod_str.c -- 修改一个字符串 */
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define LIMIT 80
void ToUpper(char *);
int PunctCount(const char *);

int main(void)
{
	char line[LIMIT];

	puts("Please enter a line:");
	gets(line);
	ToUpper(line);
	printf("That line has %d punctuation characters.\n",PunctCount(line));

	return 0;
}

void ToUpper(char * str)
{
	while(*str)
	{
		*str = toupper(*str);
		str++;
	}
}

int PunctCount(const char *str)
{
	int ct = 0;
	while(*str)
	{
		if(ispunct(*str))
			ct++;
		str++;
	}
	return ct;
}
