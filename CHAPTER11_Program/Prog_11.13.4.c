/*************************************************************************
    > File Name: Prog_11.13.4.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月27日 星期三 01时08分21秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
char * search(char * str1,char *str2,int len1,int len2);

int main(int argc,char *argv[])
{
	int len1,len2;

	if(argc != 3){
		fprintf(stderr,"Usage:filename char1 char2\n");
		return 1;
	}
	len1 = strlen(argv[1]);		//计算第一个参数的字符串的长度
	len2 = strlen(argv[2]);		//计算第二个参数的字符串的长度
	if(search(argv[1],argv[2],len1,len2))
		puts("str2 is in str1");

	return 0;	
}

char * search(char * str1,char * str2,int len1,int len2)		//max为字符串str1的大小
{
	char	*loca = NULL;			//local标记str2在str1中，第一次发现的位置
	int	i = 0;

	while(i < len1)
	{
		if(strncmp(&str1[i],str2,len2) != 0){
			loca = &str1[i];
			return loca;
		}
		i++;
	}
	return loca;
}
