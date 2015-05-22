#include <stdio.h>

int Fib(int n){
	if(n == 0)	return 0;
	else if(n == 1)	return 1;
	else		return (Fib(n-1)+Fib(n-2));
}/* 递归方式实现Fibonacci数列 */

int main(void){
	int n;
	
	printf("Fibonacci:intput(n)");
	scanf("%d",&n);
	printf("%d",Fib(5));
	return 0;
}

