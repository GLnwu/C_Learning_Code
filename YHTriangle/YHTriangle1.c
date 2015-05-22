#include <stdio.h>
#include "YHTriangle.h"

int main(void){
	int i,j,k,n,temp,x,left_width;
	Seqqueue head;
	Seqqueue *q=&head;
	q->front=q->rear=0;	/* 循环队列初始化 */
	
	printf("请输入需要输出的杨辉三角的行数（n>0）:");
	scanf("%d",&n);
	
	n=n-1;
	left_width=(168-n)/2;	/* 输出的三角左边留空格的宽度 */
	for(k=1;k<=left_width+4;k++)
		printf(" ");
	printf("%d\n",1);		/* 输出第一行的数字 */ 

	Enterqueue(q,1);
	for(i = 1;i <=n;i++ ){
		Enterqueue(q,1);
		for(k = 1;k <= left_width;k++)
			printf(" ");
		left_width=left_width-3;
		for(j = 1;j <= i;j++){
			Deletequeue(q,&temp);
			if (temp < 10)
				printf(" %d    ",temp);	
			else if(temp >= 10 && temp <= 99)
				printf(" %d   ",temp);
			else if(temp >= 100 && temp <= 999)
				printf(" %d  ",temp);
			else if(temp >= 1000 && temp <= 9999)
				printf(" %d ",temp);
			else
				printf(" %d",temp);
			Gethead(q,&x);
			temp=temp+x;
			Enterqueue(q,temp);
		}
		printf(" %d",1);
		printf("\n");
	}
	return 0;
}
