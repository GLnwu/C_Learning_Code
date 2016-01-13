/*************************************************************************
    > File Name: starsrch.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月13日 星期三 18时24分04秒
 ************************************************************************/
/* starsrch.c -- 使用strncmp()函数 */
#include<stdio.h>
#include<string.h>
#define LISTSIZE 5
int main(void)
{
	char * list[LISTSIZE] ={
		"astronomy","astounding","astrophysics","ostracize",
		"asterism"};
	int count = 0;
	int i;

	for(i = 0;i < LISTSIZE; i++)
		if(strncmp(list[i],"astro",5) == 0)
		{
			printf("Found; %s\n",list[i]);
			count++;
		}
	printf("The list contained %d words beginning"" with astro.\n",count);

	return 0;
}
