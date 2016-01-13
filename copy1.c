/*************************************************************************
    > File Name: copy1.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月13日 星期三 23时41分49秒
 ************************************************************************/
/* copy1.c -- strcpy() 示例程序 */
#include<stdio.h>
#include<string.h>	/* 声明strcpy()函数 */
#define SIZE 40
#define LIM 5

int main(void)
{
	char qwords[LIM][SIZE];
	char temp[SIZE];
	int i = 0;

	printf("Enter %d words beginning with q: \n",LIM);
	while(i < LIM && gets(temp))
	{
		if(temp[0] != 'q')					//和if(strncmp(temp,'q',1) != 0)
			printf("%s doesn't begin with q!\n",temp);
		else
		{
			strcpy(qwords[i],temp);		//strcpy有一个问题，输入的字符串的内容，大于了temp数组的长度，导致不可知的内存区域的覆盖。
			i++;
		}
	
	}
	puts("Here are the words accepted: ");
	for(i = 0; i < LIM;i++)
		puts(qwords[i]);

	return 0;
}

