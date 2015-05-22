#include<stdio.h>
int main(void)
{
	int times,i;
	long double x1 = 1.0;
	long double x2 = 1.0;

	printf("Please enter the times: ");
	scanf("%d",&times);
	for(i = 2;i < times;i++)
	{
		x1 =  x1 + 1.0/i;
		if(i % 2 == 0)
			x2 = x2 - 1.0/i;	//偶数项减 1.0/i
		else
			x2 = x2 + 1.0/i;	//奇数项加 1.0/i
	}
	printf("x1 = %Lf\n",x1);
	printf("x1 = %Lf\n",x2);

	return 0;
}
