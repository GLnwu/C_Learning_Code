/*************************************************************************
    > File Name: reducto.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年02月18日 星期四 17时34分09秒
 ************************************************************************/
// reducto.c -- 把您的文件压缩为原来的三分之一！
#include<stdio.h>
#include<stdlib.h>	//为了调用exit
#include<string.h>	//为strcpy()和strcat()函数提供原型
#define LEN 40
int main(int argc,char * argv[])
{
	FILE *in,*out;		//declare two FILE pointers
	int ch;
	char name[LEN];		//stroage for output filename
	int count = 0;
//check for command-line  arguments
	if(argc < 2)
	{
		fprintf(stderr,"Usage: %s filename\n",argv[0]);
		exit(1);
	}
//set up input
	if((in = fopen(argv[1],"r")) ==NULL)
	{
		fprintf(stderr,"I couldn't open the file \"%s\"\n",argv[1]);
		exit(2);
	}
//set up output
	strncpy(name,argv[1],LEN-5);	//copy filename
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
