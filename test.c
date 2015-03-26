#include<stdio.h>
#include<math.h>
int main(void)
{
	long double R;
	int n;
	int i=6;

	while(i>=1)
	{
		scanf("%Lf %d",&R,&n);
		printf("%Lf",pow(R,n));
		i--;
	}
	return 0;
}
