#include<stdio.h>
int main(void)
{
	float x;
	
	printf("Please input the float number:\n");
	scanf("%f",&x);
	printf("The input is %.1f or %.1e\n",x,x);
	printf("The input is %.3f or %.3E\n",x,x);
	return 0;
}
	
