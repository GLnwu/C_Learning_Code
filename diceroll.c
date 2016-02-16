/*************************************************************************
    > File Name: diceroll.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年02月15日 星期一 19时18分51秒
 ************************************************************************/
/* diceroll.c -- 掷骰子的模拟程序 */
#include "diceroll.h"
#include<stdio.h>
#include<stdlib.h>		/* 为rand函数 提供类库 */

int roll_count = 0;		/* external link */
				/* record how many times rollem is been called */

static int rollem(int sides)	/* 这个文件的私有函数 */
/* 产生随机数 */
{
	int roll;

	roll = rand()%sides + 1;
	++roll_count;		/* 计数函数调用 */
	return roll;
}

int roll_n_dice(int dice ,int sides)
/* 将运行dice次的随机函数rollem产生的结果相加后返回 */
{
	int d;
	int total = 0;
	if(sides < 2)
	{
		printf("Need at least 2 sides.\n");
		return -2;
	}
	if(dice < 1)
	{
		printf("Need at least 1 die.\n");
		return -1;
	}
	for(d = 0;d < dice;d++)
		total += rollem(sides);

	return total;
}
