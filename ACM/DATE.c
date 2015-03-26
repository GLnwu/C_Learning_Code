#include <stdio.h>
int find(p,e,i,d){
	int m,n,l;
	int p1,e1,i1;
	if(d<=p&&d<=e&&d<=i){
		for(m=1;p+23*m>0;m++){
                p1=p-23*m;
                for(n=1;e+28*n>0;n++){
                        e1=e-28*n;
                       	if(p1==e1){ 
                                for(l=1;i+33*l>0;l++){
                                        i1=i-33*l;
                                        if(i1==e1&&i1>d)
                                 		return i1;
                                	}/* 最内层循环 */
                       	} 
                }/* 第二层循环 */
        }/* 最外层循环 */
	}
	for(m=1;p+23*m<=21252;m++){
		p1=p+23*m;
		for(n=1;e+28*n<=21252;n++){
			e1=e+28*n;
			if(p1==e1){	
				for(l=1;i+33*l<=21252;l++){
					i1=i+33*l;
					if(i1==e1&&i1>d)
						return i1;
				}/* 最内层循环 */
			}	
		}/* 第二层循环 */
	}/* 最外层循环 */
	return 0;
}
int main(void)
{
	int p,e,i;	/* p，e，i分别表示体力情感和智力出现高峰的时间 */
			/* p=e=i=d=-1时，输入数据结束 */
	int d;		/* d是给定的时间，可能小于p，e，i，d小于365且非负 */
			/* 所求时间小于21252 */
	scanf("%d %d %d %d",&p,&e,&i,&d);
	i=find(p,e,i,d);
	printf("%d",i-d);
	return 0;
}
