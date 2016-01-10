/*************************************************************************
    > File Name: Prog_10.13.2.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月10日 星期日 23时17分53秒
 ************************************************************************/

#include<stdio.h>
void copy_arr(double [],double [],int n);
void print(double [],int n);

int main(void)
{
	double source[5] = {1.1,2.2,3.3,4.4,5.5};
	double target1[5];
	double target2[6];
	copy_arr(source,target1,5);
	copy_arr(source,target2,5);
	print(target1,5);
	print(target2,5);
	return 0;
}

void copy_arr(double source[],double target[],int n)
{
	int i;

	for(i = 0;i < n; i++)
		target[i] = source[i];
}

void print(double target[],int n)
{
	int i;

	for(i = 0; i < n;i++)
		printf("%f   ",target[i]);
	printf("\n");
}
