#include<stdio.h>
int main(void)
{
	char c;
	int n_cnt=0;	//换行符数目
	int sp_cnt=0;	//空格数目
	int ot_cnt=0;	//其他字符数目

	while((c = getchar()) != '#')
	{
		switch(c)
		{	
			case '\n':n_cnt++;break;
			case ' ' :sp_cnt++;break;
			defalut  :ot_cnt++;break;
		}
	}
	printf("空格%d个,换行符%d个,其他字符为%d个",n_cnt,sp_cnt,ot_cnt);
	
	return 0;
}

