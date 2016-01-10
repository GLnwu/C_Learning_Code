/*************************************************************************
    > File Name: Prog_10.13.3.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月11日 星期一 00时01分36秒
 ************************************************************************/
int biggest(int [],int n);		//返回int数组中存储的最大数值
#include<stdio.h>
int main(void)
{
	int array[10] = {1,2,5,67,34,89,23,99,101,6};

	int n = biggest(array,10);
	printf("The biggest number of the array is %d \n",n);
	return 0;
}

int biggest(int array[],int n)
{
	int temp = array[0];
	int i;

	for(i = 1;i < n; i++)
	{
		if(temp < array[i])
			temp = array[i];
	}
	return temp;
}
