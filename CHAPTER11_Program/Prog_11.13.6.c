/*************************************************************************
    > File Name: Prog_11.13.6.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年02月01日 星期一 23时38分26秒
 ************************************************************************/

#include<stdio.h>
char *strncpy1(char *,char *,int );

int main(void)
{
	char 	*str1,*str2;
	int	n;

	scanf("%s",str1);
	scanf("%s",str2);
	printf("Before : \n\tstr1 %s \n\tstr2%s",str1,str2);

	printf("input the len copy to str1:");
	scanf("%d",&n);
	strncpy1(str1,str2,n);
	printf("After:%s %s",str1);
}

char * strncpy1(char * str1,char *str2,int n)
{
	char *s;

	if(n <= 0)
		return str1;
	else
	{
		
	}
}
