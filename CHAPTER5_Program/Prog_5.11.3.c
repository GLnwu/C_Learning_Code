#include<stdio.h>
int main(void)
{
	int days;
	
	printf("Please input the days number\n");
	scanf("%d",&days);
	while(days > 0)
	{
		printf("%d days are %d wekks, %d days\n",days,days/7,days%7);
		printf("Please input the days number\n");
		scanf("%d",&days);
	}
	return 0;
}
	
