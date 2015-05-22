#include<stdio.h>
int main(void)
{
	char a[26];
	int i;

	for(i = 0; i < 26; i++)
	{	a[i] = i + 65;
		printf("%c ",a[i]);
	}
	printf("\n");
	return 0;
}
