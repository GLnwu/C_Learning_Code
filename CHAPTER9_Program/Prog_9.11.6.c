#include<stdio.h>
#include<ctype.h>
void Process(char );
int Judge(char);

int main(void)
{
	char c;
	int d;

	while((c = getchar()) != EOF)
	{
		d = Judge(c);
		if(d != -1)
			printf("%c =  %d  ",c,d);
	}

	return 0;
}

int Judge(char c)
/* 判断一个给定的字符是否为字母，是则返回 */
{	
	int d;

	if(isalpha(c))
		d = tolower(c)-96;
	else
		d = -1;

	return d;
}
