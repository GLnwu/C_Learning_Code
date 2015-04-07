#include<stdio.h>
int main(void)
{
	int i,j;
	char x;

	printf("Please a letter:");
	scanf("%c",&x);
	for(i=0;i<=(x-'A');i++)
	{
		for(j = 0;j <= (x-'A'-i-1);j++)
			printf(" ");			//处理空格
		for(j = 0;j < (i + 1); j++)
			printf("%c",'A'+j);		//升序打印字母
		for(j = i;j > 0;j--)			//降序打印字母,i在此行时的数值表示了应该再降序打印的字母个数
			printf("%c",'A'+j-1);
		printf("\n");
	}
	return 0;
}
