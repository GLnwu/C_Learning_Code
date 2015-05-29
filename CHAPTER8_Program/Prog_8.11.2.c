#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
void process(char c);		//打印特殊字符

int main(void)
{
	int c;
	int i=0;	//计算打印字符一行打印了几个

	while((c = getchar()) != EOF)
	{	
		if(isgraph(c)==true)
		{
			printf("%c=%d ",c,c);		
			i++;
		}
		else
		{	
			if(i != 0)
				printf("\n");
			process(c);
			printf("\n");
			i = 0;
		}
		
		if(i%9 == 0)
			printf("\n");
	}
	printf("Bye.\n");
	return 0;
}

void process(char c)
{
	switch(c)
	{
		case 27:printf("%s=%d ","^[,esc",c);
			break;
		case 28:printf("%s=%d ","^\\",c);
			break;
		case 29:printf("%s=%d ","^]",c);
			break;
		case 30:printf("%s=%d ","^^",c);
			break;
		case 31:printf("%s=%d ","^_",c);
			break;
		case 32:printf("%s=%d ","space",c);
			break;
		case 127:printf("%s=%d ","del,rubout",c);
		default:break;
	}
	if(c >=0 &&c <= 26)
		printf("%c%c=%d ",'^',c+64,c);
}
