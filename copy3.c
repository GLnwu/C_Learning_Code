/*************************************************************************
    > File Name: copy3.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月14日 星期四 00时04分16秒
 ************************************************************************/
/* copy3.c -- strncpy()示例程序 */
#include<stdio.h>
#include<string.h>	/* 声明strncpy()函数 */
#define SIZE 40
#define TARGSIZE 7
#define LIM 5
int main(void)
{
	char qwords[LIM][TARGSIZE];
	char temp[SIZE];
	int i = 0;

	printf("Enter %d words begining with q: \n",LIM);
	while(i < LIM && gets(temp))
	{
		if(temp[0] != 'q')
			printf("%s doesn't begin with q!\n",temp);
		else
		{
			strncpy(qwords[i],temp,TARGSIZE-1);
			qwords[i][TARGSIZE-1] = '\0';
			i++;
		}
	}
	puts("Here are the words accepted: ");
	for(i = 0; i < LIM;i++)
		puts(qwords[i]);
	return 0;
}

