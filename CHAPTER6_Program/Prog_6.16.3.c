#include<stdio.h>
int main(void)
{
	int i,j;

	for(i=0;i < 6;i++)
	{
		for(j=0;j<=i;j++)
			printf("%c",70-j);
		printf("\n");
	}
	return 0;
}
