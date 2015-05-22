/* pound.c -- 定义带有一个参数的函数 		*/
#include<stdio.h>
void pound(int n);	/* ANSI 风格的原型 	*/
int main(void)
{
	int times = 5;
	char ch = '!';	/* ASCII码值为33 	*/
	float f = 6.0;

	pound(times);
	pound(ch);
	pound((int)f);
	return 0;
}
void pound(int n)	/* ANSI风格的函数头	*/
{
	while(n-->0)
		printf("#");
	printf("\n");
}
