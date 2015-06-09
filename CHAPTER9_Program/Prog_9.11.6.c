#include<stdio.>
#include<ctype.h>

int Judge(char);

int main(void)
{
	char c;

	while((c = getchar()) != EOF)
	{
		if(Judge(c));
int Judge(char c)
{	
	int d;

	if(isalpha(c))
		d = tolower(c)-96;
	else
		d = -1;
	return d;
}

