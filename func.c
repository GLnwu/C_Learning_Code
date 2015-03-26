#include <stdio.h>

int func(int m,int n);

int func1(int m,int n);

int func(int m,int n){
	int r;
	if(n > m)return (func(n,m));
	else if(n == 0)	return (m);
	else{
		r=m%n;
		return (func(n,r));
	}
}/* 递归式计算最大公约数的算法 */

int func1(int m,int n){
	int r=1;
	if(m == 0)	return n;
	if(n == 0)	return m;
	while(m%n != 0){
		r = m%n;
		m = n;	
		n = r;
	}
	return r;
}

int main(void){
	int m,n;
	
	printf("请输入m，n的值：");
	scanf("%d %d",&m,&n);	
	printf("%d\n",func1(m,n));
	return 0;
}/* 计算两个数字的最大公约数，原理为辗转相处法 */
