#include<stdio.h>
int main(void)
{
	/* c99 provides a %zd specifier for sizes */
	printf("Type short has a size of %zd bytes,\n",sizeof(short));
	printf("Type int has a size of %zd bytes,\n",sizeof(int));
	printf("Type char has a size of %zd bytes,\n",sizeof(char));
	printf("Type long has a size of %zd bytes,\n",sizeof(long));
	printf("Type long long has a size of %zd bytes.\n",sizeof(long long));
	printf("Type double has a size of %zd bytes,\n",sizeof(double));
	printf("Type long double has a size of %zd bytes,\n",sizeof(long double));
	printf("Type float has a size of %zd bytes,\n",sizeof(float));
	return 0;
}
