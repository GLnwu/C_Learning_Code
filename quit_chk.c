/*************************************************************************
    > File Name: quit_chk.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月13日 星期三 16时41分19秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define SIZE 81
#define LIM 100
#define  STOP "quit"
int main(void)
{
	char input[LIM][SIZE];
	int ct = 0;

	printf("Enter up tp %d lines (type quit to quit):\n",LIM);
	while(ct < LIM && gets(input[ct]) != NULL&& strcmp(input[ct],STOP) != 0)
		ct++;
	printf("%d strings entered",ct);

	return 0;
}
