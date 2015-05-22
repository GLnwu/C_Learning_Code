#include <stdio.h>
#include <float.h>
int main(void)
{
	double a=1.0/3.0;
	float b=1.0/3.0;
	
	printf("%.4f %.12f %.16f\n",a,a,a);
	printf("%.4f %.12f %.16f\n",b,b,b);
	printf("%d %d %f\n",FLT_DIG,DBL_DIG,FLT_EPSILON);
	return 0;
}

