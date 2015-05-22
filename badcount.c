/* badcount.c --不正确的参数个数 */
#include<stdio.h>
int main(void)
{
	int f = 4;
	int g = 5;
	float h = 5.0f;

	printf("%d\n",f,g);	/* 参数太多 */
	printf("%d %d\n",f);	/*参数太少少 */
	printf("%d %f\n",h,g);	/*值的类型不正确 */
	return 0;
}
/* 该源代码中，第二行的输出的第二个数字,不是一个固定的数字，而是在运行过程中，随机读取的一个数字，因此每次运行的结果是不同的。 */
