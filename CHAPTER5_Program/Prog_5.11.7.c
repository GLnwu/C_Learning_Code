#include<stdio.h>
float square(float temp);
int main(void)
{
	float x;
	
	scanf("%f",&x);
	printf("x = %f\n",x);
	printf("x^2 = %f\n",square(x));

	return 0;
}
	
float square(float temp)
{
	return temp*temp;
}
