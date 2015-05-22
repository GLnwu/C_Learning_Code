#include<stdio.h>
int main(void)
{
	int a[8];
	int i;

	printf("please input the number:");
	for(i = 0;i < 8;i++)
		scanf("%d",&a[i]);
	for(i = 0;i < 8;i++)
		printf("%d ",a[7-i]);
	printf("\n");
	return 0;
}
