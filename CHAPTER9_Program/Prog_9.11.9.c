/* Prog_9.11.9.c -- 以二进制形式输出整数 (power.c的一般化)*/
#include<stdio.h>
void to_base_n (unsigned long n,unsigned short m);

int main(void)
{
	unsigned long number;
	unsigned short m_system; 

	printf("Enter two integer(q to quit:)\n");
	printf("The first is a number,second is system of the number to be given:\n");
	while(scanf("%lu %hu",&number,&m_system) == 2)
	{
		printf("%d  system equivalent: ",m_system);
		to_base_n(number,m_system);
		putchar('\n');
		printf("Enter two integer(q to quit:)\n");
		printf("The first is a number,second is system of the number to be given:\n");
	}
	printf("Done.\n");

	return 0;
}
void to_base_n(unsigned long n,unsigned short m)	/* 递归函数 */
{
	int r;
	r = n % m;
	if(n >= m)
		to_base_n(n/m,m);
	putchar('0'+r);		/* ASCII和EBCDIC编码都满足 */

	return;
}
