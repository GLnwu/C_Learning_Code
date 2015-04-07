#include<stdio.h>
int main(void)
{
	int Uper,Down,square,cube;
	int i;	

	
	printf("Please enter the Uper limit :");
	scanf("%d",&Uper);
	printf("Please enter the Down limit:");
	scanf("%d",&Down);
	printf("number   square  cube\n");
	for(i = 0;i<= (Uper-Down);i++)
	{
		square = (Down+i)*(Down+i);
		cube = (Down+i)*(Down+i)*(Down+i);
		printf("%d        %d      %d\n",(Down+i),square,cube);
	}
	return 0;
}	
