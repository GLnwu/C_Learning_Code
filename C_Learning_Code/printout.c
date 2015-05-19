/* printout.c -- 使用转换说明符 */
#include<stdio.h>
#define PI 3.141593
int main(void)
{
	int	number	 = 5;
	float	expresso = 13.5;
	int	cost	 = 3100;
	
	printf("The %d CEOs drank %1.1f cups of expresso.\n",number,expresso);
	printf("The value of pi os %f. \n",PI);
	printf("Farewell! thou art too dear for my possessing, \n");
	printf("%c%d",'$',2*cost);
	return 0;
}
