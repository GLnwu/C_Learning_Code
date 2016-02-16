/*************************************************************************
    > File Name: Prog12.11.5.h
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年02月16日 星期二 17时36分54秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

int numbers = 100;

static int randoutput(void)
{
	return (rand()%10 +1);
}

void sort(int array[numbers])
{

	int top,seek;
	int temp;

	for(top = 0;top < numbers -1;top++)
		for(seek = top +1;seek < numbers;seek++)
			if(array[top] < array[seek])
			{
				temp 	    = array[top];
				array[top]  = array[seek];
		       		array[seek] = temp;	
			}
}
