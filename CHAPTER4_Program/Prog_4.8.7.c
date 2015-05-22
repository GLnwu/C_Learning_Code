#include<stdio.h>
int main(void)
{
	float	mile;
	float	gallon;

	printf("How far did you go(miles):\n");
	scanf("%f",&mile);
	printf("And how much gas you have cost (gallon):\n");
	scanf("%f",&gallon);
	printf("It cost %.1f gallon on per mile.",gallon/mile);
	return 0;
}
