#include<stdio.h>
#include<string.h>
int main(void)
{
	char name[20];

	printf("Please input your name[20]:\n");
	scanf("%s",name);
	printf("\"%s\"\n",name);
	printf("\"%-s\"\n",name);
	printf("%*s\n",(int)strlen(name)+3,name);	//int将strlen返回值的size_t转换为int类型消除由于类型不对应的警报

	return 0;
}

	
