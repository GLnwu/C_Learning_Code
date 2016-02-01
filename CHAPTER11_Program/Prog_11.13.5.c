	/*************************************************************************
	    > File Name: Prog_11.13.5.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月31日 星期日 20时41分19秒
 ************************************************************************/

#include<stdio.h>
#define MAX 100
int	is_within(char ,char *);

int main(void)
{
	char	str1,str2[MAX];
	
	puts("str1(single character):");
	scanf("%c",&str1);
	puts("str2:");
	scanf("%s",str2);
	if(!is_within(str1,str2))
		printf("not right!.\n");
	else
		printf("congratulation!\n");

	return 0;
}

int	is_within(char str1,char *str2)
/* 判断字符str1是否在字符串指针指向的字符串内 */
{
	int i = 0;
	int findout = 0;

	while(str2[i] != '\0')
	{
		if(str2[i] == str1)
			findout = 1;
		i++;
	}

	return findout;
}
