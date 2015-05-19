#include<stdio.h>
int main(void)
{
	int A[8];
	int i;
	int power = 1;

	for(i = 0;i < 8;i++)		//设置int数组的8个元素
	{
		A[i] = power;
		power = power * 2;
	}
	i = 0;				//重新初始化计数i为0
	do
	{
		printf("%d ",A[i++]);	//打印int数组的八个元素i
	}while(i < 8);
	printf("\n");

	return 0;
}
