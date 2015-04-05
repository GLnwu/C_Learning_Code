#include<stdio.h>
int main(void)
{
	int days;
	
	printf("Please input the days number\n");
	scanf("%d",&days);
	printf("%d days are %d wekks, %d days",days,days/7,days%7);
	return 0;
}
	
