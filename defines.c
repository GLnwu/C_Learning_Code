#include <stdio.h>
#include <limits.h>	// 整数限制
#include <float.h>	// 浮点数限制
int main(void)
{
	printf("Some number limits for this system:\n");
	printf("Biggest int(int 的最大值): %d\n", INT_MAX);
	printf("Smallest long long（最小的long long型整数）: %lld\n", LLONG_MIN);
	printf("One byte = %d bits on this system.（本系统一比特的位数）\n", CHAR_BIT);
	printf("Largest double（最大的双精度浮点数）: %e\n", DBL_MAX);
	printf("Smallest normal float（最大的浮点数）: %e\n", FLT_MIN);
	printf("float precision = %d digits(浮点数的精度的位数)\n", FLT_DIG);
	printf("float epsilon（浮点数能表达的最小值） = %e\n", FLT_EPSILON);
	return 0;
}
/* float.h头文件在/usr/include里找不到，那么这个头文件存在于哪里？*/
