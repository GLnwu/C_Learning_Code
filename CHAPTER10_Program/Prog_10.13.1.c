/*************************************************************************
    > File Name: Prog_10.13.1.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月10日 星期日 20时52分17秒
 ************************************************************************/
// 和10.7的rain.c源码基本相同，只是将数组的访问方式换成了指针的访问方式
#include<stdio.h>
#define MONTHS 12		//一年的月份数
#define YEARS 5			//降水量数据的年数
int main(void)
{
	//把数组初始化为2000年到2004年的降水量数据
	const float rain[YEARS][MONTHS] = {
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},  
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},  
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},  
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},  
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6} 
	};
	int year,month;
	float subtot,total;

	printf(" YEAR  RAINFALL (inches) \n");
	for(year = 0,total = 0;year < YEARS;year++)
	{		//对于每一年，各月的总降水量
		for(month = 0,subtot = 0;month < MONTHS;month++)
			subtot += *(*(rain+year)+month);
		printf("%5d %15.1f\n",2000+year,subtot);
		total += subtot;//所有年度的总降水量
	}
	printf("\nThe yearly average is %.1f inches. \n\n",total/YEARS);
	printf("MONTHLY AVERAGES: \n\n");
	printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct  ");
	printf("Nov Dec\n");

	for(month = 0; month<MONTHS; month++)  
	{
		for(year = 0,subtot = 0; year <YEARS; year++)  
		{      
	                subtot+=rain[year][month];  
			subtot+=*(*(rain+year)+month);  
		}  
		printf("%4.1f",subtot/YEARS);  
	} 
	printf("\n");  
	return 0; 
}
