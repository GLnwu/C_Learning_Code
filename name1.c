#include<stdio.h>
#define MAXSIZE 50
void FUN1(char *p);
void FUN2(void);

int main(void)
{
	char  c[100];
	char *p=c;
	
	fgets(c,MAXSIZE,stdin);
	FUN1(p);
	FUN1(p);
	FUN2();	
	
	return 0;
}

void FUN1(char *p)
{
	printf("%s",p);
//	printf("%s","For he's a jolly good fellow!\n");
}

void FUN2(void)
{
	printf("%s","Which nobody can deny!\n");
}
