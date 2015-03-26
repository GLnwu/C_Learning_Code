#include<stdio.h>
#define MAXSIZE	50		//规定最大长度的人名的长度

int main(void)
{
	char c[50];
	int i=0;		//声明i时，就初始化i则可以使i变为全局变量，对后面中间两次输出有帮助
		
	fgets(c,MAXSIZE,stdin);	
//	fprintf(stdout,"%s",c);
	printf("%s",c);		//输出名和姓	
	for(;c[i]!=' ';i++)	//输出空格之前的名
		printf("%c",c[i]);
	printf("\n");	
	for(;c[i]!='\0';i++)	//输出空格之后的姓
	{
		if(c[i]==' ')
			continue;
		printf("%c",c[i]);
	}
	printf("%s",c);		//输出名和姓

	return 0;
}
	
