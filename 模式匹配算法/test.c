#include <stdio.h>

int main(void){
	char c;
 	static long long int i=1;
	scanf("%c",&c);
	printf("**\n");
	while(c != EOF){
		printf("%ld\n",i);
		i++;
		scanf("%c",&c);
	}
	printf("%d",i);
	return i;
}	
