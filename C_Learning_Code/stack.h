#include <stdlib.h>

#define ERROR 1
#define SUCCESS 0
#define OVERFLOW -1
#define STACK_SIZE 50

typedef int Status;

typedef struct{
	char elem[STACK_SIZE];
	int top;
}Seqstack;

void	Initstack(Seqstack *s);
Status	Push(Seqstack *s,char x);
Status	Pop(Seqstack *s,char *x);
Status Gettop(Seqstack *s,char *x);


void Initstack(Seqstack *s){
	s->top = -1;
}

Status Push(Seqstack *s,char x){
	if(s->top == STACK_SIZE-1)	return(OVERFLOW);	/* 栈已满 */
	s->top ++;
	s->elem[s->top] == x;
	return SUCCESS;
}

Status Pop(Seqstack *s,char *x){
	if(s->top == -1)	return ERROR;	/* 栈已空 */
	s->top--;
	return SUCCESS;
}

Status Gettop(Seqstack *s,char *x){
	if(s->top == -1)	return ERROR;	/* 栈已空 */
	*x = s->elem[s->top];
	return SUCCESS;
}



