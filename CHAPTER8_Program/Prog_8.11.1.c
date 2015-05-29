#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
int count(void);
int main(void)
{
	printf("一共有%d个字符",count());	
	return 0;
}

int count(void)
{
	int c;
	int count=0;

	while((c = getchar()) != EOF)
	{	if(isspace(c)==false)	//统计所有非空白字母
			count++;
	}
	return count;
}
