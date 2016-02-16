/*************************************************************************
    > File Name: global.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年02月10日 星期三 17时35分17秒
 ************************************************************************/

#include<stdio.h>
void critic(int *);
int main(void)
{
	int units = 0;

	printf("How many pounds to a firkin of butter?\n");
	scanf("%d",&units);
	while(units != 56)
		critic(&units);
	printf("You must have looked it up!\n");
	return 0;
}
void critic(int *units)
{
	/* 这里省略了可选的二次声明 */
	printf("No luck,chummy.Try again.\n");
	scanf("%d",units);
}
