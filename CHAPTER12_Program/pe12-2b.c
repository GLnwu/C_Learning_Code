/*************************************************************************
    > File Name: pe12-2b.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年02月16日 星期二 16时20分11秒
 ************************************************************************/

#include<stdio.h>
#include "pe12-2a.h"
int main(void)
{
	int mode;

	printf("Enter 0 for mertic mode.1 for US mode:");
	scanf("%d",&mode);
	while(mode >= 0)
	{
		set_mode(mode);
		get_info();
		show_info();
		printf("Enter 0 for meritc mode,1 for US mode");
		printf("(-1 to quit):");
		scanf("%d",&mode);
	}
	printf("Done.\n");
	return 0;
}
