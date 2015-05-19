#include <stdio.h>
#include "date.h"
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
