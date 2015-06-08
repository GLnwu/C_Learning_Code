#include<stdio.h>
double min(double,double);

int main(void)
{
	double  x,y;

	printf("Please input two numbers:\n");
	scanf("%lf %lf",&x,&y);
	printf("min(%g,%g)=%g\n",x,y,min(x,y));

	return 0;
}

double min(double m,double n)
{
	return (m < n)?m:n;
}
