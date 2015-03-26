/* shoes2.c -- 把一双鞋的尺码转换为英尺 */
#include<stdio.h>
#define ADJUST 7.64
#define SCALE 0.325
int main(void)
{
	double shoe,foot;
	shoe = 9.0;
	foot = SCALE * shoe + ADJUST;
	printf("Shoe size (men's) foot length\n");
	shoe = 3.0;
	while(shoe < 18.5)	/* while循环开始 */
	{			/* 代码快开始 */
		foot = SCALE*shoe + ADJUST;
		printf("%10.1f %15.2f inches\n",shoe,foot);
		shoe = shoe + 1.0;
	}			/* 代码快结束 */
	printf("If the shoe fits,wear it.\n");
	return 0;
}
