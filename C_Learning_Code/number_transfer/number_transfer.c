#include <stdio.h>
#include "stack_number.h"

int main(void)
{
	int x,i;
	int temp;	/* 暂时存储出栈的数字 */
	Seqstack t;
	Seqstack *s;
	s = &t;
	s->top = -1;

	Initstack(s);		
	printf("C");	
	printf("数制转化，请输入所需转化的十进制整数：");
	scanf("%d",&x);
	printf("请输入要转化的进制：");
	scanf("%d",&i);

	while((x/i) != 0){
		Push(s,x%i);
		x = x/i;
	}/* 辗转相除法，余数依次入栈 */
	Push(s,x%i);	/* 最后一次，商为零，余数入栈 */	
	while(s->top != -1){
		Pop(s,&temp);
		printf("%d",temp);
	}/* 依栈次将余数打印出来 */
	return 0;
}
