#include<stdio.h>
float div(float x1,float x2);	//ANSI 原型

int main(void)
{
	float x1,x2;

	printf("Please input the number: ");
	while(scanf("%f%f",&x1,&x2 ) == 2)
	{
		printf("%f / %f = %f\n",x1,x2,div(x1,x2));
		printf("Next input(q to quit):");
	}
	return 0;
}
float div(float x1,float x2)
{
	return x1/x2;
}
