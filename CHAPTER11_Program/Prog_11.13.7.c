/*************************************************************************
    > File Name: Prog_11.13.7.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年02月07日 星期日 18时54分12秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

char * string_in(char *str1,char *str2);

int main(void)
{
	char str1[MAX],str2[MAX];

	printf("first characters:");
	scanf("%s",str1);
	printf("\nanother one:");
	scanf("%s",str2);
	printf("\n");
	while(str1 == NULL|| str2 == NULL)
	{
		fprintf(stderr,"str1 or str2 is null,please input again!\n");
		fgets(str1,MAX-1,stdin);
		fgets(str2,MAX-1,stdin);
	}

	if(string_in(str1,str2) == NULL)
		printf("str2 is not in str1.\n");
	else
		printf("str2 is in str1.\n");

	return 0;
}

char * string_in(char *str1,char *str2)
{
	int	i = 0;
	int 	lenstr2 = strlen(str2);		//字符串str2的长度
	char	*loc = NULL;


	while(str1[i] != '\0'){
		if(!strncmp(&str1[i],str2,lenstr2)){	
			loc = &str1[i];
			break;
		}
		i++;
	}/* while */

	return loc;
}
