//sum_arr1.c -- 对一个数组的所有元素求和
//如果不能使用%zd, 请使用%u或%lu
#include<stdio.h>
#define SIZE 10
int sum(int [],int );

int main(void)
{
	int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20};
	long answer;

	answer = sum(marbles,SIZE);
	printf("The total number of marbles is %ld.\n",answer);
	printf("The size of marbles is %zd bytes.\n",sizeof marbles);

	return 0;
}

int sum(int ar[],int n)
{
	int i;
	int total = 0;

	for(i = 0;i < n;i++)
		total += ar[i];
	printf("The size of ar is %zd bytes.\n",sizeof ar);

	return total;
}
/* sum是一个函数，由C语言标准可知，在函数参数的声明中，数组名被编译器当作指向该数组第一个元素的指针。因此，ar在函数sum中，被看作一个int *的指针而不是数组*/

