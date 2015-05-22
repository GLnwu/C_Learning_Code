#include <stdio.h>

long Fact(int n){
	long temp = 1;
	int i;
	
	for(i = 1;i <= n;i++){
		if(n == 0)	return temp;
		temp = temp*i;
	}
	return temp;
}/* n!的非递归算法 */		

int main(void){
	int n;

	printf("请输入需要计算的阶乘数：（n >= ）:");
	scanf("%d",&n);
	printf("阶乘数为：%ld",Fact(n));
	return 0;
}

