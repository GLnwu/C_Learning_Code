#include<stdio.h>
double har_mean(double ,double);	/* 求谐均值的函数 */

int main(void)
{
	double a,b;

	printf("Please input two number:\n");
	while(scanf("%lf %lf",&a,&b)!=2||a == 0||b == 0)
	{
		printf("Error Input!\n");
		printf("Please input two number other than 0:\n");
		if(scanf("%lf %lf",&a,&b) == 2&&a != 0&&b != 0)
			break;
	}
		
	printf("the harmonious mean of %g and %g is %g\n",a,b,har_mean(a,b));

	return 0;
}

double har_mean(double x,double y)
{
	return (x*y/(x+y));
}
