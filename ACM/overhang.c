#include <stdio.h>

int find(float c){
        float i;
        float sum=0;

        for(i=2;sum<c;i++){
                sum=sum+1/i;
        }
        return (i-2);
}

int main(void)
{
	int j=0,n;
	float c;
	int A[50];
 
	scanf("%f",&c);
	while(c!=0){
		 A[j]=find(c);
		 j++;
		 scanf("%f",&c);
	}
	for(n=0;n<j;n++)
		printf("%d card(s)\n",A[n]);   
	return 0;
}
