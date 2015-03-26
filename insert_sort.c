#include <stdio.h>
#define MAXSIZE 100

void sort(int *p,int n);
/* insert sort 
 * n位数组实际存储的整数的个数*/

void sort(int *p,int n){
	int i,j,key;
	
	for(j = 1;j <= n-1;j++){
			



	}
			
}
		

int main(void){
	int temp,i=0,n,a[MAXSIZE];
	int *p;
	p=a;
	
	printf("请输入要排序的整数：");
	scanf("%d",&temp);
	while(temp > 0 ){
		a[i]=temp;
		i++;
		scanf("%d",&temp);
	}/* 输入所需要排序的数字 */

	n=i;
	printf("插入排序之前的数列为：");
	for(i = 0;i < n;i++)
		printf("%d",a[i]);
	printf("\n总共%d个数字\n",n);	
	sort(a,n);	/* 排序函数 */
	printf("插入排序之后的数列为：");
	for(i = 0;i < n;i++)
		printf("%d",a[i]);
	return 0;
}/* 只排序（0，+无穷）的数字序列 */


