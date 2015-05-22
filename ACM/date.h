int find(p,e,i,d){
	int m,n,l;
	int p1,e1,i1;
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
