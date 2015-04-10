#include<stdio.h>
int main(void)
{
	int i = 0;
	double A[8];
	double B[8];

	printf("Please enter eight number to A[8]: ");
	do
	{
		scanf("%f",A[i++]);
	}while(i < 8);

	for(i = 0; i < 8;i++)
	{
		B[i]=
