#include<stdio.h>
int main(void)
{
	int x1,x2;
	int sum,i;
	
	printf("Enter lower and upper integer limits: ");
	scanf("%d%d",&x1,&x2);
	for(sum = 0,i = x1;i <= x2 ;i++)
		sum = sum + i*i;
	printf("The sus of the suqares from %d to %d is %d\n",x1*x1,x2*x2,sum);
	return 0;
}
		
	
	
