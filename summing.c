/* summing.c -- 对用户输入的整数求和 */
#include<stdio.h>
int main(void)
{
	long num;
	long sum = 0L;		/* 自动转换类型允许使用简单的“0”，为了保证程序的一致性，使用“0L”，即类型为long的零 */
	int status;

	printf("Please enter an integer to be summed. ");
	printf("(q to quit)");
	status = scanf("%ld",&num);
	while(status == 1)
	{
		sum = sum + num;
		printf("Please enter the next interger (q to quit):");
		status = scanf("%ld",&num);
	}
	printf("Those integers sum to %ld. \n",sum);
	return 0;
}

