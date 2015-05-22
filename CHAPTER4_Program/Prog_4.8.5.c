#include<stdio.h>
#include<string.h>
int main(void)
{
	char 	first_name[20];
	char 	last_name[20];
	
	printf("Please input your first name:\n");
	scanf("%s",first_name);
	printf("Please input your last name:\n");
	scanf("%s",last_name);
	printf("%-9s %-9s\n",first_name,last_name);
	printf("%-9zd %-9zd",strlen(first_name),strlen(last_name));
	return 0;
}
