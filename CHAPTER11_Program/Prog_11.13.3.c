/*************************************************************************
    > File Name: Prog_11.13.3.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月27日 星期三 00时31分47秒
 ************************************************************************/

#include<stdio.h>
#define MAX 100
#include<ctype.h>
void scan(char str[],int max);

int main(void)
{
	char 	str[MAX];
	
	printf("Please input the word:");
	scanf("%s",str);
	scan(str,MAX);
	printf("The first word is %s",str);

	return 0;
}

void scan(char str[],int max)
{
	int 	i = 0,j=0;

	while(!isalpha(str[i]))
		i++;			//找到第一个字母
	while(isalpha(str[++i]))	//判断这个字母之后有多少个字母
		j++;
	str[i+j] = '\0';		//将这个字符以后的内容都截断
}
