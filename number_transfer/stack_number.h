#include <stdlib.h>

#define ERROR 1
#define SUCCESS 0
#define OVERFLOW -1
#define STACK_SIZE 100

typedef struct{
	int elem[STACK_SIZE];
	int top;
}Seqstack;

void	Initstack(Seqstack *s);
int	Push(Seqstack *s,int  x);
int	Pop(Seqstack *s,int *x);
int	Gettop(Seqstack *s,int *x);


void Initstack(Seqstack *s){
	s->top = -1;
}/* 初始化栈 */

int Push(Seqstack *s,int x){
	if(s->top == STACK_SIZE-1)	return(OVERFLOW);	/* 栈已满 */
	s->top++;
	s->elem[s->top] = x;
	return SUCCESS;
}/* 入栈 */

int Pop(Seqstack *s,int *x){
	if(s->top == -1)
		return ERROR;	/* 栈已空 */
	*x =s->elem[s->top];	/* 传top指向的变量的地址给x */
	s->top--;
	return SUCCESS;
}/* 出栈 */ 

int Gettop(Seqstack *s,int *x){
	if(s->top == -1)	return ERROR;	/* 栈已空 */
	*x = s->elem[s->top];
	return SUCCESS;
}/* 取栈顶元素 */


