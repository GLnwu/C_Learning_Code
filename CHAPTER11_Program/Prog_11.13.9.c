/*************************************************************************
    > File Name: Prog_11.13.9.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年02月09日 星期二 23时55分41秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void del(char *);

int main(void)
{
	char *str;

	str = (char *)malloc(MAX);
	fgets(str,MAX,stdin);

	printf("Before: %s\n",str);
	del(str);
	printf("After: %s\n",str);

	return 0;
}

void del(char * str)
/* 删除字符串str中的空格 */
{
	int	i = 0,j = 0;

	while( '\0' != str[i]){
		str[i] = str[j];
		j++;
		if(' ' == str[i])		//每当i指向的字符为空格的时候，i停止一次自增。
			continue;
		i++;
	}
}

