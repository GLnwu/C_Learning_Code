/*************************************************************************
    > File Name: pe12-2a.h
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年02月16日 星期二 16时23分31秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>	//为exit提供函数原型
int 	mode;
double 	length;	//路程的长度
double 	volume;	//耗费的燃料的体积

void set_mode(int T);
void get_info(void);
void show_info(void);

void set_mode(int T)
{
	extern int mode;

	mode = T;
}

void get_info(void)
{
	extern int 	mode;
	extern double	length;
	extern double	volume;
	char *distance[2] = {"kilometers","miles"};
	char *fuel[2]     = {"liters","gallons"};

	if(0 !=mode && 1 != mode){
		printf("Wrong Mode!\n");
		exit(EXIT_FAILURE);
	}
	printf("Enter distance traveled in %s:",distance[mode]);
	scanf("%lf",&length);
	printf("Enter fuel consumed in %s:",fuel[mode]);
	scanf("%lf",&volume);
}

void show_info(void)
{
	extern int mode;
	extern double length;
	extern double volume;

	if(0 == mode)
		printf("Fuel consumption is %.2f liters per 100km\n",volume /length*100 );
	else if(1 == mode)
		printf("Fuel consumed in gallons:%.1f\n",length / volume);
}
