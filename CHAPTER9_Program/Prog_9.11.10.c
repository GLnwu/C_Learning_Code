#include<stdio.h>
#include<limits.h>
unsigned long long Fibonacci( int);

int main(void)
{
	int n;

	printf("Please enter a sequence number of Fibonacci:\n");
	scanf("%d",&n);
	printf("the n_th number is %llu\n",Fibonacci(n));
	return 0;
}

unsigned long long Fibonacci(int n)
/*  计算斐波那契数列函数 */
{
	int i;
	unsigned long long a1=0,a2=1;
	unsigned long temp;

	for(i = 1; i < n; i++)
	{
		temp = a1;	
		a1   = a1+a2;
		a2   = temp;
	}
	return a1;	
}
