#include <stdio.h>

long Fact(long n);

long Fact(long n){
	if(n == 0)	return 1;
	else
		return (n*Fact(n-1));
}/* n！的递归算法 */

int main(void){
	long n;

	printf("请输入需要计算的阶乘数：（n >= ）:");
	scanf("%ld",&n);
	printf("阶乘数为：%ld",Fact(n));
	return 0;
}
