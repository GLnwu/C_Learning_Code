#include<stdio.h>
#include<string.h>
#define LENGTH 255
int main(void)
{
	char A[LENGTH];
	int i;
	int current_length;	//存储实际字符串的长度

	scanf("%s",A);
	printf("\n");
	current_length = strlen(A);
	for(i = current_length-1;i >=0;i--)
		printf("%c",A[i]);
	return 0;
}
