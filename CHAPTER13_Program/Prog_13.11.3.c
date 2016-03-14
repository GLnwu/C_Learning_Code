/*************************************************************************
    > File Name: Prog_13.11.2.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sun 13 Mar 2016 06:45:36 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define SLEN 81

char * s_gets(char *st,int n);

int main(void)
{
	int  i = 0;
	char src[SLEN];
	char cpy[SLEN];
	FILE *fp_src;
	FILE *fp_copy;
	char temp[BUFSIZ];	//暂时存储由源文件读取的内容
	size_t bytes;
	

	puts("Enter the name of source file: ");
	s_gets(src,SLEN);
	puts("Enter the name of destination");
	s_gets(cpy,SLEN);
	while(cpy[i] != '\0')
	{
		if(islower(cpy[i]))
			cpy[i] = toupper(cpy[i]);
		i++;
	}

	if((fp_src = fopen(src,"rb")) == NULL)
	{
		fprintf(stderr,"Can't open %s\n",src);
		exit(EXIT_FAILURE);
	}
	if((fp_copy = fopen(cpy,"wxb")) == NULL)
	{
		fprintf(stderr,"Can't open %s\n",cpy);
		exit(EXIT_FAILURE);
	}
	while((bytes = fread(temp,sizeof(char),BUFSIZ,fp_src)) > 0)
		fwrite(temp,sizeof(char),bytes,fp_copy);
	printf("Done copying.%s is copied as %s",src,cpy);
	if(fclose(fp_src) != 0)	
	{
		fprintf(stderr,"Error in closing %s",src);
		exit(EXIT_FAILURE);
	}
	if(fclose(fp_copy) != 0)	
	{
		fprintf(stderr,"Error in closing %s",cpy);
		exit(EXIT_FAILURE);
	}

	return 0;
}

char * s_gets(char * st,int n)
{
	char * ret_val;			//将要返回的字符指针
	char * find;

	ret_val = fgets(st,n,stdin);	//fgets return string pointer on success
	if(ret_val)			//如果非空，则证明，从标准输入中没有获得字符串，反之则成功
	{
		find = strchr(st,'\n');
		if(find)		//找到就返回查找到俄指针，否则返回空指针
			*find = '\0';	//在换行符的位置换上一个空字符'\0'
		else
			while(getchar() != '\n')	//有可能在stdin stream里的字符大于n-1，因此导致fgets函数可能读取n-1个以后，还有剩下的字符留在stdin,
				continue;		//因此用getchar函数，将stdin中缓冲的字符都消耗掉
	}
	return ret_val;
	/* fegts函数以后的代码，用来去掉st指针指向的字符串中的换行符 */
}
