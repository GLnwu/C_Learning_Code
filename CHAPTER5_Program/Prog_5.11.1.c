#define	SIXTY 60
#include<stdio.h>
int main(void)
{
	int	minutes;
	
	printf("Please input the time(minutes):\n");
	scanf("%d",&minutes);
	while(minutes > 0)
	{
		printf("%d minutes equal %d hour and %d mintues\n",minutes,minutes/SIXTY,minutes%SIXTY);
		printf("Please input the time(minutes):\n");
		scanf("%d",&minutes);
	}
	printf("Done!\n");
	return 0;
}

