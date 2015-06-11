/* Prog_9.11.8.c -- 计算数值的整数(包括负数)次幂－－使用递归方法 */
#include<stdio.h>
double power(double n,int p);	//ANSI原型
int main(void)
{
	double x,xpow;
	int exp;

	printf("Enter a number and the positive integer power");
	printf(" to which \nthe number will be raised. Enter q");
	printf(" to quit.\n");
	while(scanf("%lf%d",&x,&exp)== 2)		//scanf返回的是输入的变量的个数
	{
		xpow = power(x,exp);
		printf("%.3g to the power %d is %.5g\n",x,exp,xpow);
		printf("Enter next pair fo numbers or q to quit.\n");
	}
	printf("Hope you enjoyed this power trip -- bye!\n");
	return 0;
}

double power(double n,int p)	//函数定义
{
	if(n==0)	//指数为0，返回0
		return 0;
	if(p==0)
		return 1;
	if(p > 1)
		return (n*power(n,p-1));
	return n;
}

