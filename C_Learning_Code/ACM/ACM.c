#include <stdio.h>
#define MAX 50
int find(p,e,i,d){
	int m,n,l;
	int p1,e1,i1;
	if(d<=p&&d<=e&&d<=i){
                for(m=1;p-23*m>0;m++){
                p1=p-23*m;
                for(n=1;e-28*n>0;n++){
                        e1=e-28*n;
                        if(p1==e1){
                                for(l=1;i-33*l>0;l++){
                                        i1=i-33*l;
                                        if(i1==e1&&i1>d)
                                                return i1;
                                        }
                        }
                }
        }
        }
	for(m=1;p+23*m<=21253;m++){
		p1=p+23*m;
		for(n=1;e+28*n<=21253;n++){
			e1=e+28*n;
			if(p1==e1){	
				for(l=1;i+33*l<=21253;l++){
					i1=i+33*l;
					if(i1==e1&&i1>d)
						return i1;
		
				}
			}	
		}
	}
	return 0;
}
int main(void)
{
	int p,e,i,d;
	int A[MAX][4];
	int j=0,k;

	scanf("%d %d %d %d",&p,&e,&i,&d);
	while(d>=0){
		A[j][0]=p;
		A[j][1]=e;
		A[j][2]=i;
		A[j][3]=d;		
		j++;
		scanf("%d %d %d %d",&p,&e,&i,&d);
	}
	if(j==0)
		return 0;
		for(k=0;k<=(j-1);k++){
			A[k][2]=find(A[k][0],A[k][1],A[k][2],A[k][3]);
			A[k][2]=A[k][2]-A[k][3];	
			printf("Case %d: the next triple peak occurs in %d days.\n",k+1,A[k][2]);
		}
	return 0;
}
