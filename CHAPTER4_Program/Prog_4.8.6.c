#include<stdio.h>
#include<float.h>
int main(void)
{
	double	x=1.0/3.0;
	float	y=1.0/3.0;

	printf("FLT_DIG=%d,DBL_DIG=%d\n",FLT_DIG,DBL_DIG);
	printf("x=%.4f\n",x);
	printf("x=%.12f\n",x);
	printf("x=%.16f\n",x);
	printf("x=%.4f\n",y);
	printf("x=%.12f\n",y);
	printf("x=%.16f\n",y);
	return 0;
}

