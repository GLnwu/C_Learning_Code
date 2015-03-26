#include<stdio.h>
int main(void)
{
	char first_name[20];
	char last_name[20];

	printf("Please input your first_name:\n");
	scanf("%s",first_name);
	printf("Please input your last_name:\n");
	scanf("%s",last_name);
	printf("Your name is %s_%s",first_name,last_name);
	return 0;
}
	
