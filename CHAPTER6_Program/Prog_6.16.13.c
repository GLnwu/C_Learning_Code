#include<stdio.h>
int main(void)
{
	int i;
	double A[8];
	double B[8];
	double temp = 0;

	printf("Please enter eight number: \n");
	for(i = 0;i < 8;i++)
		scanf("%lf",&A[i]);

	i = 0;
	while(i < 8)
	{
		temp = A[i]+temp;
		B[i] = temp;
		i++;
	}
	printf("Now the input number is:\n");
	for(i = 0;i < 8;i++)
		printf("%g ",A[i]);
	printf("\n");

	printf("The sum of in order from 1~m is(m = 1-8):\n");
	for(i = 0;i < 8;i++)
		printf("%g ",B[i]);
	printf("\n");
	
	return 0;
}	
