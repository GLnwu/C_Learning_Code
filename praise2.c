/* praise2.c */
#include<stdio.h>
#include<string.h>	/* 提供strlen()函数的原型 */
#define PRAISE "What a super marvelous name! "
int main(void)
{
	char name[40];

	printf("What's your name?\n");
	scanf("%s",name);
	printf("your name of %zd letters occupies %zd memory cells.\n",strlen(name),sizeof name);
	printf("The phrase of praise has %zd letters",strlen(PRAISE));
	printf("and occupies %zd memory cells.\n",sizeof PRAISE);
	return 0;
}
	
