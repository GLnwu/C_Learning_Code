/* menuette.c -- 菜单技术 */
#include<stdio.h>
char 	get_choice	(void);
char 	get_first	(void);
int 	get_int		(void);
void 	count		(void);
int main(void)
{
	int choice;
	void count(void);

	while((choice = get_choice()) != 'q')
	{
		switch(choice)
		{
			case 'a':printf("But low,sell high.\n");
				 break;
			case 'b':putchar('\a');	/* ANSI */
				 break;
			case 'c':count();
				 break;
			default :printf("Program error!\n");
				 break;
		}
	}
	printf("Bye.\n");
	return 0;
}

void count(void)
/* 打印出1～n的数字  */
{
	int n,i;

	printf("Count how far?Enter an integer: \n");
	n = get_int();
	for(i = 1; i<= n; i++)
		printf("%d\n",i);
	while(getchar() != '\n')
		continue;
}

char get_choice(void)
/* 读取输入的第一个字符内容，确定命令 */	
{
	int ch;

	printf("Enter the letter of your choice:\n");
	printf("a. advice		b.bell\n");
	printf("c.count			q.quit\n");
	ch = get_first();
	while((ch < 'a'||ch > 'c')&&ch != 'q')
	{
		printf("Please respond with a,b,c,or q.\n");
		ch = get_first();
	}
	return ch;
}

char get_first(void)
/* 获取第一个字符，忽略其他 */
{
	int ch;

	ch = getchar();
	while(getchar()!='\n')
		continue;
	return ch;
}

int get_int(void)
/* 读取每行的第一个数字，忽略其他 */
{
	int input;
	char ch;

	while(scanf("%d",&input) != 1)
	{
		while((ch =getchar()) != '\n')
			putchar(ch);	//剔除错误的输入
		printf("is not an integer .\nPlease enter an ");
		printf("integer value,such as 25,-178,or 3: ");
	}
	return input;
}
