#include<stdio.h>
int main(void)
{
	float 	tall;
	char 	name[20];
	
	printf("Please input your name[0~20]:\n");
	scanf("%s",name);
	printf("Ok,and what is your height:\n");
	scanf("%f",&tall);
	printf("%s,you are %.3f feet tall",name,tall);	
	return 0;
}

