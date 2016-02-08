/*************************************************************************
    > File Name: Prog_11.13.6.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年02月01日 星期一 23时38分26秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
void strncpy1(char *,char *,int );

int main(void)
{
	char 	* str1 = (char *)malloc(100),*str2 =(char *)malloc(MAX);
	int	n;

	printf("input str2:");
	scanf("%s",str2);
	printf("input the number:");
	scanf("%d",&n);
	printf("Before : \n\tstr1 :\'0\' \n\tstr2 :%s",str2);

	strncpy1(str1,str2,n);
	printf("\n");
	printf("After : \n\tstr1 :%s \n\tstr2 :%s",str1,str2);

	return 0;
}

void strncpy1(char *str1,char *str2,int n)
{
	int i;
	int lenstr2 = 0;

	while(str2[lenstr2] != '\0')
		lenstr2++;

	if(n <= 0)
		;
	else if(lenstr2 < n)
	{
		for(i = 0;i < lenstr2;i++)
			str1[i] = str2[i];
		for(;i < n;i++)
			str1[i] = '\0';
	}
	else
	{
		for(i = 0;i < n;i++)
			str1[i] = str2[i];
	}
}
