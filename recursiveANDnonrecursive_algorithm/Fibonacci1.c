#include <stdio.h>

int main(void){
	long int i=1,n;
	long int temp;
	long int Fib1=0,Fib2=1;
	
	printf("Fibonacci:input(n):");
	scanf("%ld",&n);
	printf("%ld %ld",Fib1,Fib2);
	if(n<=2){
		printf("\n");
		return 0;
	}
	while(i <= n-2){
		temp=Fib2;
		Fib2 = Fib1+Fib2;
		Fib1=temp;
		printf(" %ld",Fib2);
		i++;
	}
	printf("\n");
	return 0;
}/* Fibonacci 的非递归实现 */
		
