/*************************************************************************
    > File Name: Prog_11.13.8.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年02月09日 星期二 01时22分16秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
void reverse(char *);

int main(void)
{
	char *str;

	str = (char *)malloc(MAX);

	while(scanf("%s",str)){
		printf("Before: %s\n",str);
		reverse(str);
		printf("After: %s\n",str);
	}

	return 0;
}

void reverse(char * str)
{
	int len = strlen(str);
	int i,j;
	char temp;

	for(i = 0,j = len -1;i < len && j >= 0 && i < j;i++,j--){
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
	}
}
