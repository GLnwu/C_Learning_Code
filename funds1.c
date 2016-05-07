/*************************************************************************
    > File Name: funds1.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sat 07 May 2016 01:18:52 PM CST
 ************************************************************************/

#include<stdio.h>
#define FUNDLEN 50
struct funds{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefunds;
};
double sum(double,double);

int main(void)
{
	struct funds stan = {
		"garlic-Melon Bank",
		3024.72,
		"Luck's Savings and Loan",
		9237.11
	};

	printf("Stan has a total of $%.2f.\n",sum(stan.bankfund,stan.savefunds));
	return 0;
}

/* 对两个double求和 */
double sum(double x,double y)
{
	return (x + y);
}
