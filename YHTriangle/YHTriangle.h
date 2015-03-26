#include <stdio.h>

#define MAXSIZE 50


typedef struct{
	int elem[MAXSIZE];
	int front;
	int rear;
}Seqqueue;

int Enterqueue(Seqqueue *q,int x);

int Deletequeue(Seqqueue *q,int *x);

int Gethead(Seqqueue *q,int *x); 

int Enterqueue(Seqqueue *q,int x){
	if((q->rear+1)%MAXSIZE == q->front)	return 1;	/* 队列已满 */
	q->elem[q->rear] = x;
	q->rear = (q->rear + 1)%MAXSIZE;			/* 移动队尾指针 */
	return 0;
}/* 进队列 */

int Deletequeue(Seqqueue *q,int *x){
	if(q->front == q->rear)	return 1;			/* 队列已空 */
	*x = q->elem[q->front];	
	q->front = (q->front + 1)%MAXSIZE;			/* 移动队头指针 */
	return 0;
}/* 出队列 */

int Gethead(Seqqueue *q,int *x){
	if(q->front == q->rear)	return 1;			/* 队列为空，无队头元素 */
	*x = q->elem[q->front];
	return 0;
}/* 取队头front指针所指向的元素 */
