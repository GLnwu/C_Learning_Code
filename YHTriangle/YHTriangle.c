#include <stdio.h>
#include "YHTriangle.h"

int main(void){
	int i,j,k,n,left_width;
	int temp,x;				/* 暂时存储从队列里面出来的杨辉三角中的第j行相邻的两个数字 */
	Seqqueue head;
	Seqqueue *q=&head;
	q->front=q->rear=0;

	printf("请输入你所需要输出的杨辉三角的行数\n");
	printf("请全屏模式执行，可输出更多行数的杨辉三角,行数高于20的行数无法对齐：");
	scanf("%d",&n);
	left_width=(168-n)/2;
	for(k=1;k<=left_width+4;k++){
		printf(" ");
	}/* 输出第一行需要的空格数 */
	printf("%d\n",1);

	Enterqueue(q,1);				/* 第一行元素入队 */		
	for(i = 1;i <= n;i++){
		Enterqueue(q,1);			/* 第n行的第一个元素入队 */

		for(k=1;k<=left_width;k++){
			printf(" ");
		}
		left_width=left_width-3;

		for(j = 1;j <= i;j++){
			Deletequeue(q,&temp);		/* 第j个元素出队 */
			if (temp<10)			/* 打印第j个元素 */
				printf(" %d    ",temp);
			else if (temp >= 10 && temp <= 99)	
				printf(" %d   ",temp);
			else if (temp >= 100 && temp<=999)		
				printf(" %d  ",temp);
			else if (temp >= 1000 && temp<=9999)
				printf(" %d ",temp);
			else 			
				printf(" %d",temp);	/* 多路条件语句控制使数字对齐 */
			Gethead(q,&x);			/* 取得当前队列的头指针指向的元素 */
			temp=temp+x;
			Enterqueue(q,temp);		/* 将相加的元素存储到队尾 */
		}/* 出第n-1行队列，入第n行队列 */		
		printf(" %d",1);
		printf("\n");				/* 输出第i行元素后，换行 */
	}
	return 0;
}/* 循环队列实现打印杨辉三角的前N行元素 */                                                                                                                               /* 所有杨辉三角中的数，最多实现5位数字包括5位数的对齐，如出现6位数字则无法对齐，需修改多路控制语句 */	
