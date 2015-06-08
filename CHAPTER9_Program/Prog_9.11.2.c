#include<stdio.h>
#include<string.h>
#define MAXSIZE 1000
void chline(char *,int ,int);
void input(char *);

int main(void)
{
	size_t length;
	int i,j;
	char ch[MAXSIZE];

	printf("Please input a character string\n");
	while(scanf("%s",ch) != 1)
		printf("Error input!\n");
	printf("Your input is:\n");
	printf("%s\n",ch);
	length = strlen(ch);
	printf("The length of your input is %zd\n",length);
	printf("Please input two numbers  between 0~%zd\n",length);
	printf("It indicate the range of the string character tha will be printed\n");
	while(getchar() != '\n')
		continue;

	while(scanf("%d %d",&i,&j) != 2||i < 0||j > length)	/*  确保输入的是两个满足条件的数 */
	{
		printf("Error input!\n");
		printf("Please input two numbers  between 0~%zd",length);
		printf("It indicate the range of the string character tha will be printed\n");
		if(scanf("%d %d",&i,&j) == 2&&i > 0&& j< length)
			break;
	}
	for(;i < j;i++)
		printf("%c",ch[i]);
	printf("\n");

	return 0;
}
