/*************************************************************************
    > File Name: rand1.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年02月13日 星期六 20时52分02秒
 ************************************************************************/

#include<stdio.h>
#include<time.h>
static unsigned long int next = 1;	/* 种子 */
void srand1(unsigned int);
int rand1(void);

int main(void)
{
	int count;

	srand1((unsigned int)time(0));
	for(count = 0;count < 5;count ++)
		printf("%hd\n",rand1());
	return 0;
}
int rand1(void)
{
/* 产生伪随机数的魔术般的公式 */
	next = next *1103515245 + 12345;
	return (unsigned int)(next / 65536) % 32768;
}
void srand1(unsigned int seed)
{
	next = seed;
}
