#include<stdio.h>
int main(void)
{
	int x,i;


	printf("Please input the number:\n");
	scanf("%d",&x);
	i = x + 11;
	while(x < i )
	{
		printf("%d\n",x++);
	}
	return 0;
}	
