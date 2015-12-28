/*************************************************************************
    > File Name: somedata.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2015年12月28日 星期一 11时10分57秒
 ************************************************************************/

#include<stdio.h>
#define SIZE 4
int main(void)
{
	int some_data[SIZE] = {1492,1066};
	int i;
	printf("%2s%14s\n","i","some_data[i]");
	for(i = 0;i < SIZE;i++)
		printf("%2d%14d\n",i,some_data[i]);
	return 0;
}
/* 当初始化的项目个数少于数组的个数的时候，后面的元素会被初始化为0	*/
/* 注意，当初始化的项目的个数大于数组的大小的时候，则编译器会认为这是一个错误。*/



