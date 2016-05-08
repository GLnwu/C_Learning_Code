#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
char * s_gets(char * st,int n);

int main(int argc,char * argv[])
{
	char 	file_name[MAX][MAX];
	int 	i;
	int 	file_cnt,ch_cnt = 0;	//文件个数计数，字符个数计数
	FILE  	* fp;
	char   	ch[MAX];
	char 	ch_arg = argv[1][0];
		
	if(argc < 2)
	{
		fprintf(stderr,"No character is given!\n");
		exit(EXIT_FAILURE);
	}
	if(argc == 2)
	{
		i = 0;
		puts("Enter a file name:\n");
		while(  s_gets(file_name[i],MAX) != NULL && i < MAX)
		{	
			i++;	
			printf("press Enter to quit!\n");
		}
		file_cnt = i;		//记录读入的文件名的个数
	}
	if(argc > 2)
	{
		for(i = 2; i < argc; i++)
			strncpy(file_name[i-2],argv[i],MAX);
		file_cnt = i - 2;
	}
	for(i = 0;i < file_cnt; i++)
	{
		fp = fopen(file_name[i],"r");
		if(fp == NULL)
		{
			fprintf(stderr,"Can't open %s\n",file_name[i]);
			file_cnt--;
			continue;
		}
		while(fgets(ch,MAX,fp) != NULL)
		{
			if(strchr(ch,ch_arg))
				ch_cnt++;	
		}
	}

	if(file_cnt != 0)
	{
		printf("There are totally %d file exist.\n",file_cnt);
		printf("And %d %c in these files.\n",ch_cnt,ch_arg);
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
			while(getchar() != '\n')	//有可能在stdin stream里的字符大于n-1，
							//因此导致fgets函数可能读取n-1个以后，还有剩下的字符留在stdin,
				continue;		//因此用getchar函数，将stdin中缓冲的字符都消耗掉
	}
	return ret_val;
	/* fegts函数以后的代码，用来去掉st指针指向的字符串中的换行符 */
}
