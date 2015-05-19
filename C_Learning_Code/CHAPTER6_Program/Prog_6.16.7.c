#include<stdio.h>
int main(void)
{
	float x1,x2;

	printf("Please input the number: ");
	while(scanf("%f%f",&x1,&x2 ) == 2)
	{
		printf("%f / %f = %f\n",x1,x2,x1/x2);
		printf("Next input(q to quit):");
	}
	return 0;
}
