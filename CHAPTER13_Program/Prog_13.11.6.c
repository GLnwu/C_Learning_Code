/*************************************************************************
    > File Name: reducto.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年02月18日 星期四 17时34分09秒
 ************************************************************************/
// reducto.c -- 把您的文件压缩为原来的三分之一！
// reducto.c 的变化版本，将参数指定变为提示用户键入所需的信息
#include<stdio.h>
#include<stdlib.h>	//为了调用exit
#include<string.h>	//为strcpy()和strcat()函数提供原型
#define LEN 40
char * s_gets(char * st,int n);

int main(int argc,char * argv[])
{
	FILE *in,*out;		//declare two FILE pointers
	int ch;
	char name[LEN];		//stroage for output filename
	int count = 0;
	char str[LEN];

	puts("Enter a filename:");
	s_gets(str,LEN);
//set up input
	if((in = fopen(str,"r")) ==NULL)
	{
		fprintf(stderr,"I couldn't open the file \"%s\"\n",str);
		exit(EXIT_FAILURE);
	}

	strncpy(name,str,LEN-5);	//copy filename
	name[LEN -5] = '\0';
	strcat(name,".red");		//append .red 
	if((out = fopen(name,"w")) == NULL)
	{		//open file for writing
		fprintf(stderr,"Can't create output file.\n");
		exit(3);
	}
//copt data
	while((ch = getc(in)) != EOF)
		if(count++ % 3 == 0)
			putc(ch,out);	//print every 3rd char
//clean up
	if(fclose(in) != 0 || fclose(out) != 0)
		fprintf(stderr,"Error in closing files\n");
	
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
			while(getchar() != '\n')	//有可能在stdin stream里的字符大于n-1，
				continue;		//因此导致fgets函数可能读取n-1个以后，还有剩下的字符留在stdin,
							//因此用getchar函数，将stdin中缓冲的字符都消耗掉
	}
	return ret_val;
	/* fegts函数以后的代码，用来去掉st指针指向的字符串中的换行符 */
}
