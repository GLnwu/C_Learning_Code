/*************************************************************************
    > File Name: p_and_s.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月11日 星期一 17时52分47秒
 ************************************************************************/

#include<stdio.h>
int main(void)
{
	char *mesg = "Don't be a fool!";
	char * copy;

	copy = mesg;
	printf("%s\n",copy);
	printf("mesg = %s; &mesg = %p; value = %p\n",mesg,&mesg,mesg);
	printf("copy = %s; &copy = %p; value = %p\n",copy,&copy,copy);
	return 0;
}
