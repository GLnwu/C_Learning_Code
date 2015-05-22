#include <stdio.h>
int main(void)
{
	int a[10];
	int *temp=NULL;
	a[1]=10;
	*temp=a[1];
	printf("%d",*temp);
	return 0;
}/* 在temp初始化为NULL后，又将a[1]所代表的值赋值给*temp即NULL，是未定义的，*temp没有只想实际的内存，无法完成赋值操作 */
 /* temp是指向整数型数字的指针，此例子中却将a[1]的值赋值给了一个地址为空的temp，错误！ */
