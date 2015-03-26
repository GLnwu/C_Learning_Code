#include<stdio.h>
int find(float c){
        float i;
	float sum=0;

        for(i=2;sum<c;i++){
                sum=sum+1/i;
	}
        return (i-2);
}

int main(void){
	float c;
	int n;

	scanf("%f",&c);
	n=find(c);
	printf("%d",n);

	return 0;
}
