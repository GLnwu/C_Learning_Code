#include<stdio.h>
int main(void)
{
	printf("%x %X %#x\n",31,31,31);
	printf("**%d**% d**% d**\n",42,42,-42);
	printf("**%5d**%5.3d**%05d**%05.3d**\n",6,6,6,6);
	return 0;
}
/* gcc4.8.3编译下会报警告，说第6行第四个说明符的‘0’会被精度说明符忽略 */
