/*************************************************************************
    > File Name: complit.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sat 07 May 2016 06:15:21 PM CST
 ************************************************************************/
/* complit.c -- 复合文字 */
#include<stdio.h>
#include <stdlib.h>
#define MAXTITL 41
#define MAXUTL 31

struct book {
	char title[MAXTITL];
	char author[MAXUTL];
	float value;
};

int main(void)
{
	struct book readfirst;
	int score;

	printf("Enter test score: ");
	scanf("%d",&score);

	if(score >= 84)
	{
		readfirst = (struct book) { "Crrime and Punishment",
			"Fyodor Dostoyevsky",
			9.99};
	}
	else
	{
		readfirst = (struct book) { "Mr. Bouncy's Nic Hat'",
			"Fred Winsom",
			5.99};
	}
	printf("Your assigned reading:\n");
	printf("%s by %s:$%.2f\n",readfirst.title,
			readfirst.author,readfirst.value);

	return EXIT_SUCCESS;
}
