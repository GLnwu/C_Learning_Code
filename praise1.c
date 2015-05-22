/* praise1.c --使用不同类别的字符串 */
#include<stdio.h>
#define PRAISE "What a super marvelous name!"
int main(void)
{
	char name[40];
	
	printf("What's your name?\n");
	scanf("%s",name);
	printf("Hello, %s ,%s\n",name,PRAISE);
	return 0;
}
/* 本例子中演示了两种输出字符串的方法，第一种是用数组存储，直接把数组的变量名字，当作一个字符串输出
   第二种方法是把一个字符串输出当作一个宏。通过预处理器来替换宏，达到输出字符串的目的 */
