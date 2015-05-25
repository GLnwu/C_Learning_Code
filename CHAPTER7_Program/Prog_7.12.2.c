#include<stdio.h>
int main(void)
{
	char c;
	int i = 0;

	while((c=getchar())!='#')
	{
		i++;
		printf("%c=%d ",c,c);
		if(i%8 == 0)
			printf("\n");
	}
	printf("\n");

	return 0;
}
