#include<string.h>
#include<stdio.h>
#define SIZE 100
int main(void)
{
	char x[SIZE];
	int i;

	printf("Please input the word:");
	scanf("%s",x);
	printf("%s\n",x);
	for(i = strlen(x)-1;i >=0; i--)
		printf("%c",x[i]);
	printf("\n");
	return 0;
}
