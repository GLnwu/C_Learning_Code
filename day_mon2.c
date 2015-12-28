/* day_mon2.c -- 让编译器计算元素个数 */
#include<stdio.h>
int main(void)
{
	const int days[]={31,28,31,30,31,30,31,31,30,31};
	int index;

	for(index = 0;index < sizeof days / sizeof days[0];index++)
		printf("Month %2d has %d days.\n",index + 1,days[index]);

	return 0;
}
/* sizeof days计算的是整个数组的大小，以字节为单位。sizeof days[0]是一个元素的大小(以字节为单位)。*/
